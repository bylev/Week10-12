#include <stdio.h>


const char *ASCII_fn="ASCII";
const char *BINARY_fn="BINARY";



int main (){


FILE *an;
FILE *bn;


int c;


bn=fopen(BINARY_fn, "r");
if(bn==NULL){

	fprintf(stderr,"Opening %s for reading\n", BINARY_fn);

	return(8);

}

an=fopen(ASCII_fn, "w+");
if (an==NULL){

	fprintf(stderr, "Opening %s for writing\n", ASCII_fn);
	fclose (bn);
	return (8);
}

while(1){
c=fgetc(bn);

if (c==EOF){ 
	break; 


}
 if (c=='\0'){
	 			 fputc('\n',an);

 }
 else {
	 fputc(c,an);

 }

}

fclose(an);
fclose(bn);

return(0);
	}