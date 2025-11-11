#include<stdio.h>

int main(){
	float thu_nhap, thue_suat, thue_phai_dong;
	printf("Nhap muc thu nhap 1 thang: ");
	scanf("%f", &thu_nhap);
	
	if(thu_nhap <= 5){
		thue_suat = 5;
	}else if(thu_nhap <= 10){
		thue_suat = 10;
	}else{
		thue_suat = 15;
	}
	thue_phai_dong = thu_nhap * (thue_suat / 100);
	printf("So tien thue phai dong la: %.2f\n", thue_phai_dong);
	
	
	return 0;
}
