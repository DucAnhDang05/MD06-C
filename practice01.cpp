#include<stdio.h>
int main(){
	int sum=0;
	for (int i=1;i < 10;i++){
		if(i%2==0){
			printf("So chan tu 1-10 la: %d\n",i);
			sum+= i;
		}
	}
	printf("Tong cac so chan tu 1-10 la: %d",sum);
}
