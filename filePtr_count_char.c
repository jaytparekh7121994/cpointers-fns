
/* This program counts the number of characters present in a text file
 Note: This program would not run on online compilers. Please make a text (.txt) file on your system and 
give its path to run this program on your system.*/

#include<stdio.h>
#define MAX_FILE_NAME 100

int main(){
	short int count;
	FILE *fptr;
	char filename[MAX_FILE_NAME],character;
	printf("Enter a filename:\n");
	
	gets(filename);
	fptr=fopen(filename,"r");
	if (fptr==NULL){
		printf("Couldnt open file %s",filename);
		return 0;
	}
	for(character=getc(fptr);character!=EOF;character++){
		count=count+1;
	}
	
	fclose(fptr);
	printf("The file %s contains %d characters \n",filename,count);
	return 0;
}