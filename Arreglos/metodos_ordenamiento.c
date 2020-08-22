#include <stdio.h>
#include <conio.h>


int burbuja(int lista[], int elem);
int insercion(int lista[], int elem);
int seleccion(int lista[], int elem);
int shell(int lista[], int elem);

int main()
{
	int lista[10] = {3,5,7,2,0,1,4,80,9,25};
	int a;
	int elem = sizeof(lista)/sizeof(lista[0]);
	printf("%d", elem);
	
	printf("Ingrese metodo de ordenamiento: ");
	printf("1)Burbuja: ");
	printf("2)Insercion: ");
	printf("3)seleccion: ");
	printf("4)shell: ");
	
	scanf("%d",&a);	
	
	switch(a){
		case 1: burbuja(lista, elem); break;
		case 2: insercion(lista, elem); break;
		case 3: seleccion(lista, elem); break;
		case 4: shell(lista, elem); break;
	default: printf("No se encuentra la opcion");
		
	}
	return 0;
}	


  int burbuja(int lista[], int elem){
	int j,i,aux, n=10;
	for(i=0;i<=elem;i++){
		for(j=0;j<(elem-1);j++){
			if(lista[j]>lista[j+1]){
				aux=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=aux;
			}
		}
	}
		
		for(i=0;i<elem;i++){
			printf("Elemento %d: %d \n",i,lista[i]);
		}
	return 0;
}

 int insercion(int lista[], int elem){
	 
	 int i,j,aux;
		for(i=1;i<elem;i++){
			j=i;
			aux=lista[i];
			 while(j>0 && aux<lista[j-1])
			 {
				 lista[j]=lista[j-1];
				 j--;
			 }
			 lista[j]=aux;
		 }
		
		for(i=0;i<elem;i++){
			printf("Elemento %d: %d \n",i,lista[i]);
		}
	return 0;
 }

 int seleccion(int lista[], int elem){
	 int j=0,i=0;
	 int x, max;

		 for(i=0;i<elem;i++){
			x = lista[i];
			max = i;
				for(j=i;j<elem;j++){
					if(x > lista[j]){
						max = j;
						x = lista[j];
					}
				}
				lista[max] = lista[i];
				lista[i] = x;
		 }
	 
		 for(i=0;i<elem;i++){
			 printf("Elemento %d: %d \n",i,lista[i]);
		 }
		 
	 return 0;
 }

	int shell(int lista[], int elem){
		int i, j, intervalo, temp;
		intervalo = elem/2;
		while (intervalo > 0) {
			for (i=intervalo; i < elem; i++) {
				 j = i;
				 temp = lista[i];
				while ((j >= intervalo) && (lista[j - intervalo] > temp)) {
					 lista[j] = lista[j - intervalo];
					 j = j - intervalo;
				}
				lista[j] = temp;
			}
			 intervalo /= 2;
			 
		}
		for(i=0;i<10;i++){
			printf("Elemento %d: %d \n",i,lista[i]);
		}
		return 0;
		 
	}

