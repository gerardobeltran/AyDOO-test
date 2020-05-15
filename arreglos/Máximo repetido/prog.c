#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count, may, k=0;
    scanf("%d", &count);
    int num[count];

    for (size_t i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
        if (i==0) may=num[i];
        else if (num[i]>may) may=num[i];
    }
    
    for (size_t i = 0; i < count; i++)
    {
        if(num[i]==may) k++;
    }
    
    printf("%d\n", k);
    
    return 0;
}
