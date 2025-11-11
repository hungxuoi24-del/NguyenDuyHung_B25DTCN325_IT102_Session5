#include <stdio.h>

int main() {
    float soDien, tienBacThang = 0, phuPhi = 0, tongTien = 0;
    int loaiTieuDung;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &soDien);

    printf("Nhap loai tieu dung (1: Ho gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &loaiTieuDung);

    if (soDien < 0) {
        printf("So dien khong hop le!\n");
        return 0;
    }

    if (soDien <= 50) {
        tienBacThang = soDien * 1500;
    } 
    else if (soDien <= 100) {
        tienBacThang = 50 * 1500 + (soDien - 50) * 2000;
    } 
    else if (soDien <= 200) {
        tienBacThang = 50 * 1500 + 50 * 2000 + (soDien - 100) * 2500;
    } 
    else {
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (soDien - 200) * 3000;
    }

    switch (loaiTieuDung) {
        case 1: 
            phuPhi = tienBacThang * 0.05;
            break;
        case 2: 
            phuPhi = tienBacThang * 0.10;
            break;
        case 3: 
            phuPhi = tienBacThang * 0.08;
            break;
        default:
            printf("Loai tieu dung khong hop le!\n");
            return 0;
    }

    tongTien = tienBacThang + phuPhi;

    printf("\n--- KET QUA ---\n");
    printf("So dien tieu thu: %.0f kWh\n", soDien);
    printf("Tien theo bac thang: %.0f VND\n", tienBacThang);
    printf("Phu phi (theo loai %d): %.0f VND\n", loaiTieuDung, phuPhi);
    printf("Tong tien dien phai tra: %.0f VND\n", tongTien);

    return 0;
}

