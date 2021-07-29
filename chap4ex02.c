#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;


   fptr = fopen("chap4ex02","w+");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }


int main; 

	printf("*****\n");
	printf("*\n");
	printf("*\n");
	printf("*****\n");
	printf("*\n");
	printf("*\n");
	printf("*\n");
	printf("*****\n");
	



   fprintf(fptr,"*****\n");
	fprintf(fptr,"*\n");
	fprintf(fptr,"*\n");
	fprintf(fptr,"*****\n");
	fprintf(fptr,"*\n");
	fprintf(fptr,"*\n");
	fprintf(fptr,"*\n");
	fprintf(fptr,"*****\n");
   fclose(fptr);

   return 0;
}

//#include <stdio.h>
//int main(){ 

//	printf("*****\n");
//	printf("*\n");
//	printf("*\n");
//	printf("*****\n");
//	printf("*\n");
//	printf("*\n");
//	printf("*\n");
//	printf("*****\n");
//return 0;}//