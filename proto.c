#include <stdio.h>
#include <netdb.h>


void main(){
	
	struct protoent *pro;

	while(pro = getprotoent()){
		printf("protocol name : %s",pro->p_name);

	}



}




