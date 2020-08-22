#include <stdio.h>
#include <conio.h>
#include <string.h>
#define cad 200

int main() {
	
	char cadena[cad]="Hoy-es-lunes-.-Hoy-es-el-parcial-de-Laboratorio-.-Estudio-programacion";
	int longitud;
	
	longitud = strlen(cadena);
	
	printf("%d",longitud);
	
	return 0;
}

