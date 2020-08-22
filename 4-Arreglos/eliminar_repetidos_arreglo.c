#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int lista[] ={10,2,10,1,5,4,7,8,25,64,2};
	int cont =0, i, j, ult=11, ultimo,k;
	
	for( i = 0; i < ult; i++){
		for( j = i+1; j < ult; j++){
			if(lista[i] == lista[j]){
				k = j;
				cont++;
				while(k < ult){//Mientras k sea menor que la cantidad de elementos
					lista[k] = lista[k+1];//Copiará el elemento siguiente, 
					++k;//Aumentamos el contador k en 1
				}
				--ult; //disminuira el tamaño de la lista
				--j; //Disminuimos  el valor de j para verificar si el elemento que se copió ahí es igual al anterior.
			}
		}
	}
	ultimo = ult;
	for(i=ultimo;i<10;i++){//SE LE ASIGNA A LOS ESPACIOS QUE QUEDARON VACIOS UN 0
		lista[i]=0;
	}
	
	for(int i=0;i<10;i++){
		printf("Elemento %d: %d \n",(i+1),lista[i]);
	}
	
	return 0;
}

