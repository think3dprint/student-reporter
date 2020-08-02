#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float average(float arrayGrades){
	int arrayGrades[], sum, loop;
	sum = 0;
	for(loop = n; loop >= 0; loop --){
		sum = sum + arrayGrades[loop];
	}
	float average = float sum / numberTotal;
	return float average;
}
/*
float min(float arrayGrades[]){
	int m;
	char *min = arrayGrades[1];
	for(m = 1, m < numberTotal, m++){
		if(arrayGrades[m] < min){
			min = arrayGrades[m];
		}
	}
	return float min;
}

float max(float arrayGrades[]){
	int m;
	char *max = arrayGrades[1];
	for(m = 1, m < numberTotal, m++){
		if(arrayGrades[m] > max){
			max = arrayGrades[m];
		}
	}
	return float max;
} 
*/
int main(int argc, char *argv[]){
	if (argc > 2){
		char *arrayGrades[1001];
		int numGrades = 0, numberTotal;
		FILE *grades = fopen("/data/argv[1]", "r");
		
		if(grades == NULL){
			printf("Error! could not open file.\n");
			return(0);
		}
		else{
			//printf("code would execute.\n");
			fgets(arrayGrades[], 1001, grades);
			grades = numberTotal;
			fgets(arrayGrades[], 1001, grades);
			printf("array = %s\n",arrayGrades);
			}

	}
	else{
		printf("Please eneter a file to pull grades from.\n");
	}

	return(0);
}