/////////////////// gotoxy(x,y) ////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 128     //////definicion de apoyo para la cadena///////////////
///////////////////////////////////////////////////////////////////////////

/////funciones auxilares//////////////////////////////////////////////////
void gotoxy(int x, int y);
void txy(int x, int y, char *txt);
void clrscr();
void encrip(char frase[MAX], int numero);
void desencrip(char frase[MAX], int numero);
///////////////////////////////////////////////////////////////////////////

/////////////////////////////void principal////////////////////////////////
void main(){
 clrscr();
 int x;
 char cadena[MAX];
 txy(10,8,"Encriptacion/Desencriptacion por:");
 txy(10,9," METODO CESAR:");
 txy(10,10,"-----------------------------\n");
 txy(10,12,"introduce una cadena:     ");
 //Un especificador que admite la entrada del texto
 scanf("%128[^\n]", cadena);
 //Vacía el buffer del teclado
 while(getchar()!='\n');
///////////////////numero decarecteres agregados////////////////////////// 
 txy(10,14,"introduce un numero : ");
 scanf("%d",&x);
///////////Vacía el buffer del teclado////////////////////////////////////
 while(getchar()!='\n');
//////////// //Llamamos a la funcion encriptar////////////////////////////
 encrip(cadena, x);
 getchar();
/////////////Llamamos a la funcion desencriptar///////////////////////////
 desencrip(cadena, x);
 getchar();
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
void desencrip(char frase[MAX], int numero){
int i=0;
while(frase[i]!='\0'){
 frase[i]=frase[i]-numero;
 i++;
}
 gotoxy(10,17); printf("La frase desencriptada es: %s",frase);
}
void encrip(char frase[MAX], int numero){
 int i=0;
 char letra;
 while(frase[i]!='\0'){
  frase[i]=frase[i]+numero;
  i++;
 }
 gotoxy(10,16); printf("La frase encriptada es: %s",frase);
}
///////////////////////////////////////////////////////////////////////////
