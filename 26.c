#include <termios.h> // termios.h se requiere para las FUNCIONES DE APOYO
#include <stdlib.h>  // stdlib.h se requiere para las FUNCIONES DE APOYO

#include <stdio.h>
#include <math.h>
#define PI 3.1416

// NOTA: cuando usamos math.h se agrega -lm a la orden de compilado, ejp:
// !gcc p526.c -o p526 -lm && ./p526

//DECLARACION FUNCIONES DE APOYO
void gotoxy(int x, int y); 
void txy(int x, int y, char *txt); 
void clrscr();
char getch(void);
char getche(void);

//INICIA PROGRAMA
double areacirculo(double radio);
void main()
  {
  double radio,area;
  clrscr();
  txy(10,2,"Ingresa radio:");
  scanf("%lf",&radio);
  area = areacirculo(radio);
  printf("Area para r= %lf es : %lf \n", radio, area);
  printf("Area para r=2.3 es : %lf",areacirculo(2.3));
  getch();
  }
//Funciones del programa:
double areacirculo(double radio)
   {
   double A;
   A=PI*(radio*radio);
///   radio= -10;
   return A;
   }


// FUNCIONES DE APOYO:
// COPIARLAS DESPUES DEL main() EN CADA PROGRAMA QUE REQUIERA USO DE ELLAS
// Y DECLARAR LOS PROTOTIPOS DE LAS FUNCIONES ANTES DEL main()

void txy(int x, int y, char *txt)
  {
  gotoxy(x,y);
  printf("%s",txt);
  }

void gotoxy(int x,int y)    
  {
  printf("%c[%d;%df",0x1B,y,x);
  }

void clrscr(void)
  {
  system("clear");
  }

static struct termios old, current;
/* Initialize new terminal i/o settings */
void initTermios(int echo) 
{
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  current = old; /* make new settings same as old settings */
  current.c_lflag &= ~ICANON; /* disable buffered i/o */
  if (echo) 
    {
      current.c_lflag |= ECHO; /* set echo mode */
    } else 
    {
      current.c_lflag &= ~ECHO; /* set no echo mode */
    }
  tcsetattr(0, TCSANOW, &current); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void) 
{
  tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo) 
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void) 
{
  return getch_(0);
}

/* Read 1 character with echo */
char getche(void) 
{
  return getch_(1);
}
