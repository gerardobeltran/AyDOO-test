#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n; 
    int r, contador=0;
    scanf ("%d", &n);
    
    while (n!=0){
        
        r = n % 10;
        n = n / 10;
        if (r % 2 ==0) contador++;

     }

    if (contador%2==0) printf("SI");
        else   printf("NO");
    
    return 0;
}
