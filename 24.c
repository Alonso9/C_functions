/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void pedirv(int *v);
void fun();
///////////////////////////////////////////////////////////////////////////

/////////////////////////////void principal////////////////////////////////
void main(){
 clrscr();
 fun();
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
 txy(10,8,"Input the number: ");
 scanf("%d",v);
}
void fun(){
 int numero,unidades,decenas,centenas,millar; 
 pedirv(&numero);
 unidades = numero%10; numero /= 10; //unidades = 2 , numero = 215
 decenas = numero%10; numero /= 10; //decenas = 5 , numero = 21
 centenas = numero % 10; numero /= 10; //centenas = 1 , numero = 2
 millar = numero % 10 ; numero /= 10; //millar = 2 , numero = 0
 switch(millar){
  case 1: txy(10,12,"M"); break;
  case 2: txy(10,12,"MM"); break;
  case 3: txy(10,12,"MMM"); break;
 }
 switch(centenas){
  case 1: txy(11,10,"C"); break;
  case 2: txy(11,10,"CC"); break;
  case 3: txy(11,10,"CCC") ;break;
  case 4: txy(11,10,"CD"); break;
  case 5: txy(11,10,"D"); break;
  case 6: txy(11,10,"DC"); break;
  case 7: txy(11,10,"DCC"); break;
  case 8: txy(11,10,"DCCC"); break;
  case 9: txy(11,10,"CM"); break;
 }
 switch(decenas){
  case 1: txy(12,10,"X"); break;
  case 2: txy(12,10,"XX"); break;
  case 3: txy(12,10,"XXX"); break;
  case 4: txy(12,10,"XL"); break;
  case 5: txy(12,10,"L"); break;
  case 6: txy(12,10,"LX"); break;
  case 7: txy(12,10,"LXX"); break;
  case 8: txy(12,10,"LXXX"); break;
  case 9: txy(12,10,"XC"); break;
  }
  switch(unidades){
  case 1: txy(13,10,"I \n");break;
  case 2: txy(13,10,"II \n");break;
  case 3: txy(13,10,"III \n");break;
  case 4: txy(13,10,"IV \n");break;
  case 5: txy(13,10,"V \n");break;
  case 6: txy(13,10,"VI \n");break;
  case 7: txy(13,10,"VII \n");break;
  case 8: txy(13,10,"VIII \n");break;
  case 9: txy(13,10,"IX \n");break;
 }
}
///////////////////////////////////////////////////////////////////////////
