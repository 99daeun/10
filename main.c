#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	char str[]="The worst things to eat befor you sleep";
	char dst[100];
	
	strcpy(dst,str);
	
	
	printf("copied string:%s",dst);
}
