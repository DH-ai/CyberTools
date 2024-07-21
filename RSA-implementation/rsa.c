#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE* flptr;
	char str[80];

	flptr = fopen("./msg.txt","r");

	if (flptr==NULL){
		printf( "Error Occurred while reading a file");
		exit(1);
	}

	if(fgets(str,80,flptr)!=NULL){
		printf("%c",str[1]);
	}
	
	fclose(flptr);	


	return 0;
}
