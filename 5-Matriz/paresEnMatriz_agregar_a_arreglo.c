#include <stdio.h>
#include <conio.h>
#define fil 3
#define col 3
#define p 16

int main() {
	
	int a[fil][col];
	int y[p];
	int i, j, par,x, k=0;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Ingrese valor para [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<fil;i++){ //mostrar matriz
		for(j=0;j<col;j++){
			printf("%d \t",a[i][j]);
		}
		printf(" \n");
	}
	printf("\n");
	
	for(i=0;i<fil;i++){  //cargar el arreglo
		for(j=0;j<col;j++){
			if((a[i][j]%2) ==0){
				par = par+1;
				x =  a[i][j];
				y[k] = x;
				k++;
			}
		}
	}
	
	printf("Arreglo de Pares:\n");
	for(i=0;i<par;i++){ //mostrar arreglo
		printf("%d ",y[i]);
	}
	
	
	return 0;
}

