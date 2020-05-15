#include <stdio.h>
int main(int argc, char const *argv[])
{
    int j, i, N, c; 

    scanf("%d %d", &N, &c);

    int num[N];

    for ( i = 0; i < N; i++){
        scanf("%d", &num[i]);
    }
    
    i=0;
    for (j=1; j<=c; j++){
        if (i==N-1 ) 
            i=0;
        else
            i++;

    }

    printf("%d\n", num[i-1]);

    return 0;
}
