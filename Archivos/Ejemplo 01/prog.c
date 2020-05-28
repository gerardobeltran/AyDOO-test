#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *df = fopen("info2.txt", "r");
    int num1, num2;
    char  nombre[40];

    char car, cadena3[1000], cadena2[1000],cadena[1000];
    
        while (!feof(stdin)){
            fscanf(stdin, "%d%*c%[^,]%*c%d%*c", &num1, nombre, &num2);
            printf("%d %s %d\n", num1, nombre, num2);
        }
        fseek(stdin,0,SEEK_SET);

        while (!feof(stdin)){
            fscanf(stdin, "%d%*c%[^,]%*c%d%*c", &num1, nombre, &num2);
            printf("%d %s %d\n", num1, nombre, num2);
        }


    return 0;
}