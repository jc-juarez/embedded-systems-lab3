#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
	char *option = argv[1];
	int longitude = atoi(argv[3]);
	int width = atoi(argv[5]);
	if(!strcmp(option,"-a")){
		printf("area = %d units\n",longitude*width);
	}else{
		printf("perimeter = %d units\n",2*longitude + 2*width);
	}
	return 0;
}
