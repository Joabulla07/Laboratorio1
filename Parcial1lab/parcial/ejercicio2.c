#include <stdio.h>

int main() {
	float promedio;
	int a, totnum=0, total = 0, incorrecto=0, b=1;
	
	while(b==1){
		printf("Ingrese un numero \t");
		scanf("%d",&a);
		if(a>0){
			totnum = totnum +1;
			total = total + a;
		}
		else{
			incorrecto = incorrecto + 1;
		}
		pritnf("Seguir? 1)si, 2)no");
		scanf("%d", &b);
	}
	
	promedio = total/totnum;
	printf("promedio: %4.f \n",promedio);
	printf("Total correctos: %d \n", totnum);
	printf("Total incorrectos: %d \n", incorrecto);
	
	return 0;
}

