#include <stdio.h>
int main(){
	int a[] = {1,2,3,4,5};
	int sum=0;
	for(int i=0; i<sizeof(a)/sizeof(a[0]);++i) sum+=a[i];
	printf("Average: %d.\n",sum/(sizeof(a)/sizeof(a[0]))); 
}
