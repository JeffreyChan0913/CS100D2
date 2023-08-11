#include <stdlib.h>
#include <stdio.h>
#include <time.h>
const int ARR_SIZE = 1000;
int main(){
	int *intArr = malloc(sizeof(int)*ARR_SIZE);
	for(int i=0; i<ARR_SIZE;++i) intArr[i]=i;
	srand(time(NULL));
	int randNum = rand() % ARR_SIZE;
	printf("intArr[%d]: %d\n", randNum, intArr[randNum]);
}
