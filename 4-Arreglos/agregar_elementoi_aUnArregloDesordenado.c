#include <stdio.h>
#include <conio.h>

//ARREGLO DESORDENADO SIN ELEMENTOS REPETIDOS

int main() {
	int lista[15] = {5,4,10,8,2,11,9,1};
	int n = sizeof(lista)/sizeof(lista[0]); //tamaño del arreglo
	int i,a;
	
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	
	for(i=0;i<n;i++){ //recorrer el arreglo
		if(lista[i+1]==0){ //si la posicion siguiente a un numero es 0 (esta vacio en esta situacion)
			lista[i+1]=a; //agregamos el valor en ese 0, ultima posicion.
			while(i<n){ // hacemos que i se incremente hasta n.
				i++;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d \n", lista[i]);
	}
	
	return 0;
}
