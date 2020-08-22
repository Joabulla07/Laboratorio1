#include <stdio.h>

int main() {
	
	int lista[11] = {5,4,10,8,2,11,9,1,5,11,1};
	int b, i, encontrado = 0, posicion = 0, j=0, cont=0;
	int n = sizeof(lista)/sizeof(lista[0]);
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &b);
	
	for(i=0;i<n;i++){
		if(b == lista[i]){
			encontrado = 1;
			if(cont>=1){
				j = i;
			}
			else{
				posicion = i;
			}
			cont = cont + 1;
		}
	}
	
	if(encontrado == 1){
		if(cont>1){
			printf("Encontrado en la posicion: %d y posicion %d, veces: %d",(posicion+1),(j+1), cont);
		}
	}
	else{
		printf("No encontrado");
	}
	
	return 0;
}
