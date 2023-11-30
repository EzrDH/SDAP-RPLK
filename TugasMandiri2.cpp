#include <stdio.h>
#include <math.h>

main(){
	int D = 15;
	float volume, r, phi;
	
	phi = 3.14;
	r = D/2;
	volume = 4/3 * phi * r * r * r;
	
	printf("Volume Bola: ");
	printf("%f", volume); 
	
	return 0;
}
