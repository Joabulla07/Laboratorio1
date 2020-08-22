#include <stdio.h>
#define fil 3
#define col 3

int main(int argc, char *argv[]) {
	
	int matriz[fil][col];
	int i,j;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Ingrese valor para [%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d \t",matriz[i][j]);
		}
		printf(" \n");
	}
	
	return 0;
}

