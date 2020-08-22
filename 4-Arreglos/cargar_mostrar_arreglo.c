#include <stdio.h>
#include <conio.h>

int main() {
	
	int lista[10];
	int i;
	
	for(i = 0; i < 10; i++){ //cargar lista
		printf("Ingresar el elemento %d:\n",i);
		scanf("%d",&lista[i]);
	}
	
	for(i=0; i<10; i++){ //mostrar la lista
		printf("%d\t",lista[i]);
	}
	
	return 0;
}

