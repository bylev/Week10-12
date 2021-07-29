#include <stdio.h>


const char *in_put="in";
const char *out_put="out";
const char *third="3";


int main (){

	FILE *infile;
	FILE *outfile;
	FILE *thirdfile;


	char line [100];
	int number;

	infile=fopen(in_put, "r");

	if (infile==NULL){

		fprintf(stderr, "Opening %s for reading\n", in_put);

		return (8);

	}

	outfile=fopen(out_put, "w+");

	if (outfile==NULL){
	fprintf(stderr, "Opening %s for writing\n", out_put);
	fclose(infile);
	return (8);
	}

	thirdfile=fopen(third,"w+");

	if(thirdfile==NULL){

		fprintf(stderr, "Opening %s for writing\n", third);
		fclose(infile);
		fclose(outfile);
		return (8);
	}
	
	while  (fgets(line, sizeof(line), infile)){

		sscanf(line,"%d", &number);
		if((number %3)==0){

		//divisible by 3//

		fprintf(thirdfile, "%d\n", number);


		}

		else{ 
			//not divisble by 3//

			fprintf(outfile, "%d\n", number);

		}
	}

	fclose (infile);
	fclose(outfile);
	fclose(thirdfile);

	return 
	(0);
	
	}