#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
struct thuCung {
    char maThuCung[20];
    char tenThuCung[20];
    int namSinh;

};
void thongTinThuCung() {
    struct thuCung tc[10];
    int n = 3;
    for (int i = 0; i < n; i++) {
        while (getchar() != '\n');
        fgets(tc[i].maThuCung, sizeof(tc[i].maThuCung), stdin);
        fgets(tc[i].tenThuCung, sizeof(tc[i].tenThuCung), stdin);
        scanf("%d", &tc[i].namSinh);
    }
    for (int i = 0; i < n; i++) {
        printf("Ma: %s ", tc[i].maThuCung);
        printf("Ten: %s ", tc[i].tenThuCung);
        printf("Nam Sinh: %d\n", tc[i].namSinh);
    }
    for (int i = 0; i < n; i++) {
        printf("Tuoi cua thu cung %s: %d\n",tc[i].maThuCung, 2025 - tc[i].namSinh);
    }
};

int tinhTong(int n) {
    int tongLe = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            tongLe += i;
        }
    }
    printf("Tong cac so le tu 1 den %d la: %d\n", n, tongLe);
    if (n % 5 == 0) {
        printf("So %d la so chia het cho 5!\n",n);
    }
    else printf("So %d la so khong chia het cho 5!\n", n);
    return 0;
};

void thongTin(int n) {
    double mangCanNang[20];
    double canNangTB = 0;
    double minCanNang;
    int count = 0;
    printf("Nhap vao can nang thu cung: \n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &mangCanNang[i]);
    }
    for (int i = 0; i < n; i++) {
        canNangTB += mangCanNang[i];
        minCanNang = mangCanNang[0];
        if (minCanNang > mangCanNang[i]) minCanNang = mangCanNang[i];
    }
    canNangTB /= (double)n;
    for (int i = 0; i < n; i++) {
        if (mangCanNang[i] < canNangTB)count++;

    }
    printf("Can nang trung binh cua %d thu cung la: %.2lf\n", n, canNangTB);
    printf("Can nang thap nhat la: %.2lf\n", minCanNang);
    printf("So thu cung nang duoi muc trung binh: %d\n", count);
}
int main()
{
    int chonChucNang;
    do
    {
        
        printf("Chon chuc nang\n");
        printf("--------Menu-------\n");
        printf("1.Thong tin thu cung\n");
        printf("2.Tinh tong\n");
        printf("3.Thong tin cua hang\n");
        printf("0.Thoat\n");
        printf("--------End--------\n");
        printf("Moi chon: ");
        scanf("%d", &chonChucNang);
        if (chonChucNang == 0) {
            printf("Cam on ban da su dung dich vu!\n");
            return 0;
        }
        int tieptuc = 1;
        while (tieptuc == 1) {
            switch (chonChucNang) {
            case 1:
                thongTinThuCung();
                break;
            case 2:
                printf("Nhap vao so nguyen duong bat ky: ");
                int soNguyenDuong;
                scanf("%d", &soNguyenDuong);
                tinhTong(soNguyenDuong);
                break;
            case 3:
                printf("Nhap vao so thu cung : ");
                int soLuong;
                scanf("%d", &soLuong);
                thongTin(soLuong);
                break;
            case 0:
                printf("Ban da quay tro lai menu chinh!");
                break;
            }

            printf("Ban co muon tiep tuc chuc nang nay ko? [1] tiep tuc [0] dung lai. ");
            scanf("%d", &tieptuc);
        }
    } while (chonChucNang!=0);
}

