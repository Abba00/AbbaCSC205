#include <stdio.h>

int main(){
    
    int a;
    float b;

    printf("Enter integer and then a float: ");

    // Taking multiple inputs
    scan("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);
	return 0;
}