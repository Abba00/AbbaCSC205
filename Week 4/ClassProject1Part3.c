#include <stdio.h>

char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char input;


int main(){
	
	printf("Enter a character between A to J : \n");
	scanf("%c", &input);
	
	printf(alphabet[0]);
		
	return 0;
}