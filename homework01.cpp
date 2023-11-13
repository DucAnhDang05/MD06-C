#include<stdio.h>
int main(){
	int number,i=0;
	printf("Nhap so hang: ");
	scanf("%d",&number);
	printf("Bang cuu chuong\n");
	for(i=1;i<=10;i++){
		printf("%d x %d= %d\n",number,i,i*number);
	}
return 0;
}
