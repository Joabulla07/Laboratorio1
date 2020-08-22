#include <stdio.h>

int main() {
	int lista[10]= {0, 4, 78, 5, 32, 9, 77, 1, 23, 2};
	int min=10000,max=-10000;
	int i;
	
	
	for (i=0; i<10; i++){
		if (lista[i]<min){
			min=lista[i];
		}
		else if (lista[i]>max){
			max=lista[i];
		}
	}
	
	printf ("el numero mayor es: %d y el numero menor es: %d",max,min);
	
	return 0;
}

