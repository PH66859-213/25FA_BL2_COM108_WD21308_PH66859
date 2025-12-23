#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

#include "bai1_Thongtinthucung.h"

#include"bai2_tinhTong.h"

#include"bai3Thongtincuahang.h"




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

