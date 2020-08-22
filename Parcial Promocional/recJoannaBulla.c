#include <stdio.h>
#include <conio.h>
#define a 10
#define fil 2
#define col 2

void ordenar(int lista[]){
	int aux,i,j=0,n=a;
	
	for(i=0;i<=n;i++){//ordenar de menor a mayor
		for(j=0;j<n-1;j++){
			if(lista[j]>lista[j+1]){
				aux=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=aux;
			}
		}
	}
	
}

int parr(int numero);
	
int main() {
	
	int lista[a];
	int matriz[fil][col];
	int i, k=0, j=0, par=0, num=0, l=0, repetido=0, numero=0;
	
	
	while(l<a){ //cargar arreglo
		printf("Ingresa un numero mayor a 10 para posicion %d:",l);
		scanf("%d",&num);
		
		while(num<0){
			printf("Error numero menor a 0\n");
			printf("Ingresa un numero mayor a 10 para posicion %d:",l);
			scanf("%d",&num);
		}
		
		for(i=0;i<a;i++){ //buscar repetidos
			if(num == lista[i]){
				repetido = 1;
				printf("Repetido, ingrese otro.\n");
				while(repetido==1){ //comprobar que no haya repetidos y sea mayor
					printf("Ingresa un numero mayor a 10 para posicion %d:",l);
					scanf("%d",&num);
					for(i=0;i<a;i++){ //buscar repetidos nuevamente a lo que ingresa
						if(num == lista[i]){
							repetido = 1;
							printf("Repetido, ingrese otro.");
						}
						else{
							repetido=0;
						}
					}
				}
			}
		}
		
		lista[l]=num;
		l++;
	}
	
	printf("Arreglo original:\n");
	for(i=0; i<a; i++){ //mostrar la lista
		printf("%d\t",lista[i]);
		printf("\n");
	}
	
	
	for(i=0;i<fil;i++){ //cargar matriz con 0
		for(j=0;j<col;j++){
			matriz[i][j] = 0;
		}
	}
	
	ordenar(lista); //ordena lista
	printf("Arreglo ordenado:\n");
	
	for(i=0; i<a; i++){ //mostrar la lista ordenada y verificar pares
		printf("%d\t",lista[i]);
		printf("\n");
		numero=lista[i]; //se le asigna el valor 
		if(parr(numero)==1){
			par++;//contar cuantos numeros par hay
			if(k==2){
					k=0;
					j=1;
					matriz[j][k] = lista[i];
					k++;
				
			}
			else{
				matriz[j][k] = lista[i];
				k++;
			}
		}
	}
	
	if(par==0){
		printf("No se puede cargar la matriz");
	}
	
	
	
	printf("\nHay %d pares.\n",par);
	
	/*for(i=0;i<fil;i++){  //mostrar matriz
		for(j=0;j<col;j++){
			if(matriz[i][j]== '\0'){
				matriz[i][j]==0;
			}
		}
		
	}*/
	
	for(i=0;i<fil;i++){  //mostrar matriz
		for(j=0;j<col;j++){
			printf("%d \t",matriz[i][j]);
		}
		printf(" \n");
	}
	
	
	return 0;
}

int parr(int numero){ //devuelkve 1 si es par
	
	if((numero%2)==0){
		return 1;
		printf("par: %d",numero);
	}
	else{
		return 0;
	}
	
}
