/*
 ============================================================================
 Name        : testc.c
 Author      : Saeid Mohaghegh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// C program not C++
// intentional errors to test source code analyzer
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
static int count = 5; /* global variable */
/* define a structure with bit fields */
struct {
   unsigned int widthValidated : 1; // use one bit
   unsigned int heightValidated : 3;// use 3 bits to have values from 0 to 7
} status2;


int main(void) {
	/*
	int j, sum;
        sum = 2;
	for (j = 0; j <= 4; j++)
		sum += 1 << (2 << j);
        */
	const int  LENGTH = 10;
	const int  WIDTH = 5;
	const char NEWLINE = '\n';
	static int i = 5; /* local static variable */
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	/*
	time_t biggest = 0x7FFFFFFF;
	printf("biggest = %s \n", ctime(&biggest) );
	printf("biggest = %s \n", asctime(gmtime(&biggest)) );
	printf("%c", NEWLINE);
	*/
	return EXIT_SUCCESS;
}
