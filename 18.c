/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void oedirv(int *v);
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
 txy(10,10,"Input the number: ");
 scanf("%d",v);
} 
void fun(){
 int a;
 pedirv(&a);
 if(a % 2 == 0) { 
	 gotoxy(10,12); printf("The number [%d] is Odd number \n",a);
 }
 else{
	 gotoxy(10,12); printf("The number [%d] is Even number \n",a);
 }
}
///////////////////////////////////////////////////////////////////////////

