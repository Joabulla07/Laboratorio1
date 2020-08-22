#include <stdio.h>
#define fil 3
#define col 3

int main(int argc, char *argv[]) {
	
	int matriz[fil][col];
	int b;
	int i,j;
	int encontrado=0, cont=0;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Ingrese valor para [%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	
	
	printf("Ingrese un numero: ");
	scanf("%d", &b);
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(b == matriz[i][j]){
				encontrado = 1;
				cont = cont +1;
			}
		}
	}
	
	if(encontrado==1){
		printf("Encontrado %d veces",cont);
	}
	else{
		printf("No encontrado");
	}
	
	return 0;
}

