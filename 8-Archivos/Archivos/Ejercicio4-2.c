#include <stdio.h>
#include <conio.h>
#include <string.h>
#define a "c:\\arch.dat"
	struct registro
{
	int cliente;
	char nombre[20];
	float saldo;
};
	
int main()
{
	FILE *arch;
	struct registro reg;
	char seguir;
	int cont=0;
	if ((arch=fopen(a,"wb"))==NULL)
		printf("No se pudo abrir el archivo");
	do
	{
		printf("\nIngrese numero de cliente: ");
		scanf("%d",&reg.cliente);
		printf("\nIngrese el nombre: ");
		scanf("%s",&reg.nombre);
		printf("\nIngrese el saldo: ");
		scanf("%f",&reg.saldo);
		fwrite(&reg,sizeof(reg),1,arch);
		cont = cont+1;
		printf("desea terminar s/n: ");
		scanf("\n %c",&seguir);
	}
	while(seguir=='n');
	
	fclose(arch);
	
	if((arch = fopen(a, "rb")) == NULL)
		printf("No se pudo abrir el archivo.\n"); 
	else
	{    
		for(int i=0;i<cont;i++){
		fread(&reg, sizeof (reg), 1, arch);
		printf("\n CLIENTE Nº: %d",reg.cliente); 
		printf("\n NOMBRE: %s",reg.nombre); 
		printf("\n SALDO: %f", reg.saldo);
		}
		
		fclose(arch);
	}
	
	getch();
	return 0;
}
