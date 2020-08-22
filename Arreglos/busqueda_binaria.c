#include <stdio.h>

int main() {
	int lista[20] = {1,4,6,8,10,11,15,16,17,18,19,20,21,22,23,25,32,36,38,39};
	int n = sizeof(lista)/sizeof(lista[0]);
	int b, i=0, j=n-1, k;
	
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &b);
	
	do {
		k= (i+j)/2;
		if (lista[k]<=b ){
			i=k+1;
		}
		if (lista[k]>=b ){
			j= k-1;
		}
	} while(i<=j);
	
			if(lista[k] == b){
				printf("elemento %d esta en %d \n",lista[k],(k+1));
			}
			else{
				printf("No encontrado");
			}
			
	return 0;
}

