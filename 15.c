/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////

/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void pedirv(int *v1, int *v2, int *v3, int *v4);
void ope();
///////////////////////////////////////////////////////////////////////////

/////////////////////////////void principal////////////////////////////////
void main(){
 clrscr(),
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
void pedirv(int *v1,int *v2, int *v3, int *v4){
 txy(10,10,"input pos in X1: ");
 scanf("%d",v1);
 txy(10,12,"Input pos in Y1: ");
 scanf("%d",v2);
 txy(10,14,"Input pos in X2: ");
 scanf("%d",v3);
 txy(10,16,"input pos in Y2: ");
 scanf("%d",v4);
}
void ope(){
 int x1,x2,y1,y2;
 pedirv(&x1,&y1,&x2,&y2);
 clrscr();
 gotoxy(x1,y1); printf("*");
 gotoxy(x2,y2); printf("*");
 if(x2>x1 && y2>y1) printf("\n the distance between them is: (%d,%d) \n",x2-x1,y2-y1);
 if(x2>x1 && y2<y1) printf("\n the distance between them is: (%d,%d) \n",x2-x1,y1-y2);

 if(x2<x1 && y2>y1) printf("\n the distance between them is: (%d,%d) \n",x1-x2,y2-y1);
 if(x2<x1 && y2<y1) printf("\n the distance between them is: (%d,%d) \n",x1-x2,y1-y2);

 if(x2==x1 && y2==y1) printf("\n the distance between them is: (%d,%d) \n",x2-x1,y2-y1);
}
/////////////////////////////////////////////////////////////////////////

