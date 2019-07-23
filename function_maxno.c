#include<stdio.h>
int max_of_four(int a,int b,int c, int d);
int max_of_four_ter(int ,int ,int ,int);
int main(){
	int a,b,c,d;
	printf("Enter four nos to see the max of four");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%d is the maximum\n",max_of_four(a,b,c,d)); //using if-else if-else 
	printf("%d is the maximum",max_of_four_ter(a,b,c,d)); //using ternary operator
	return 0;
}

int max_of_four(int a, int b, int c, int d){
	if(a>b && c>d){
		if(a>c){
			return a;
		}
		return c;
	}
	
	else if(b>c && b>d){
		return b;
	}
	
	else if(c>d){
		return c;
	}
	else{
		return d;
	}
}

int max_of_four_ter(int a,int b,int c,int d){
	int max1,max2;
	max1= a>b?a:b;
	max2= c>d?c:d;
	max1=max1>max2?max1:max2;
	return max1;
}