#include <stdio.h>
#include <conio.h>

main()
{
int A, B;
A = 5;
printf("A = %i", A);
printf("\nA = %i", A++);
printf("\nA = %i", A);

B = 10;
printf("\n\nB = %i", B);
printf("\nB = %i", ++B);
printf("\nB = %i", B);

getch();
}

