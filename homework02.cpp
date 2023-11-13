#include<stdio.h>
#include<stdlib.h>
int main(){
	int nb1,nb2,ucln,bcnn;
	printf("Nhap 2 so nguyen: ");
	scanf("%d %d",&nb1,&nb2);
	do{
		printf("Calculator\n");
		printf("1.Tong hai so \n");
		printf("2. Hieu hai so \n");
		printf("3. Tich hai so\n");
		printf("4. Thuong hai so\n");
		printf("5. So du trong phep chia 2 so\n");
		printf("6. Uoc chung lon nhat\n");
		printf("7. Boi chung nho nhat\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban la: ");
	int choice;scanf("%d",&choice);
	switch(choice){
			case 1:
				printf("Tong hai so la: %d\n",nb1+nb2);
				break;
			case 2:
				printf("Hieu hai so la: %d\n",nb1-nb2);
				break;
			case 3:
				printf("Tich hai so la: %d\n",nb1*nb2);
				break;
			case 4: 
				printf("Thuong hai so la:%.0f\n",(float)nb1/nb2);
				break;
			case 5:
				printf("So du trong phep chia 2 so la: %d\n",nb1 % nb2);
				break;
			case 6:
				while(nb1!=nb2){
					if(nb1>nb2){
						nb1=nb1=nb2;
					}else{
						nb2=nb2=nb1;
					}
				}
				ucln=nb1;
				printf("Uoc chung lon nhat la: %d\n",ucln);
				break;
			case 7:
				while(nb1!=nb2){
					if(nb1>nb2){
						nb1=nb1-nb2;
					}else{
						nb2=nb2-nb1;
					}
				}
				ucln=nb1;
				bcnn= nb1 * nb2/ucln;
				printf("Boi chung nho nhat la: %d\n",bcnn);
				break;
			case 8:
				exit(0);
			default:
				printf("Lua chon khong hop le\n");
		}
	}while("Chon tu 1-8");
}
