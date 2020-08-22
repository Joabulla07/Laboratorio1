#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
	
	FILE *arch2;
	char nombre[100];
	int x, i;
	
	
	//arch2 = fopen("salida.txt", "w+");
	if ((arch2=fopen("salida.txt","w+"))==NULL)
		printf("No se pudo abrir el archivo");
	
	printf("ingrese 5 nombres separarados por puntos\n");
	scanf("%s",&nombre);
	
	fwrite(&nombre,sizeof(nombre),1,arch2);
	
	fclose(arch2);
	
	if ((arch2=fopen("salida.txt","r"))==NULL)
		printf("No se pudo abrir el archivo");
	
	fread(&nombre,sizeof(nombre),1,arch2);
	
	x=strlen(nombre);
	
	for(i=0;i<x;i++)
	{
		if(nombre[i]=='.') printf("\n");
		else printf("%c",nombre[i]);
	}
	
	fclose(arch2);
	
	

	return 0;
}
