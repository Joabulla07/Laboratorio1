#include <stdio.h>
#include <math.h>

/*2)	Realizar un programa que pida la base 
	y el exponente y calcule la potencia. 
	Usar sentencia iterativa. */

int main() {
	int exponente;
	float base, resultado = 1;
	
	do{
	printf("Ingrese la base: \t\n");
	scanf("%f",&base);
	printf("Ingrese el exponente (mayor a 0 y entero): \t\n");
	scanf("%d",&exponente);
	}while(base==0 && exponente<0); // si la base es 0 y el expinente es negativo, no esta definido el resultado.
	
	if(base>=0){
		for(int i=0;i<exponente;i++){   //calcula el exponencial
			resultado = resultado * base; //multiplica exponencial veces la base
		}
	}
	
	if(base<0){    //si la base es menor a 0
		if((exponente%2)==0){  //si el exponente es par entonces el resultado sera positivo
		base = base*(-1);
		}
			for(int i=0;i<exponente;i++){
					resultado = resultado * base;
			}
	}
	
	
	printf("Resultado: %2.f",resultado);
	
	return 0;
	
	//elevado a la 0=1 base distinto de 0
}

