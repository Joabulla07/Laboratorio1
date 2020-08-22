n = a la longitud del arreglo


for(i=0;i<=n;i++){//ordenar de menor a mayor
	for(j=0;j<n-1;j++){
		if(unir[j]>unir[j+1]){
			aux=unir[j];
			unir[j]=unir[j+1];
			unir[j+1]=aux;
		}
	}
}
