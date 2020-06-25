/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#define price_peso 19.20
#define price_libra 0.78
#define price_yuan 7.04
#define price_euro 0.90
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void pedirv(int *v);
void con();
///////////////////////////////////////////////////////////////////////////

/////////////////////////////void principal////////////////////////////////
void main(){
 clrscr();
 con();
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
void pedirv(int *v){
 txy(10,10,"Input the total to convert: ");
 scanf("%d",v); 
}
void con(){
 float p,l,y,e;
 int can;
 pedirv(&can);
 p=can*price_peso;
 e=can*price_euro;
 l=can*price_libra;
 y=can*price_yuan;
 gotoxy(10,12); printf("the input is: %d",can);
 gotoxy(10,14); printf("The Euros is: %.2f",e);
 gotoxy(10,16); printf("The pesos: %.2f",p);
 gotoxy(10,18); printf("The Libras: %.2f",l);
 gotoxy(10,20); printf("The Yenes: %.2f \n",y);

}
/////////////////////////////////////////////////////////////////////////
