/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void pedirv(float *v1, float *v2, float *v3);
void case1();
///////////////////////////////////////////////////////////////////////////

/////////////////////////////void principal////////////////////////////////
void main(){
 clrscr();
 case1();
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
void pedirv(float *v1, float *v2, float *v3){
 txy(10,10,"Input the firts number: ");
 scanf("%f",v1);
 txy(10,12,"Input the second number: ");
 scanf("%f",v2);
 txy(10,14,"Input the three number: ");
 scanf("%f",v3);
}
void case1(){
 float a,b,c;
 pedirv(&a, &b, &c);
 if(a>b && b>c){
	 gotoxy(10,16); printf("[%.2f] [%.2f] [%.2f]",a,b,c);
         gotoxy(10,18); printf("[%.2f] [%.2f] [%.2f] \n",c,b,a);
 }
 if(b>a && a>c){
	 gotoxy(10,16); printf("[%.2f] [%.2f] [%.2f]",b,a,c);
         gotoxy(10,18); printf("[%.2f] [%.2f] [%.2f] \n",c,a,b);
 }
 if(c>a && a>b){
	 gotoxy(10,16); printf("[%.2f] [%.2f] [%.2f]",c,b,a);
         gotoxy(10,18); printf("[%.2f] [%.2f] [%.2f] \n",a,b,c);
 }
 if(a<b && b<c){
        gotoxy(10,16); printf("[%.2f] [%.2f] [%.2f]",a,b,c);
        gotoxy(10,18); printf("[%.2f] [%.2f] [%.2f] \n",c,b,a);

 }
}
///////////////////////////////////////////////////////////////////////////

