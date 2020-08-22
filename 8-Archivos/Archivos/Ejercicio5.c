#include <stdio.h>
#include <conio.h>
#include <string.h>



struct registro
{
	int dni;
	char apellido[20];
	char nombre[20];
	float nota;
};

int main() {
	
	FILE *arch;
	struct registro reg;
	float notaAlta, notaBaja, promedioGral=0,promedioMenor=0,totAlumnos=0, totNota=0 ;
	float porcentaje=0;
	int  i, cont;
	float  mayorSeis=0, menorSeis=0 ;
	char nomAlta[20], nomBajo[20], apBajo[20], apAlta[20];
	
	//CREAR ARCHIVO
	if ((arch=fopen("alumnos.txt","w+b"))==NULL){
		printf("No se pudo abrir el archivo\n");
	}
	
	
	
	printf("Cuantoa alumnos quiere ingresar? \n");
	scanf("%d",&cont);
	
	for(i=0;i<cont;i++){
		printf("\nIngrese dni: ");
		scanf("%d",&reg.dni);
		printf("\nIngrese el apellido: ");
		scanf("%s",&reg.apellido);
		printf("\nIngrese el nombre: ");
		scanf("%s",&reg.nombre);
		printf("\nIngrese la nota: ");
		scanf("%f",&reg.nota);
		fwrite(&reg,sizeof(reg),1,arch);
	}
	
	fclose(arch);
	//mostrar archivo
	if((arch = fopen("alumnos.txt", "rb")) == NULL)
		printf("No se pudo abrir el archivo.\n"); 
	else
	{    
		for(i=0;i<cont;i++){
			fread(&reg, sizeof (reg), 1, arch);
			printf("\n Dni Nº: %d",reg.dni); 
			printf("\n APELLIDO: %s",reg.apellido); 
			printf("\n NOMBRE: %s",reg.nombre); 
			printf("\n NOTA: %.1f", reg.nota);
			printf("\n");
		}
		
		fclose(arch);
	}
	
	
	//ABRIR EL ARCHIVO Y LEERLO
	if ((arch=fopen("alumnos.txt","rb"))==NULL)
		printf("No se pudo abrir el archivo");
	else{
		for(i=0;i<cont;i++){
			fread(&reg, sizeof (reg), 1, arch);
			if(i==0){
				notaBaja = reg.nota;
				strcpy(nomBajo, reg.nombre);
				strcpy(apBajo,reg.apellido);
				notaAlta = reg.nota;
				strcpy(nomAlta, reg.nombre);
				strcpy(apAlta,reg.apellido);
			}
			
			if(notaBaja>reg.nota && i!=0){
				notaBaja = reg.nota;
				strcpy(nomBajo, reg.nombre);
				strcpy(apBajo,reg.apellido);
			}
			if(notaAlta<reg.nota && i!=0){
				notaAlta = reg.nota;
				strcpy(nomAlta, reg.nombre);
				strcpy(apAlta,reg.apellido);
			}
			if(reg.nota >= 6){
				mayorSeis = mayorSeis + 1;
			}
			if(reg.nota < 6){
				menorSeis = menorSeis + 1;
			}
			totNota = totNota + reg.nota;
			totAlumnos = totAlumnos + 1;
		}
		fclose(arch);
	}
	promedioGral = totNota/totAlumnos;
	porcentaje = (mayorSeis*100)/totAlumnos;
	promedioMenor = menorSeis/totAlumnos;
	printf("\n");
	printf("TOTAL DE ALUMNOS: %.1f \n\n", totAlumnos);
	printf("ALUMNO CON LA NOTA MAS ALTA: %s %s %.1f\n \n",nomAlta, apAlta, notaAlta);
	printf("ALUMNO CON LA NOTA MAS BAJA: %s %s %.1f\n \n",nomBajo, apBajo, notaBaja);
	printf("PROMEDIO GENERAL DE LOS ALUMNOS:%.2f \n \n",promedioGral);
	printf("CANTIDAD DE ALUMNO CON NOTA MAYOR E IGUAL A 6: %.1f\n\n ",mayorSeis);
	printf("CANTIDAD DE ALUMNOS CON NOTA MENOR A 6: %.1g\n \n",menorSeis);
	printf("PORCENTAJE DE ALUMNOS CON NOTA MAYOR E IGUAL A 6: %.2f\n \n",porcentaje);
	printf("PROMEDIO DE ALUMNOS CON NOTA MENOR A 6: %.2f \n \n", promedioMenor);
	
	getch();
	return 0;
}

