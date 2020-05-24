
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int N, i;
    
    scanf("%d", &N);

    int id[N];
    char nombre[N][50];
    float peso[N];
    float estatura[N];



    for (i=0;i<N; i++){
        scanf("%d", &id[i]);
        getchar();
        scanf("%[^\n]", nombre[i]);
        scanf("%f", &peso[i]);
        scanf("%f", &estatura[i]);
    }
    

    for (i=N-1;i>=0; i--){
        printf("%d %s %.1f\n", id[i], nombre[i], peso[i]/pow(estatura[i],2));
    }
    

    
    return 0;
}
