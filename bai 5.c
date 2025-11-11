#include<stdio.h>

int main(){
	int tuoi;
	float tien_ve = 20000, so_tien;
	printf("Nhap tuoi cua ban: ");
	scanf("%d", &tuoi);
	if(tuoi < 0 || tuoi > 120){
		printf("Tuoi khong hop le!\n");
		return 0;
	}
	if(tuoi < 6){
		printf("Khach hang duoc mien phi ve. \n");
	}else if(tuoi < 18){
		printf("Khanh hang duoc giam 50%% gia ve.\n ");
		so_tien = tien_ve * 0.5;
	}else if(tuoi < 60){
		printf("Khach hang tra 100%% gia ve.\n");
		so_tien = tien_ve;
	}else{
		printf("Khach hang duoc giam 70%% gia ve.\n");
		so_tien = tien_ve * 0.7;
	}
	printf("So tien ve la: %.2f VND\n", so_tien);
	
	return 0;
}
