/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void pedirv(int *v1);
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
void pedirv(int *v1){
 txy(10,10,"Input the month: ");
 scanf("%d",v1);
}
void ope(){
 int a;
 pedirv(&a);
 switch(a){
 case 1 : 
       gotoxy(10,12); printf("31 days\n");
       break;
 case 2 :
        gotoxy(10,12); printf("28 days\n");
        break;
 case 3 :
        gotoxy(10,12); printf("31 days\n");
        break;
 case 4 :
        gotoxy(10,12); printf("30 days\n");
        break;
 case 5 :
        gotoxy(10,12); printf("31 days\n");
        break;
 case 6 :
        gotoxy(10,12); printf("30 days\n");
        break;
 case 7 :
        gotoxy(10,12); printf("31 days\n");
        break;
 case 8 :
        gotoxy(10,12); printf("31 days\n");
        break;
 case 9 :
        gotoxy(10,12); printf("30 days\n");
        break;
 case 10 :
        gotoxy(10,12); printf("31 days\n");
        break;
 case 11 :
        gotoxy(10,12); printf("30 days\n");
        break;
 case 12 :
        gotoxy(10,12); printf("31 days\n");
        break;
 default: gotoxy(10,12); printf("Incorrect number\n");
 }
}
///////////////////////////////////////////////////////////////////////////
