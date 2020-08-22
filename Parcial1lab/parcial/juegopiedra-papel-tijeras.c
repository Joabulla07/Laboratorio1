#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
	
	int jugar;
	srand(time(NULL));
	int numero;
	int opcionUsuario, opcionPc, ganador;
	
	do{
	
		
		
			printf("           JUEGO: PIEDRA PAPEL O TIJERA         \n");
			printf("---------------Seleccione una opcion:-------------\n");
			printf(" ");
			printf("               1)Piedra\n");
			printf("                2)Papel\n");
			printf("                3)Tijera\n");
			scanf("%d",&opcionUsuario);
			
			switch(opcionUsuario){
				case 1: printf("JUGADOR: PIEDRA\n"); break;
				case 2: printf("JUGADOR: PAPEL\n"); break;
				case 3: printf("JUGADOR: TIJERA\n"); break;
			}

		
			numero = 1 + rand() % (19-1);
			printf("%d\n",numero);
		
			switch(numero){
			case 1: case 2: case 3: case 4: case 5: case 6: opcionPc = 2; printf("PC: PAPEL \n");break;
			case 7: case 8: case 9: case 10: case 11: case 12: opcionPc = 3; printf("PC: TIJERA\n");break;
			case 13: case 14: case 15: case 16: case 17: case 18: opcionPc = 1; printf("PC: PIEDRA\n");break;
				
			}
		
			if((opcionUsuario == 3 && opcionPc == 2) || (opcionUsuario == 2 && opcionPc == 1) || (opcionUsuario == 1 && opcionPc == 3)){ /*TIJERA A PAPEL*/
				ganador = 1; /*GANA*/
			}
				else if(opcionUsuario == opcionPc){
					ganador = 2; /*EMPATE*/
				}
				else{
					ganador = 0; /*PIERDE*/
				}
			
			
			if(ganador == 1){
				printf("GANASTE\n");
			}
			else if(ganador == 0){
				printf("PERDISTE\n");
			}
			else{
				printf("EMPATE\n");
			}
			
		printf("Seguir jugando:\n 1)SI\n 2)NO\n");	
		scanf("%d",&jugar);
		
		system("cls");
	}while(jugar == 1);
	
	return 0;
}

