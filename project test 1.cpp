#include "stdio.h"

int main () {
	int panjang;
	int lebar;
	int luas ;
	
	printf("Panjang : ");
	scanf("%d", &panjang);
	
	printf("Lebar : ");
	scanf("%d", &lebar);
	
	luas = panjang * lebar;
	printf("Luas persegi panjang dengan panjang = %d, dan lebar = %d, adalah %d", panjang, lebar, luas);
}