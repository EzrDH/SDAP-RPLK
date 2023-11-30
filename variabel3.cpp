#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
char nim[10];
char nama[30];
int nilai;

strcpy(nim, "STI201702017");
strcpy(nama, "Gatot Brajamusti ");
nilai = 85;

printf("NIM : %s", nim);
printf("NAMA : %s", nama);
printf("NILAI : %i", nilai);

getch();
}
