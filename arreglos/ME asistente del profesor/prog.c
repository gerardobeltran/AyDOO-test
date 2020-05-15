#include <stdio.h>

void ordenar(int datos[],int tam)
{
    int I,J,A;
    for (I=0;I<tam;I++){
        for (J=0;J<tam-1-I;J++){
            if (datos[J]>datos[J+1]){
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
    int r[11]={};
    float suma=0;
    scanf("%d", &N);

    int c[N];
    for(i=0;i<N;i++){
        scanf("%d",&c[i]);
        r[c[i]]++;
    }

    ordenar(c,N);
    
   
    for(i=0;i<N ;i++){
       printf("%d ",c[i]); 
    }
    printf("\n");
    for(i=0;i<=10 ;i++){
       printf("%d ",r[i]); 
    }

    return 0;
}

