#include <stdio.h>

int mostrarMatriz(int x[3][3]);
int determinante(int x[3][3]);
int i,j;
int main() {
	int a[3][3]= {2,1,-1,1,3,-4,2,6,-8};
	int incog[3][1]={1,2,4};
	int rango;
	
	
	mostrarMatriz(a);
	
	if(determinante(a)!=0){
		rango = 3; //es todo bueno sistema compatible y si coincide con incognitas es determinado
	}
	else if(deter2(a)!=0){
		rango=2;
		a[][]
	}
	
	
	
	
	
	printf("El determinante es: %d \n",determinante(a));
	
	
	
	
	return 0;
}

int determinante(int x[3][3]){
	int d1=(x[0][0]*x[1][1]*x[2][2])+(x[1][0]*x[2][1]*x[0][2])+(x[2][0]*x[0][1]*x[1][2]);
	int d2=(x[0][2]*x[1][1]*x[2][0])+(x[1][2]*x[2][1]*x[0][0])+(x[2][2]*x[0][1]*x[1][0]);
	int det = d1 - d2;
	
	return det;
}
	
	int mostrarMatriz(int x[3][3]){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d \t",x[i][j]);
			}
			printf(" \n");
		}
		printf("\n");
		return 0;
	}
		int deter(int x[3][3]){
			int det =(x[0][0]*x[1][1])-(x[0][1]*x[1][0]);
			
			
			return det;
		}
			
