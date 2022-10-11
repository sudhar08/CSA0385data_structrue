#include<stdio.h>
int main(){
	int n,a[10],i;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("Even number!\n");
		}
		else{
			printf("Odd number!\n");
		}
	}
}
