#include <stdio.h>
int main(int argc, char const *argv[])
{

    int mat[3][4];
    int i,j, h , may;
    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for (j=0; j<4; j++){
        may= mat[0][j];
        h = 0;
        for (i=0; i<3;i++){
           if (mat[i][j]>may){
                may=mat[i][j];
                h=i;
           }
        }
        printf("%d %d\n", h+1, may );
    }

    return 0;
}
