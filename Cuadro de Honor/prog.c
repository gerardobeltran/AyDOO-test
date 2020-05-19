#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ordenarCalifDesc(char nombre[][50],float calif[],int tam)
{
    int i,j;
    float tempCalif;
    char tempNom[50];
    for (i=0;i<tam;i++){
        for (j=0;j<tam-1-i;j++){
            if (calif[j]<calif[j+1]){
                tempCalif=calif[j];
                strcpy(tempNom, nombre[j]);
                calif[j]=calif[j+1];
                strcpy(nombre[j], nombre[j+1]);
                calif[j+1]=tempCalif;
                strcpy(nombre[j+1], tempNom);
            }
        }
    }
}

void ordenarNomAce(char nombre[][50],float calif[],int tam)
{
    int i,j,tempCalif;
    char tempNom[50];
    for (i=0;i<tam;i++){
        for (j=0;j<tam-1-i;j++){
            if (strcmp(nombre[j],nombre[j+1])>0){
                tempCalif=calif[j];
                strcpy(tempNom, nombre[j]);
                calif[j]=calif[j+1];
                strcpy(nombre[j], nombre[j+1]);
                calif[j+1]=tempCalif;
                strcpy(nombre[j+1], tempNom);
            }
        }
    }
}

void ordenarNombreAce(char nombre[][50],int tam)
{
    int i,j,tempCalif;
    char tempNom[50];
    for (i=0;i<tam;i++){
        for (j=0;j<tam-1-i;j++){
            if (strcmp(nombre[j],nombre[j+1])>0){
                strcpy(tempNom, nombre[j]);
                strcpy(nombre[j], nombre[j+1]);
                strcpy(nombre[j+1], tempNom);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int i, N, cont=0;
    scanf ("%d", &N);
    
    float calif[N];
    char nombre[N][50];

    char cuadro[N][50];
     
    for (i=0; i< N; i++ ){
      getchar();
      scanf("%[^\n]", nombre[i]);
      //getchar();
      scanf("%f", &calif[i]);
    
    }
  
    ordenarCalifDesc(nombre, calif, N);
  
    for (i=0; i< N ; i++ ){
        if (calif[i]>=9.5){
            strcpy(cuadro[cont], nombre[i]);
            cont++;
        }
    }
    ordenarNombreAce(cuadro, cont);

    
    for (i=0; i< cont ; i++ )
        printf("%s\n",  cuadro[i]);
    
    
    return 0;
}
