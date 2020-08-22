printf("\t Listado de Alumnos : \n");
printf("DNI\tApellido\tNombre\n");
printf("-------------------------------\n");
for(i=0; i<cant; i++)
{
	printf("%d \t", record[i].dni);
	printf("%s \t", record[i].apellido);
	printf("%s \t", record[i].nombre);
	printf("\n");
}
