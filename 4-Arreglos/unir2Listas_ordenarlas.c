#include <stdio.h>



int mostrarUnido(int unido[], int n);
int unir(int lista[], int lista1[], int unido[], int n);
int ordenarMenor(int unido[], int n);

int main() {
	
	int lista[10] = {100,99,88,77,66,55,45,35,26,25};
	int lista2[10]={98,97,87,78,69,65,50,48,40,20};
	int unido[20];
	int n = 20, i, j;
	
	unir(lista, lista2, unido, n); //unir ambos vectores en uno solo
	ordenarMenor(unido, n); //ordenar el vector
	mostrarUnido(unido, n); // mostrar el vetor de menor a mayor
	
	
	return 0;
}
	
int unir(int lista[], int lista2[], int unido[], int n){
	int i;
	for(i=0;i<10;i++){ //del 0 al 10 inserta los valores de la lista 1
		unido[i]=lista[i];
	}
	for(i=10;i<n;i++){ //del 0 al 10 inserta los valores de la lista 2
		unido[i]=lista2[i-10];
	}
	
	return 0;
}
	int ordenarMenor(int unido[], int n){//ordenamiento de burbuja
		int aux, i, j;
		for(i=0;i<=n;i++){
			for(j=0;j<n-1;j++){
				if(unido[j]>unido[j+1]){
					aux=unido[j];
					unido[j]=unido[j+1];
					unido[j+1]=aux;
				}
			}
		}
		return 0;
	}
int mostrarUnido(int unido[], int n){//mostrar el vector unido
		int i;
		for(i=0;i<n;i++){
				printf("Elemento %d: %d \n",(i+1),unido[i]);
		}
			
	return 0;
}	

