#include<stdio.h>

int main(){
	float a, b, ket_qua;
	char toan_tu;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap toan tu (+ - * /)\n");
	scanf(" %c", &toan_tu);
	switch(toan_tu){
		case '+':
			ket_qua = a + b;
			printf("Ket qua la: %.2f + %.2f = %.2f\n", a, b, ket_qua);
			break;
		case '-':
			ket_qua = a - b;
			printf("Ket qua la: %.2f - %.2f = %.2f\n", a, b, ket_qua);
			break;
		case '*':
			ket_qua = a * b;
			printf("Ket qua la: %.2f * %.2f = %.2f\n", a, b, ket_qua);
			break;
		case'/':
			ket_qua = a / b;
			if(b==0){
				printf("Loi, khong the chia cho 0 !\n");
			}else{
				printf("Ket qua la: %.2f / %.2f = %.2f\n",a ,b, ket_qua);
			}
		break;
			
	}
	
	return 0;
}
