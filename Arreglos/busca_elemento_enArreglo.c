#include <stdio.h>

int main() {
	
	int lista[8] = {1,4,6,8,10,11,15,16};
	int a, i, encontrado = 0, posicion = 0;
	
	
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &a);
	
	for(i=0;i<8;i++){
		if(a == lista[i]){
			posicion = i;
			encontrado = 1;
		}
	}
	
	if(encontrado == 1){
		printf("Encontrado en la posicion: %d",(posicion+1));
	}
	else{
		printf("No encontrado");
	}
	
	return 0;
}

