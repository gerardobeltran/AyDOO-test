#include <stdio.h>
#include <stdlib.h>


void ordenar(int datos[],int tam)
{
    int I,J,A;
    for (I=0;I<tam;I++){
        for (J=0;J<tam-1-I;J++){
            if (datos[J]<datos[J+1]){
                A=datos[J];
                datos[J]=datos[J+1];
                datos[J+1]=A;
                
            }
        }
    }
    
}
int main(int argc, char const *argv[])
{
    int i,N;
    float suma=0;
    scanf("%d", &N);

    int *m = (int *)malloc(N*sizeof(int));
    for(i=0;i<N;i++){
        scanf("%d",&m[i]);
        suma+=m[i];
    }
    float mitad = suma / 2;

    ordenar(m,N);
    
    float total=0;
    
    for(i=0;i<N && total<=mitad ;i++){
        total+=m[i];
           }

    printf("%d\n", i);




    
    return 0;
}
