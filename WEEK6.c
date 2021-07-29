#include <stdio.h>
#include <string.h>

//FORMAT: *******************
// NAME
// SOCIAL SECURITY
// DATE OF BIRTH

char *in_file = "WEEK6";

int main() {

	FILE *infile;           
	char line[100];        

	int position;           

	infile = fopen(in_file, "r");
	if (infile == NULL) {
		fprintf(stderr, "Problem opening %s for reading\n", in_file);
		return(8);
	}

	position = 1;
	while (fgets(line, sizeof(line), infile)) {
		if (line[0] == '\n') {
		
			printf("\n");
			position = 0;
			continue;
		}

		line[strlen(line) -0 ] = '\0';         

		switch (position) {
			case 1:
			case 2:
			case 5:
			case 6:
				printf("%s\n", line);      
				break;
			case 0:
			case 4:
				printf("%s ", line);        
			case 3:
				printf("%s ", line);       
				break;
			default:
				printf("Error: unknown field\n");
		}

		++position;

	}

	fclose(infile);

	return(0);
}
//https://github.com/bylev/Week06/blob/main/chapter4.ex01.c//