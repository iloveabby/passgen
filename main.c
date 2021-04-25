#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int divisonNum(){
	int returnVal;
	for(int i = 0; i < 500; i++){
		returnVal = rand() % 4 + 2;
	}
	return returnVal;
}

int main(int argc,char *argv[]){
	int divide; // num to divide number by;
	int one;
	int two;
	int three;
	if(argc == 2){
		puts("You didn't specify a service name");
		exit(1);
	}
	FILE *fp = fopen(argv[1],"a");
	srand((unsigned) time(NULL));
	for(int i; i < 999999999; i++){
		
		one = rand() % 7000;
		two = rand() % 4000;
		three = rand() % 5555;
	}
	if (argc == 3){
		fprintf(fp,"\n%s\n",argv[2]);
		fprintf(fp,"%d%d%d",one,two,three);
		fclose(fp);
		exit(0);
	}
	printf("%d%d%d",one,two,three);
}
