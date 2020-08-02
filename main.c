#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float average(float arrayGrades){
	int arrayGrades, sum, loop;
	sum = 0;
	for(loop = 9; loop >= 0; loop --){
		sum = sum + arrayGrades[loop];
	}
	float average = float sum / n;
	return float average;
}



int main(int argc, char *argv[]){
	if (argc > 2){
		char *arrayGrades[1001];
		int numGrades = 0, n;
		FILE *grades = fopen("argv[1]", "r");
		
		if(grades == NULL){
			printf("Error! could not open file.\n");
			return(-1);
		}
		else{
			//printf("code would execute.\n");
			fgets(arrayGrades, 1001, grades);
			grades = n;
			fgets(arrayGrades, 1001, grades);
			float 
			}

	}
	else{
		printf("Please eneter a file to pull grades from.\n");
	}

	return(0);
}