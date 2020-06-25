#include <termios.h> // termios.h se requiere para las FUNCIONES DE APOYO
#include <stdlib.h>  // stdlib.h se requiere para las FUNCIONES DE APOYO
#include <stdio.h>
#include <math.h>
// NOTA: cuando usamos math.h se agrega -lm a la orden de compilado, ejp:
// !gcc p504menu.c -o p504menu -lm && ./p504menu

//DECLARACION FUNCIONES DE APOYO
void gotoxy(int x, int y); 
void txy(int x, int y, char *txt); 
void clrscr();
char getch(void);
char getche(void);

//INICIA PROGRAMA
void sumar();
void restar();
void mul();
void divi();

void main()
  {
  char opcion;
  do
    {
    clrscr();
    txy(20,2,"Opciones:");
    txy(20,3,"Sumar........[s]");
    txy(20,4,"Restar.......[r]");
    txy(20,5,"Dividir......[d]");
    txy(20,6,"Multiplicar..[m]");
    txy(20,7,"Salir........[x]");
    txy(20,9,"Opción:");
    opcion=getch();
    switch(opcion)
       {
       case 's':sumar();break;
       case 'r':restar();break;
       case 'd':divi();break;
       case 'm':mul();break;
       }
    }while(opcion!='x');
  }

void pedirab(float *op1, float *op2) //Argumentos por referencia
  {
  txy(20,10,"Ingresa primer valor: ");
  scanf("%f",op1);
  txy(20,11,"Ingresa segundo valor: ");
  scanf("%f",op2);
  }

void sumar()
  {
  float a,b,r;
  pedirab(&a,&b);
  r=a+b;
  gotoxy(20,13);
  printf("%f + %f = %f",a,b,r);
  txy(20,15,"Presiona cualquier tecla para continuar");
  getch();
  }

void restar()
  {
  float a,b,r;
  pedirab(&a,&b);
  r=a-b;
  gotoxy(20,13);
  printf("%f - %f = %f",a,b,r);
  txy(20,15,"Presiona cualquier tecla para continuar");
  getch();
  }
void mul(){
 float a,b,r;
 pedirab(&a, &b);
 r=a*b;
 gotoxy(20,13);
 printf("%.2f X %.2f = %.2f",a,b,r);
 txy(20,15,"Preciones cualquier tecla para continuar");
 getch();
}
void divi(){
 float a,b,r;
 pedirab(&a, &b);
 r=a/b;
 gotoxy(20,13);
 printf("%.2f / %.2f = %.2f",a,b,r);
 txy(20,15,"Precione cualquier tecla para continuar");
 getch();
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
