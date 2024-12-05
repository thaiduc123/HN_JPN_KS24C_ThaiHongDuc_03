#include <stdio.h>

int main(){
	int n=0;
	int pick;
	int arr[100];
	int currentSize;
	do{
		printf("\n\t\tMENU\n");
		printf("1.Nhap so phan tu va gia tri trong mang\n");
		printf("2.In ra gia tri trong mang\n");
		printf("3.Dem so luong cac so nguyen to trong mang\n");
		printf("4.Tim gia tri nho thu hai trong mang\n");
		printf("5.Them phan tu vao mang\n");
		printf("6.Xoa phan tu\n");
		printf("7.Sap xep theo thu tu giam dan\n");
		printf("8.Tim kiem phan tu ton tai trong mang\n");
		printf("9.Xoa phan tu trung nhau\n");
		printf("10.Dao nguoc thu tu\n");
		printf("11.Thoat\n");
		printf("Lua chon cua ban la: ");
		scanf("%d", &pick);
		switch (pick){
			case 1: {
				printf("Nhap so luong: ");
				scanf("%d", &n);
				currentSize=n;
				if (n<=0 || n>100){
					printf("Khong hop le\n");
					break;
				} else {
					for (int i=0; i<n; i++){
						printf("Nhap gia tri a[%d]: ", i);
						scanf("%d", &arr[i]);
					}
				}
				break;
			}
			case 2: {
				if (n<=0 || n>100){
					printf("Chua co mang\n");
					break;
				} else {
					printf("Cac gia tri trong mang la: ");
					for (int i=0; i<n; i++){
						printf("a[%d]=%d, ", i, arr[i]);
					}
				}
				break;
			}
			case 3: {
					
				break;
			}
			case 4: {
				if (n<=0 || n>100){
					printf("Chua co mang\n");
					break;
				} else {
					int brr[100];
					for (int i=0; i<n; i++){
						brr[i]=arr[i];
					}
					for(int i=1; i<n; i++){
					int temp=brr[i];
					int j;
					for(j=i-1; j>=0 && brr[j]>temp; j--){
						brr[j+1]=brr[j];
					}
					brr[j+1]=temp;
					}
					printf("Gia tri nho thu hai trong mang la: %d", brr[1]);
					break;
				}
			}
			case 5: {
				if (n<=0 || n>100){
					printf("Chua co mang\n");
					break;
				} else {
					int nextSize, addIndex, num;
					printf("Nhap vi tri can them: ");
					scanf("%d", &addIndex);
					printf("Nhap so can them: ");
					scanf("%d", &num);
					nextSize=currentSize+1;
					if (addIndex>nextSize){
						printf("Khong hop le\n");
						break;
					} else if(addIndex=nextSize){
						for (int i=0; i<nextSize; i++){
							arr[addIndex]=num;
						}
					} else {
						for (int i=nextSize; i>=num; i++){
							arr[i+1]=arr[i];
							arr[num]=num;
						}
					}
				}
				break;
			}
			case 6: {
				if (n<=0 || n>100){
					printf("Chua co mang\n");
					break;
				} else {
					int deleteIndex, nextSize; 
					printf("Vi tri can xoa la (a[]): ");
					scanf("%d", &deleteIndex);
					if (deleteIndex<n){
						for (int i=deleteIndex; i<n; i++){
							arr[i]=arr[i+1];
						}
					} else {
						printf("Khong hop le\n");
						break;
					}
					break;
				}
			}
			case 7: {
				for(int i=n; i>=1; i--){
				int key=arr[i];
				int j;
				for(j=0; j<n-1 && arr[j]<key; j++){
					arr[j+1]= arr[j];
				}
				arr[j+1]=key;
				}
				printf("Cac phan tu trong mang sau khi sap xep la:\n");
				for(int i=0; i<n;i++){
					printf("%d ", arr[i]);
				}
				break;
			}
			case 11: {
				break;
			}
			default: {
				printf("Khong hop le");
				break;
			}
		}
	}while (pick!=11);
	return 0; 
} 

















