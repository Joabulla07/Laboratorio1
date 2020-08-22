#include <stdio.h>

int main() {
	
	int lista[]={1,2,3,4,5,6,7,8,9,10};
	int i;
	
	for (i=0; i<10; i++){
		if (lista[i]%2==0){
			printf("Digito par: %d\n", lista[i]);
		}
	}
	
	return 0;
}

