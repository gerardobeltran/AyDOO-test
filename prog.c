#include <stdio.h>
int main(int argc, char const *argv[])
{

char cadena[10000], m[10000];
int t;
scanf("%[^\n]",cadena);
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        scanf("%[^\n]",m);
        getchar();
        printf("%s\n", m);
    }

    
    return 0;
}

