// C Program to illustrate file opening
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
	// file pointer variable to store the value returned by
	// fopen
	FILE* fptr;

	// opening the file in read mode
	fptr = fopen("binaryy.c", "r");

	// checking if the file is opened successfully
	if (fptr == NULL) {
		printf("The file is not opened. The program will now exit.\n");
		return 0;
	}
    printf("file opened sucessfully\n");

	return 0;
}
