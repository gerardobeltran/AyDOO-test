#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char m[100];
    char *v;
    char cadena[10000];
    scanf("%[^\n]",cadena);
    int t = strlen(cadena);
for(int i=0;i<t;i++)
    {
        scanf("%[^\n]",m);
        getchar();
        v=strstr(cadena,m);
        printf("%s\n",v);
        t = strlen(v);
    }


    return 0;
}
