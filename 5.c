/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////
 
/////funciones auxilares/////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
char getch(void);
char getche(void);
///////////////////////////////////////////////////////////////////////////
 
/////////////////////////////void principal////////////////////////////////
void main(){
int opcion;
printf("Introduce numero: ");
scanf("%d",&opcion);
do{
  clrscr();
  switch(opcion){
   case 1: printf("One : 1 \n"); break;
   case 2: printf("Two : 1 \n"); break;
   case 3: printf("Three : 1 \n"); break;
   case 4: printf("four : 1 \n"); break;
   case 5: printf("Five : 1 \n"); break;
   case 6: printf("Six : 1 \n"); break;
   case 7: printf("Seven : 1 \n"); break;
   case 8: printf("Eigth : 1 \n"); break;
   case 9: printf("Nine : 1 \n"); break;
   case 10: printf("Ten : 1 \n"); break;
   case 11: printf("Eleven : 1 \n"); break;
  }  
 }while(opcion!='s');
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
void clrscr(void){
 system("clear");
}
void pedirv(int *v){
 txy(10,10,"Ingresa valor: ");
 scanf("%d",v);
}
/*char getch(void){
 return getch_(1);
}
char getche(void){
 return getch_(0);
}*/
///////////////////////////////////////////////////////////////////////////
