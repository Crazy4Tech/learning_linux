#include <stdio.h>
#include <netdb.h>

void main(){

	int i;
	for(i = 0; i < 6; i++){
		printf("%d : %s \n",i,hstrerror(i));
	}	
}



