#include <stdio.h>
#include <stdlib.h>
int foo(int y){
	int *bar = malloc(sizeof(int));
	*bar = y;
	printf("bar: %d \n", *bar);
	free(bar);
	return y;
}
int main(){
	printf("%d.", foo(5));
}
