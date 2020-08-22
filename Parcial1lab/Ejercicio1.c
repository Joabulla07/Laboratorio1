#include <stdio.h>
#include <math.h>


/*1)	Desarrollar un programa que lea el código del tipo de gasolina, 
	los litros comprados y el precio por litro , para calcular el 
	importe a pagar por el cliente,  considerar un descuento del 15%
	si es de tipo 1, un descuento del 8% si es de tipo 2 y si es de tipo 
	3 no tiene descuento. Existen tres tipos. Usar sentencia switch.*/

int main() {
	
	
	int tipo;
	float litro, precioLitro, total, descuento;
	
	printf("Ingrese tipo de gasolina:\t\n ");
	scanf("%d", &tipo);
	printf("Ingrese cantidad de litros comprados:\t\n");
	scanf("%f", &litro);
	printf("Ingrese precio por litro:\t\n");
	scanf("%f", &precioLitro);
	
	switch(tipo){ //calculo de descuentos
		case 1: descuento = (15*(litro*precioLitro)/100); break; //descuento del 15%
		case 2: descuento = (8*(litro*precioLitro)/100); break; //descuento del 8%
		case 3: descuento = 0; break;
	default: descuento = 0;
	}
	
	total = (litro*precioLitro) - descuento; //total con el descuento.
	
	printf("Total a pagar: %4.f", total);
	
	
	return 0;
}

