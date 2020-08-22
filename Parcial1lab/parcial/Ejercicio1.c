#include <stdio.h>
#incliude <math.h>

int main() {
	
	int dia, hora, minuto, dias, horas, minutos, total=0;
	
	printf("Ingrese dia: ");
	scanf("%d",&dia);
	printf("Ingrese hora: ");
	scanf("%d",&hora);
	printf("Ingrese minutos: ");
	scanf("%d", &minuto);
	
	
	dias = dia*86400;
	horas = hora*3600;
	minutos = minuto*60;
	
	total = dias + horas + minutos;
	
	printf("%d segundos",total);
	
	return 0;
}

