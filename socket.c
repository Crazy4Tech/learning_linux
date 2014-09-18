#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>


int main(){

	int s ;
	if((s = socket(AF_INET,SOCK_STREAM,0)) < 0){
		perror("connect");
		return 0;
	}else{
		printf("socket is created.\n");
		printf("socket number:%d\n",s);
	}

	if((s = socket(AF_INET,123,0)) < 0 ){
		perror("connect");
		return 0;
	}else{
		printf("create success.");
	}

}


