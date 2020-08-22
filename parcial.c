#include <stdio.h>
#include <conio.h>
#define fil 3
#define col 3
#define p 16

int parr(int numero);
int ordenar(int pares[], int par);

int main() {
	
	int matriz[fil][col];
	int pares[p];
	int i,j, par,k=0, numero;
	
	for(i=0;i<fil;i++){  //cargar matriz
		for(j=0;j<col;j++){
			printf("Ingrese valor para [%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
			
		}
	}
	
	for(i=0;i<fil;i++){ //mostrar matriz y cargar pares
		for(j=0;j<col;j++){
			printf("%d \t",matriz[i][j]);
			numero = matriz[i][j];
			if((parr(numero))==1){
				par++;//contar cuantos numeros hay
				pares[k] = matriz[i][j];
				k++;
			}
		}
		printf(" \n");
	}
	
	for(i=par-1;i>=0;i--){//impirme alreves
		printf(" %d ",pares[i]);
	}
	
	printf("\nSe cargaron %d numeros pares en el arreglo.\n",par);
	
	ordenar(pares, par);
	
	printf("Arreglo ordenado:\n");
	for(i=0;i<par;i++){//impirme alreves
		printf(" %d ",pares[i]);
	}
	
	
	return 0;
}

int parr(int numero){ //devuelkve 1 si es par
	
	if((numero%2)==0){
		return 1;
	}
	else{
		return 0;
	}
	
}

int ordenar(int pares[], int par){
	int i,j,aux;
	
	for(i=0;i<=par;i++){//ordenar de menor a mayor
		for(j=0;j<par-1;j++){
			if(pares[j]>pares[j+1]){
				aux=pares[j];
				pares[j]=pares[j+1];
				pares[j+1]=aux;
			}
		}
	}
	
	return 0;
}
