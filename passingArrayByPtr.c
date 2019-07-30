#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumofArray(int ,int*);
int main() {
    int n,i;
    int result;
	printf("Array Size:\n");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   result=sumofArray(n,arr);
   printf("sumofArray=%d",result);    
    return 0;
}

int sumofArray(int n,int *ptr_array){
    int i=0;
    int sum=0;
    for(i=0;i<n;i++){
       sum+=*(ptr_array+i);
    }
    return sum;
}