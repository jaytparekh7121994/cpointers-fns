/*In this program we will read the string and rewrite it in alphabetical order*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i=0,j=0;
	
	char *iterator,*alphabet,temp;
	
	alphabet=(char *)malloc(26*sizeof(char));
	iterator=alphabet;
	
	gets(alphabet);
	for(i=0;*(alphabet+i)!='\0';i++){
		for(j=0;*(iterator+j)!='\0';j++){
			if(*(alphabet+i) < *(iterator+j)){
				temp=*(alphabet+i);
				*(alphabet+i)=*(iterator+j);
				*(iterator+j)=temp;
			}
			
		}
	}
	
	printf("%s",iterator);
	
	
		
	return 0;
}