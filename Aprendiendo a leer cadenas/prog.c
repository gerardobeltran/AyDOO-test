#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    
    int n, i, len;
    char cadena[1500], salida[1500];
    scanf("%d", &n);
    getchar();
    for (i=0; i< n; i++){
        scanf("%[^\n]", cadena);
        getchar();
        len = strlen(cadena);
        sprintf(salida, "\"%s\" tiene %d caracteres\n", cadena,len);
        printf("%s", salida);
    }

 
    return 0;
}