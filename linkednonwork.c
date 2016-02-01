//driver for linked list
#include <stdio.h>
int main(int argc, char ** argv){
	//take list of args
	if(argc==0)
		//should not happen
		printf("error with zero args\n");
	else if(argc==1)
		printf("error with nothing provided as args\n");
	else
		{
		int argcountleft = argc - 1;
		while (argcountleft != 0)
			{
			printf(argv[argcountleft], "%s\n");
			argcountleft--;
			}
		}
	}
