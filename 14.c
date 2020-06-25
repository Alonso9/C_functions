/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void pedirv(float *a, int *b);
void operacion();
///////////////////////////////////////////////////////////////////////////

/////////////////////////////void principal////////////////////////////////
void main(){
 clrscr();
 operacion();
}
///////////////////////////////////////////////////////////////////////////


/////////////////funciones de apoyo///////////////////////////////////////
void txy(int x, int y, char *txt){
 gotoxy(x,y);
 printf("%s",txt);
}
void gotoxy(int x, int y){
 printf("%c[%d;%df",0x1B,y,x);
}
void clrscr(void)
{
 system("clear");
}
void pedirv(float *a,int *b) {
txy(10,10,"Ingresa el precio: ");
scanf("%f",a);
txy(10,12,"Ingresa la cantidad: ");
scanf("%d",b);
}
void operacion() {
float a;
int b;
pedirv(&a,&b);
if(b>=6 && b<=12) { gotoxy(10,14); printf("Cantidad [%d], precio [%.2f] y total [%.2f] \n",b,a,( (a*b)-((a*b)*.04)) );}
if(b>12) { gotoxy(10,14); printf("Cantidad [%d], precio [%.2f] y total [%.2f]\n",b,a,(a*b)-((a*b)-((a*b)-((a*b)*.10))) );}
if(b<=5) { gotoxy(10,14); printf("Cantidad [%d], precio [%.2f] y total [%.2f]\n",b,a,a*b );}
}
///////////////////////////////////////////////////////////////////////////

