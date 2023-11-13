#include<stdio.h>
#include<stdlib.h>
int main(){
	int number;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d",&number);
	do{
		printf("PRACTICE\n");
		printf("1. In ra day so chia het cho 2 va giam dan\n");
		printf("2. In cac so nho hon n va tinh tong\n");
		printf("3. In ra cac uoc so chan cua n\n");
		printf("4. In ra cac uoc so le và so luong các uoc le cua n\n");
		printf("5. In ra uoc so le lon nhat cua n\n");
		printf("Lua chon cua ban la: ");
		int choice,i,sum;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(i=0;i<= number;i++){
					if(i % 2==0){
						printf("%d\n",i);
					}
				}
				printf("\n");
				break;
			case 2:
				for(i=0;i<=number;i++){
					sum += i;
					printf(" %d ",i);
				}
				printf("\n Tong cac so hang la: %d\n",sum-1);
				break;
			case 3:
				for(i=1;i<=number;i++){
					if(number%i==0 && i%2==0){
						printf("Uoc chan la: %d\n",i);
					}
				}
				break;
			case 4:
				int n;
				for(i=1;i<=number;i++){
					if(number%i==0 && i%2!=0){
						printf("Uoc le la: %d\n",i);
						n++;
					}
				}
				printf("so cac nghiem le la: %d\n",n);
			case 5: 
				int max;	
				for(i=1;i<=number;i++){
					if(number%i==0 && i%2!=0){
						max=i;
					}
					
			}
			printf("Uoc le lon nhat la: %d\n",max);
			break;
			case 6:
				exit(0);
			default:
				printf("Khong hop le");
	}
}while("Chon so tu 1-5");
}
