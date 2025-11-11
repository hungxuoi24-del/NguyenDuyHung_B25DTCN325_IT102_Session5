#include<stdio.h>

int main(){
	float diem_trung_binh;
	printf("Nhap diem trung binh cua ban: ");
	scanf("%f", &diem_trung_binh);
	if(diem_trung_binh < 0 || diem_trung_binh > 10){
		printf("Diem trung binh cua ban khong hop le.\n");
	return 0;	
	}
	if(diem_trung_binh >= 8){
		printf("Hoc luc gioi.\n");
	}else if(diem_trung_binh >= 6.5){
		printf("Hoc luc kha.\n");
	}else if(diem_trung_binh >= 5){
		printf("Hoc luc trung binh.\n");
	}else{
		printf("Hoc luc yeu.\n");
	}
	
	
	return 0;
}

