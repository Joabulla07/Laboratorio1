#include <stdio.h>
struct estructura_amigo {  //se define una estructura de datos
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
};
struct estructura_amigo amigo = {   //Se definen valores por defecto a la estructura
	"Juanjo", //asigna al nombre
		"L�pez", //asigna al apellido
		"983403367",  //asigna telefono
		30//asigna edad
};
int main()
{
	printf( "%s tiene ", amigo.apellido );  //imprime apellido
	printf( "%i a�os ", amigo.edad );  //imprime edad
	printf( "y su tel�fono es el %s.\n" , amigo.telefono ); //imprime telefono
	return 0;
}
