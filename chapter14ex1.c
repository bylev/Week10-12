//a program that counts the number of lines in a file//

#include <stdio.h>

int main(){

	FILE *fptr;

	int count=0;
	char filename[FILENAME_MAX];
	char c;

	printf("Enter the file name to be opened : ");
	scanf("%s",filename);
  
	fptr=fopen(filename, "r");
	if (fptr==NULL){
   printf("Could not open file %s", filename);
        return 0;

	}

	for (c = getc(fptr); c != EOF; c = getc(fptr))
        if (c == '\n') 
            count = count + 1;

 fclose(fptr);
    printf(" The lines in the file %s are : %d \n \n", filename, count+1);
    return 0;
}
