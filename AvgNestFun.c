#include <stdio.h>
double calculateAverage(int totalSum, int n){
	return totalSum / n;
}
double average(int arr[], int n){
	int sum;
	for(int i=0;i<n;++i) sum+=arr[i];
	return calculateAverage(sum,n);
}
int main(){
	int a[5]={1,2,3,4,5};
	double avg = average(a,sizeof(a)/sizeof(a[0]));
	printf("average: %.2f.\n",avg); 
}
