#include <stdio.h>
void ordenar(int datos[],int tam)
{
    int j,i,A;
    for (i=0;i<tam;i++){
        for (j=0;j<tam-1-i;j++){
            if (datos[j]>datos[j+1]){
                A=datos[j];
                datos[j]=datos[j+1];
                datos[j+1]=A;
                
            }
        }
    }
}    



int main(int argc, char const *argv[])
{
    int M,N, j, i;
    scanf("%d %d", &M, &N);
    int datos[N*M];

    for (i=0; i<N*M; i++){
        scanf ("%d", &datos[i]);
    }
    ordenar (datos, N*M);
    j=0;
    for (i=0; i<N*M; i++){
        printf ("%d ", datos[i]);
        j++;
        if ( j==N){
             j=0;
             printf("\n");
        }     
    }
    

    return 0;
}
