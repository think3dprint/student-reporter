#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	if (argc > 2){
		FILE *grades;
		char *arrayGrades[1000];
		int numGrades = 0, n;
		grades = fopen("argv[1]", "r");
		
		if(grades == NULL){
			printf("Error! could not open file.\n");
			return(-1);
		}
		else{
			printf("code would execute.\n");

			}

	}
	else{
		printf("Please eneter a file to pull grades from.\n");
	}

	return(0);
}