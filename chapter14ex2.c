#include <stdio.h>


const char *in_put = "infile";
const char *out_put= "outfile";

int main(){

FILE *input;
FILE *output;
 
 int c;

 input=fopen(in_put,"r");
 
 if (input == NULL){

	 fprintf(stderr, "Opening %s for reading\n", in_put);

	 return (8);

 }

output=fopen(out_put,"w+");
 if (output == NULL){

	 fprintf(stderr, "Opening %s for writing\n", out_put);
	 return (8);


 }

 while (1){

 c=fgetc(input);

 if (c == EOF){
	 
	 break;
 
 }
 if (c=='\t'){

	 fputc(' ', output);
			fputc(' ', output);
			fputc(' ', output);
			fputc(' ', output);
 }
 else {
	 fputc(c, output);
 }


 }
 fclose(input);
 fclose(output);

 return(0);
}

