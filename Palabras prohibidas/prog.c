#include <stdio.h>
#include <string.h>
int main (){
	int i,j,k,ls,lb;
	char str [101], buscar [101];
	scanf ("%[^\n]", str);
	ls=strlen(str);
	getchar();
	scanf ("%[^\n]", buscar);
	lb=strlen(buscar);

    
    char * pos = str;

    while (pos!=NULL){
        pos = strstr(str,buscar);

        if (pos!=NULL) 
            memset(pos,' ', lb);

    }
	printf ("%s", str);
	return 0;
}
