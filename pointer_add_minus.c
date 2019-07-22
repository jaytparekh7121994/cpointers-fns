/*
This function method approach is known as Call By reference.

Function void update(int *a,int *b), which reads two integers as argument, and sets  with the sum of them, and  with the absolute difference of them.

Input Format
The input will contain two integers,  and , separated by a newline.

Output Format
You have to print the updated value of  and , on two different lines.

Sample Input
	4
	5

Sample Output
	9
	1

*/

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int *temp;
	temp=a;
	*temp=*a;
    *a=((*a)+(*b));

    if((*temp)-(*b) >0){
        *b=(*temp)-(*b);
    }
    
    else{
        *b=(*b)-(*temp);
    }
}

int main() {
    int a, b;
    int *pa ,*pb;
    
    scanf("%d %d", &a, &b);
    pa=&a;
    pb=&b;
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}