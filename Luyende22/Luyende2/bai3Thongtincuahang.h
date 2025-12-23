#pragma once
#include <stdio.h>
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