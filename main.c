#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"integerstack.h"
#include "functions.h"
#include <limits.h>
int main(int argc, char *argv[]) {
	number *r;
	char line[2048];
	while(readline(line, 143)) {
		r = infix(line);
		if(r != NULL)
			printNumber(*r);
		else
			fprintf(stderr, "Error in expression\n");
	}
	return 0;
}
