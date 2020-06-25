/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void pedirv(float *v, int *a);
void menu();
///////////////////////////////////////////////////////////////////////////

/////////////////////////////void principal////////////////////////////////
void main(){
 clrscr();
 menu();
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
void pedirv(float *v, int *a){
 txy(1,1,"Kelvin = 1 and Fahrenheit = 0");
 txy(10,10,"Input the degrees: ");
 scanf("%f",v);
 txy(10,12,"Choose the operatation : ");
 scanf("%d",a);
}
void menu(){
 float a;
 int op;
 pedirv(&a,&op);
 switch(op){
  case 0:
	  gotoxy(10,14); printf("The degrees in Celsius are: [%.2f] and Fahrenheit are: [%.2f]\n",a,( (a*9/5)+32) );
	  break;
  case 1:
	  gotoxy(10,14); printf("The degrees in Celsius are: [%.2f] and Kelvin are: [%.2f]\n",a, (a+273.15) );
	  break;

  default: gotoxy(10,14); printf("Input correct data\n");
 } 
}
///////////////////////////////////////////////////////////////////////////
