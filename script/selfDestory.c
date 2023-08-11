#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	for(int i=0; i<5;++i){
		printf("Self destorying in %d\n", i);
		usleep(1000);
	}
	system("sh ~/selfDestory.sh");
}
