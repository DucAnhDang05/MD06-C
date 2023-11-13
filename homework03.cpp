#include<stdio.h>
#include<stdlib.h>
int main(){
	int number1,number2,number3,sum,avg,max,min;
	printf("Nhap vao 3 so nguyen: ");
	scanf("%d %d %d",&number1,&number2,&number3);
	do{
		printf("CALCULATOR\n");
		printf("1. Tong 3 so nguyen\n");
		printf("2. Trung binh cong cua 3 so nguyen\n");
		printf("3. So lon nhat va nho nhat trong 3 so\n");
		printf("4. Thoat\n");
		printf("Lua chon cua ban la: ");
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:
			sum=number1+number2+number3;
			printf("Tong ba so la: %d\n",sum);
			break;
		case 2:
			avg=(number1+number2+number3)/3;
			printf("Trung binh cong cua 3 so la: %d\n",avg);
			break;
		case 3:
			max=number1;
			max=(number2>max)?number2:max;
			max=(number3>max)?number3:max;
			min=number1;
			min=(min<number2)?min:number2;
			min=(min<number3)?min:number3;
			printf("So lon nhat va so nho nhat la: %d, %d\n",max,min);
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("So nhap vao khong hop le\n");
			break;
			
	}
	}while("Chon so tu 1-4\n");
}
