#include <stdio.h>



int max(int i,int j){

	if(i > j)
		return i;
	else if(i < j)
		return j;
}

void main(){

	int i,j;
	i=4;
	j=5;
	printf("Hello,Linux\n");

	int k = max(i,j);
	printf("the max is :%d",k);
}



















