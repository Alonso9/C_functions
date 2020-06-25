/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void pedir(int *v);
void fac();
///////////////////////////////////////////////////////////////////////////

/////////////////////////////void principal////////////////////////////////
void main(){
 clrscr();
 fac(); 
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
void fac(){
 int a,n=1;
 pedirv(&a);
 for(int i=1; i<=a; i++)
     n=n*i;  
 gotoxy(10,12); printf("The factorial of [%d] is: [%d] \n",a,n);
}
///////////////////////////////////////////////////////////////////////////