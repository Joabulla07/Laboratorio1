#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>


int mostrarParte1(char texto[], int longitud);
int cuentaOraciones(char texto[], int longitud);
int mostrarPrimera(char texto[], int longitud);
int conMas(char texto[], int longitud);
int i,j;
int main() {
	
	char texto[1000];
	
	int longitud;
	
	printf("...INSTRUCCIONES...\n");
	printf("Cada oracion debe terminar en '.' .\n");
	printf("Cada parrafo debe señalizarse con el caracter '*' .\n");
	printf("Antes de empezar ingrese '*'\n");
	printf("Ingrese texto: \n");
	gets(texto);
	puts("\n");
	
	longitud = strlen(texto);
	mostrarParte1(texto, longitud);
	cuentaOraciones(texto, longitud);
	mostrarPrimera(texto, longitud);
	conMas(texto, longitud);
	
	
	
	
	return 0;
}

int mostrarParte1(char texto[], int longitud){
	//Mostrar por pantalla cada párrafo separado por una línea en blanco.
	//empezar desde i=1 asi no se lee el primer * ya que dejaria 1 renglon en blanco
	for(i=1;i<longitud;i++){
		if(texto[i]=='*'){
			printf("\n \n");
		}else{
			printf("%c",texto[i]);
		}
	}
	puts("\n");
	return 0;
}
	int cuentaOraciones(char texto[], int longitud){
		//indicar cuantas oraciones tiene cada párrafo, total de párrafos y total de oraciones.
		int puntos=0, parrafo=0, totPuntos=0;
		for(i=0;i<longitud;i++){
			if(texto[i]=='*'){
				j=i+1;
				parrafo++; //cuenta parrafos
				while(texto[j]!='*'){
					if(texto[j]=='.'){
						puntos++; //cuenta puntos en los parrafos.
						totPuntos++;
					}
					j++;
				}
				printf("Parrafo Nº %d, tiene %d oraciones\n",parrafo,puntos);
				puntos = 0;
				
			}
		}
		printf("Total parrafos: %d\n",parrafo);
		printf("Total oraciones: %d\n",totPuntos);
		puts("\n");
		return 0;
	}
		int mostrarPrimera(char texto[], int longitud){
			/*Mostrar por pantalla la primera oración de cada párrafo 
			indicando a que párrafo pertenece.*/
			int parrafo=0;
			for(i=0;i<longitud;i++){
				if(texto[i]=='*'){
					parrafo++;
					j=i+1;
					printf("\nPARAFO %d: \n",parrafo);
					while(texto[j]!='.'){
						printf("%c",texto[j]);
						j++;
					}
				}
			}
			puts("\n");
			return 0;
		}
			int conMas(char texto[], int longitud){
				/*Indicar cuál es el párrafo que tiene más oraciones y mostrarlo por pantalla. Cada oraciones
				debe aparecer una debajo de la otra.*/
				int puntos=0, parrafo=0, totPuntos=0, masPuntos=0, masParrafo=0, cont=0;
				for(i=0;i<longitud;i++){
					if(texto[i]=='*'){
						j=i+1;
						parrafo++; //cuenta parrafos
						while(texto[j]!='*'){
							if(texto[j]=='.'){
								puntos++; //cuenta puntos en los parrafos.
								totPuntos++;
							}
							j++;
							
						}
						if(masPuntos<puntos){
							masPuntos = puntos;
							masParrafo = parrafo;
						}
					}
					puntos = 0;
				}
				printf("\nPARRAFO CON MAS ORACIONES: %d\n", masParrafo);
				
				for(i=0;i<longitud;i++){
					if(texto[i]=='*'){
						cont++;
						if(cont == masParrafo){
							j=i+1;
							while(texto[j]!='*'){
								printf("%c",texto[j]);
								j++;
							}
						}
					}
				}
				
				return 0;
			}
				
