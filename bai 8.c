#include <stdio.h>

int main() {
    float m3, tien;

    printf("Nhap so met khoi (m3) nuoc tieu thu: ");
    scanf("%f", &m3);

    if (m3 <= 0) {
        printf("So m3 khong hop le.\n");
        return 0;
    }

    if (m3 <= 10) {
        tien = m3 * 6000;
    } 
    else if (m3 <= 20) {
        tien = 10 * 6000 + (m3 - 10) * 7000;
    } 
    else if (m3 <= 30) {
        tien = 10 * 6000 + 10 * 7000 + (m3 - 20) * 8500;
    } 
    else {
        tien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (m3 - 30) * 10000;
    }

    printf("So tien phai tra la: %.0f VND\n", tien);

    return 0;
}

