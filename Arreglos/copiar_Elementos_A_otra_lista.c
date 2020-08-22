#include <stdio.h>

int main() {
	int lista[10]= {0, 4, 78, 5, 32, 9, 77, 1, 23, 2};
	int par[10];
	int k=0, cont=0, i;
	
	for(i=0;i<10;i++){  //cargar el arreglo
		if((lista[i]%2)==0){
			cont = cont+1; //contamos para saber cuantos elementos tiene el arreglo
			par[k] = lista[i]; //copiamos el elemento
			k++;
		}
	}

	
	for(i=0; i<cont; i++){ //mostramos el nuevo arreglo
		printf("%d\t",par[i]);
	}
	
	return 0;
}

