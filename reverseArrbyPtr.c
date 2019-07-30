#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
	printf("Array Size:\n");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int)); //Dynamic allocation of the memory as per the array size 
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i); //Scanning the element 
    }
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + num-1 - i)); //Printing the element in Reverse 
    return 0;
}

