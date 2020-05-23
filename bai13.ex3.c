#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	char a,str[81],*ptr;
	printf("\nEnter a sentence");
	gets(str);
	printf("\nEnter character to search for");
	a = getche();
	ptr=strchr(str,a);
	printf("\nString starts at address : %u",str);
	printf("\nFirst occurrence of the character is at address: %u",ptr);
	printf("\nPosition of first occurrence (starting from 0) is : %d",ptr-str);
	
}
