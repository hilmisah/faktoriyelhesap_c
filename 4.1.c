#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int s1,i;
	int fac=1;
	printf("faktoriyeli hesaplanacak sayi: ");
	scanf("%d",&s1);
	for(i=1;i<=s1;i++)
	{
		fac=fac*i;
	}
	printf("cevap: %d", fac);
	
	
	return 0;
}
