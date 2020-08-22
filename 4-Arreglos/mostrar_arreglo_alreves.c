#include <stdio.h>

int main(int argc, char *argv[]) {
	int lista[10]= {0, 4, 78, 5, 32, 9, 77, 1, 23, 2};
	int i;
	
	for (i=10-1;i>=0;i-- ){
		printf("%d ",lista[i]);
	}
	
	
	return 0;
}

