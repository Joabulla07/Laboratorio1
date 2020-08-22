#include <stdio.h>
#include <string.h>

int main()
{
	FILE* ptFichero;
	int i;
	char nombres[60];
	
	ptFichero = fopen("salida.txt", "w+");
	printf(" Programa para Escribir 5 nombres Y  mostrar en pantalla:\n\n");
	
	for(i=0;i<5;i++){
		puts("Escriba un nombre: ");
		gets(nombres);
		fprintf(ptFichero, "%s.", nombres);
	}
	
	fclose(ptFichero);
	
	if ((ptFichero=fopen("salida.txt","r"))==NULL){
		puts("\nNo se puede leer el fichero\n");
	}
	printf("\nLECTURA DE FICHERO: \n\n");
	
	while(fgets(nombres,60,ptFichero)!=NULL){
		if(fgets()=="."){
			printf("\n");
		}
		printf("%s \n",nombres);
	}
	fclose(ptFichero);

	return 0;
}
