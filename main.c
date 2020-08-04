#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
float average(float arrayGrades){
	int arrayGrades[1000], sum, loop;
	sum = 0;
	for(loop = n; loop >= 0; loop --){
		sum = sum + arrayGrades[loop];
	}
	float average = float sum / numGrades;
	return average;
}

float min(float arrayGrades[]){
	int m;
	char *min = arrayGrades[1];
	for(m = 1, m < numGrades, m++){
		if(arrayGrades[m] < min){
			min = arrayGrades[m];
		}
	}
	return float min;
}

float max(float arrayGrades[]){
	int m;
	char *max = arrayGrades[1];
	for(m = 1, m < numGrades, m++){
		if(arrayGrades[m] > max){
			max = arrayGrades[m];
		}
	}
	return float max;
} 
*/
int main(int argc, char *argv[])
{
	if (argc > 1)
		{
		char *arrayGrades[1000];
		char dir[20];
		int numGrades = 0;
		strcpy(dir, "data/");
		strcat(dir, argv[1]);
		FILE *grades = fopen(dir, "r");
		
		if(grades == NULL)
		{
			printf("Error! could not open file.\n");
		}
		else
		{
			//printf("code would execute.\n");
			fgets(arrayGrades[1000], 1000,  grades);
			numGrades = atoi(arrayGrades[0]);
			//fgets(arrayGrades[1000], 1000, grades);
			printf("total grades = %d\n",numGrades);
		}

		}
	else
	{
		printf("Please eneter a file to pull grades from.\n");
	}

	return(0);
}