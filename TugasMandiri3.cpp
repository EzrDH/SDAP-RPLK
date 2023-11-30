#include <stdio.h>
#include <math.h>

main(){
	int alas = 4, tinggi = 5;
	float miring;
	
	miring = hypot(alas, tinggi);
	
	printf("Sisi miring: ");
	printf("%f", miring);
	
	return 0;
}
