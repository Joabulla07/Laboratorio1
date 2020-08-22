float promedio (struct agenda record[cant]){
	
	float tot=0;
	float prom=0;
	for( i=0; i<cant; i++ ) {
		tot = tot + record[i].edad;	
	}
	prom = tot/cant;
	
	return prom;
}	
