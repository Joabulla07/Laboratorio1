int insercionOrdenada(int lista[],int a){
	int li[20];
	int posic, n=10;
	
	for(k=0;k<n;k++){ //copiamos la lista 1 a la lista 2
		li[k] = lista[k];
	}
	
	
	for(i=0;i<n;i++){
		if(lista[0]>a){ //si el elemento en la posicion 0 es mayor al numero ingresado
			for(j=0;j<n;j++){ //recorrer desde posicion 0 hasta n
				lista[0]=a; // al lugar 0 se le asigna a
				if((j+1) < n){  //si j+1 es menor que n(ya que sino se sale de n)
					lista[j+1]=li[j]; //copiamos desde li a lista
				}
			}
		}
		else if(lista[i]< a && a < lista[i+1]){//si el valor de A esta entre dos valores
			posic = i; //guardamos posion
			for(j=i+1;j<n;j++){ //recorrer desde posicion i+1 hasta n
				lista[posic+1]=a;//en i+1 pasamos el valor de A
				if((j+1) < n){ //si j+1 es menor que n(ya que sino se sale de n)
					lista[j+1]=li[j]; //copiamos desde li a lista
				}
				
			}
		}
		else if(lista[i]<a && lista[i+1]==0 && lista[i]!=0) //si el valor esta al final y el proximo valor es 0
		{
			lista[i+1]=a; //a la posicion que esta el 0 le asignamos el valor
			for(j=i;j<n;j++){ //incrementamos i hasta que llegue a n sino en medio de 0 va a incorporar nuevamente el valor
				i++;
			}
		}
		
	}
	
