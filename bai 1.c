#include<stdio.h>

int main(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if(a > b){
		printf("So lon hon la: %d\n", a);
	}else if(b > a){
		printf("So lon hon la: %d\n", b);
	}else{
		printf("Hai so bang nhau.");
	}
	
	
	return 0;
}
