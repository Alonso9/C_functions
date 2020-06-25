/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void pedirv(long *v);
void de_bi();
///////////////////////////////////////////////////////////////////////////

/////////////////////////////void principal////////////////////////////////
void main(){
 clrscr();
 de_bi();
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
void pedirv(long *v){
 txy(10,10,"Input numbert to convert: ");
 scanf("%ld",v);
}
void de_bi(){
 long base=1, binary=0,re,dec_num,num;
 pedirv(&num);
 dec_num=num;
 while(num>0){
  re=num % 2;
  binary=binary+re*base;
  num= num/2;
  base=base*10;
 }
 gotoxy(10,12); printf("input number is: %ld",dec_num);
 gotoxy(10,14); printf("its binary equivalent is: %ld \n",binary);
}
///////////////////////////////////////////////////////////////////////////

