
#include <stdio.h>
#include <math.h>

struct persona{
    int id;
    char nombre[50];
    float peso;
    float estatura;
};

int main(int argc, char const *argv[])
{
    int N, i;

    scanf("%d", &N);

    struct persona p[N];
   
    for (i=0;i<N; i++){
        scanf("%d", &p[i].id);
        scanf("%*c%[^\n]%*c", p[i].nombre);
        scanf("%f", &p[i].peso);
        scanf("%f", &p[i].estatura);
    }
    

    for (i=N-1;i>=0; i--){
        float mc = p[i].peso/pow(p[i].estatura,2);
        printf("%d %s %.1f\n", p[i].id, p[i].nombre, mc);
    }
    

    
    return 0;
}
