/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void pedirv(int *v, int *pow);
void ope();
///////////////////////////////////////////////////////////////////////////

/////////////////////////////void principal////////////////////////////////
void main(){
 clrscr();
 ope();
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
void pedirv(int *v, int *pow){
 txy(10,10,"Introduce valor: ");
 scanf("%d",v);
 txy(10,12,"introduce la potencia: ");
 scanf("%d",pow);
}
void ope(){
 int a,cont=0,tope,res;
 pedirv(&a, &tope);
 do{
  res=a*a;
  cont++;
 }while(cont==tope);
 gotoxy(10,15); printf("[%d] = [%d]\n",a,res);
}
///////////////////////////////////////////////////////////////////////////
