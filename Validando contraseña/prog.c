#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define bool int
int main(){
char pwd[200];
bool correcto, enc=FALSE;
int i, k=0, N, min, may, dig, pun, tam;


  scanf("%d", &N);


  for (i=0;i<N; i++){ 
  enc=FALSE;
   scanf("%s", pwd);
   tam=strlen(pwd);
   if (tam<=32 && tam>=6){
    k=0;
    min=0, may=0, dig=0,pun=0;   
   while (pwd[k]){
      if (pwd[k]>='a' && pwd[k] <='z') min++;
      if (pwd[k]>='A' &&pwd[k]<='Z') may++;
      if (isdigit(pwd[k])) dig++;
      if (ispunct(pwd[k])) pun++;

     k++;
   }  
  }

    correcto = min && may && dig && !pun;

     if (correcto)
         printf("%s: Valido\n", pwd);
     else
        printf("%s: Invalido\n", pwd);

 }

return 0;

}