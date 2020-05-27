#include <stdio.h>
#define TRUE 1
#define FALSE 0
int busca(char gato[3][3], char jugador){
    int i, gana = FALSE;

    for(i = 0; i < 3 && gana == 0; i++){
        // Busjugador en filas
        if(gato[i][0] == jugador && gato[i][1] == jugador && gato[i][2] == jugador)
            gana = TRUE;
        // Busjugador en columnas
        else if(gato[0][i] == jugador && gato[1][i] == jugador && gato[2][i] == jugador)
            gana = TRUE;
    }
    //Busjugador en diagonales
    if (gana==FALSE){
        if(gato[0][0] == jugador && gato[1][1] == jugador && gato[2][2] == jugador)
            gana = TRUE;
        else if(gato[0][2] == jugador && gato[1][1] == jugador && gato[2][0] == jugador)
            gana = TRUE;
    }
    return gana;
}

int main(){

    int i, j;

    char gato[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%c", &gato[i][j]);
        getchar();
    }

    if(busca(gato, 'x') == 1)
        printf("Roots!:D");
    else if(busca(gato, 'o') == 1)
        printf("Velafloow 8)");
    else
        printf("Bailo Verta :S");

	return 0;
}