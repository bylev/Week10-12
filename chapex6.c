  
#include <stdio.h>
#include <stdlib.h>

int num;
char line [20];

int main()
{
   int año;
   FILE *fptr;

   if ((fptr = fopen("chap6ex6","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &año);

 if (año % 400 == 0){
//is leap year
 printf("%d es año bisiesto\n", año);	
	}

	else if (año % 100 == 0 ){
 //is not a leap year
 printf("%d no es un año bisiesto\n", año);
	}
 else if (año % 4 == 0){
	//is a leap year
	printf("%d es un año bisiesto\n", año);

 }
 else {
	//is not a leap year
	printf("%d no es un año bisiesto\n", año);
 }

   fclose(fptr); 
  
   return 0;
}

//#include <stdio.h>

//int main () { 

	//int año; 
	//printf("Ingrese un año:");
//	scanf("%d", &año);

//	if (año % 400 == 0){
//is leap year
// printf("%d es año bisiesto\n", año);	
//	}

//	else if (año % 100 == 0 ){
 //is not a leap year
 //printf("%d no es un año bisiesto\n", año);
//	}
 //else if (año % 4 == 0){
	//is a leap year
	//printf("%d es un año bisiesto\n", año);

 //}
 //else {
	//is not a leap year
//	printf("%d no es un año bisiesto\n", año);
//}
//}