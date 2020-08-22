#include <stdio.h>

int main() {
	
	int arreglo[10] = {10,100,33,5,10,8,9,11,12,13};
	int aux, i, j, n=10;
	
	
	for(i=0;i<=n;i++){//ordenar de menor a mayor
		for(j=0;j<n-1;j++){
			if(arreglo[j]>arreglo[j+1]){
				aux=arreglo[j];
				arreglo[j]=arreglo[j+1];
				arreglo[j+1]=aux;
			}
		}
	}
	printf("Arreglo ordenado:");
	for(i=0;i<n;i++){ //mostrar arreglo
		printf("%d ",arreglo[i]);
	}
	
	return 0;
}

