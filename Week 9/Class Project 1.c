#include <stdio.h>
#include <stdlib.h>

	float* array_1;
	float* array_2;
	float* array_3;
	
int main(){
	
	
	array_1 = m	alloc(6 * sizeof(float));
	array_2 = malloc(6 * sizeof(float));
	
	float array_1[2][3] = {{667,442,233.5}, {515,183.4,335}};
	float array_2[2][3] = {{100,151.6,245.5},	{312,333,578.8}};
	float array_3[2][3];
	
	
	for(int i = 0; i<2; i++){
		for(int j = 0; j<3; j++){
			array_3[i][j] = array_1[i][j]+ array_2[i][j];
			printf("%f\n", array_3[i][j]);
		}
	}
	
	
	 
}