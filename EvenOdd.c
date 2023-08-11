#include <stdio.h>
void PrintOddEven(int a[]){
	for(int i=0;i<20;++i){
		if(a[i]%2) printf("Odd ");
		else printf("Even ");
	}
	puts("");
}
int main(){
	int a[20];
	for(int i=0;i<20;++i) a[i]=i;
	PrintOddEven(a);
}
