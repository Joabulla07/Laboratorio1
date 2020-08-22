#include <stdio.h>
#include <conio.h>
#include <string.h>
#define cad 100

//palindromo es cuando la palabra se lee igual del derecho o alrevez

int palindromo(char cadena[], int longitud);
int main(int argc, char *argv[]) {
	
	char cadena[cad]="lunul";//
	int longitud, longi, i;
	
	longitud = strlen(cadena); //longitud de la cadena
	
	
	if(palindromo(cadena, longitud)==0){
		printf("\nES PAINDROMO\n");
	}
	else
	   printf("\nNO ES PALINDROMO\n");
	
	
	
	return 0;
}

int palindromo(char cadena[], int longitud){
	int palin = 0, j, i;
	j=longitud-1;
	
	for(i=0;i<longitud;i++){
		if(cadena[i]!=cadena[j]){
			palin=1;
		}
		j--;
	}
	
	return palin;
}
