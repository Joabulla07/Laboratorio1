#include <stdio.h>
#include <conio.h>
#include <string.h>
#define cad 200

int main() {
	
	char cadena[cad]="Hoy-es-lunes-.-Hoy-es-el-parcial-de-Laboratorio-.-Estudio-programacion";
	int longitud, longi;
	
	longitud = strlen(cadena); //longitud de la cadena, osea lo que esta usado
	longi = sizeof(cadena);//dimension de la cadena osea lo que definimos
	
	printf("%d\n",longitud);
	printf("%d", longi);
	
	return 0;
}
