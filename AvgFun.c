#include <stdio.h>
int average(int arr[], int n){
	int sum;
	for(int i=0;i<n;++i) sum+=arr[i];
	return sum;
}
int main(){
	int a[5]={1,2,3,4,5};
	int sum = average(a,sizeof(a)/sizeof(a[0]));
	printf("average: %d.\n",sum/(sizeof(a)/sizeof(a[0]))); 
}
