#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	FILE *f = fopen("Datalog.txt","w");
	if(f == NULL){
		printf("Error on opening File...\n");
		return 1;
	}
	int size_limit = atoi(argv[2]);
	int i = 0;
	char end_loop[] = "Y";
	while(i < size_limit && !strcmp(end_loop,"Y")){
		printf("Enter Name: ");
		char* curr_name = "";
		scanf("%s",&curr_name);
		printf("Enter ID: ");
		char* curr_id = "";
		scanf("%s",&curr_id);
		fprintf(f,"%s // %s \n",&curr_name,&curr_id);
		if(!(i == size_limit - 1)) {
			printf("Would you like to add more? [Y,n] ");
			scanf("%s",end_loop);
		}
		i++;
	}
	fclose(f);
	return 0;
}
