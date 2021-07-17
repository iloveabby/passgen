/* Simple Password Generator by Samuel .A Johnson
 * Under the GPL vs 0x3+
 * 
 *
 *
 *
 * 						*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define defaultloop   99999 /*figured this was a good number*/


int  *get_Mod(char **argv){
	int count = 0;
	int mod = atoi(argv[1]);
	int *ret = malloc(4 *sizeof(int));
	while(count != 4){	
		for(int i = 0;i < defaultloop;i++){
			ret[count] = rand() % mod;	
		}
		count++;
	}	
	return ret;
}
void proc_Numbs(int mods[4],int*numbs){
	int count = 0;
	while(count != 4){
		for(int i = 0; i < defaultloop;i++){
			*numbs = rand() % mods[count];
		}
		numbs++;/*used pointer math just for simplicty*/
		count++;
	}
	return;	
}
void proc_Str(char *str){
	int count = 0;
	while(count != 3){
		for(int i = 0;i < defaultloop;i++){
			str[count] = rand() % 126 + 58;
		}
		count++;
	}
	str[4] = '\0';
	return;
}

int main(int argc,char **argv){
	if(argc < 2){
		puts("Arg Error! You lack a number input");
		return 1;
	}
	if(argc >2){
		puts("Arg Error!,Too many Arguments");
		return 1;
	}
	srand((unsigned)time(NULL));
	int numbs[4];
	int *mod = NULL;		
	char randomstr[5];
	mod = get_Mod(argv);
	proc_Numbs(mod,numbs);
	proc_Str(randomstr);
	printf("%d%d%d%d%s\n",numbs[0],numbs[1],numbs[2],numbs[3],randomstr);
	return 0;	

}
