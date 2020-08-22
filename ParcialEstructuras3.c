#include <stdio.h>
#include <string.h>
#define cant 2

int promedio(int sumaNotas, int cantidad);

struct alumnos
{
	int dni;
	char apellido[20];
	char nombre[20];
	int nota;
};

int main(){
	
	int i,promoSi=0,regular=0,desa=0, sumaNotas=0,promPromocion=0, notaMayor=0,notaMenor=10;
	
	struct alumnos record[cant]; 
	int notas[cant];
	
	for(i=0; i<cant; i++){//cargar datos con sentenica for
		printf("Ingresar DNI: \n"); scanf("%d",&record[i].dni);
		printf("Ingrese apellido \n"); scanf("%s",&record[i].apellido);
		printf("Ingrese nombre \n"); scanf("%s",&record[i].nombre);
		printf("Ingrese nota \n"); scanf("%d",&record[i].nota);
		notas[i]=record[i].nota;//cargar notas en el arreglo
	}
	
	
	
	printf("Notas de Alumnos del Primer Parcial : \n");//imprimir datos
	printf("DNI    Apellido    Nombre    Nota\n");
	printf("-------------------------------\n");
	for(i=0; i<cant; i++){
		printf("%d \t", record[i].dni);
		printf("%s \t", record[i].apellido);
		printf("%s \t", record[i].nombre);
		printf("%d \t", record[i].nota);
		printf("\n");
	}
	
	//recorrer el arreglo y verificar las notas.
	for(i=0;i<cant;i++){
		if(notas[i]>=7){//si es mayor o igual a 7 promocionaron
			promoSi++;
			sumaNotas=sumaNotas+notas[i];
			
		}
		else if(notas[i]==6){
			regular++;//si es igual a 6
		}
		else{
			desa++;//menor a 6
		}
		if(notaMayor<=notas[i]){
			notaMayor = notas[i];
		}
		if(notaMenor>=notas[i]){
				notaMenor = notas[i];
		}
	}
	
	//llamar a la funcion promedio
	promPromocion = promedio(sumaNotas, promoSi);
	
	printf("\nTotal de Alumnos %d\n",cant);
	printf("\nCantidad de alumnos con nota mayor e igual a 7:  %d",promoSi);
	printf("\nCantidad de alumnos con nopta igual a 6:  %d",regular);
	printf("\nCantidad de alumnos desaprobados:  %d\n",desa);
	printf("Promedio de notas de alumnos promocionados: %d\n",promPromocion);
	printf("Nota mayor obtenida: %d\n", notaMayor);
	printf("Nota menor obtenida: %d\n", notaMenor);
	
	
	/*for(i=0;i<cant;i++){//imprimir arreglo de notas
	printf("%d  ",notas[i]);
	}*/
	
	return 0;
}
	
int promedio(int sumaNotas, int cantidad){
	
	return sumaNotas/cantidad;
	
}
