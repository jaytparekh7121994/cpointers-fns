
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char *arr[10]={"one","two","three","four","five","six","seven","eight","nine"};

void dummymain(int digit);

int main()
{   
	printf("Enter the number 1-9 to get the string between 1-9 and \nif greater than 9 it will print greater than 9:\n");
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { 
		exit(EXIT_FAILURE);
	}
    dummymain(n);

    return 0;
}
/* dummymain is the main function which fits the logic */

void dummymain(int digit){
	
    if (digit >=1 && digit <=9){
        printf("%s",arr[digit-1]);
    }
	
    else if(digit>9){
        printf("Greater than 9");
    }    
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    
	char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin); //Read man page of fgets 
		// Link: https://linux.die.net/man/3/fgets
		// char *fgets(char *s, int size, FILE *stream)
		// for file stream https://www.mkssoftware.com/docs/man5/stdio.5.asp

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
/*********************************************************
stderr, stdin, stdout
global variables for standard input/output streams 

Global Variables

SYNOPSIS
#include <stdio.h>

extern FILE *stderr;

extern FILE *stdin;

extern FILE *stdout;

DESCRIPTION
A file with associated buffering is called a stream and is declared to be a pointer to a defined type FILE. 
The fopen() function creates certain descriptive data for a stream and returns a pointer to designate the stream in all further transactions. 
Normally there are three open streams with constant pointers declared in the <stdio.h> header and associated with the standard open files.

At program startup three streams are predefined and need not be opened explicitly: 
standard input (for reading conventional input),
standard output (for writing conventional output), and 
standard error (for writing diagnostic output). 
When opened the standard error stream is not fully buffered; 
the standard input and standard output streams are fully buffered if and only if the stream can be determined not to refer to an interactive device.

The following symbolic values in <unistd.h> define the file descriptors that is associated with the C-language stdin stdout and stderr when the application is started:

STDIN_FILENO  
Standard input value stdin. Its value is 0.

STDOUT_FILENO  
Standard output value stdout. Its value is 1.

STDERR_FILENO  
Standard error value stderr. Its value is 2.
*******************************************************************/