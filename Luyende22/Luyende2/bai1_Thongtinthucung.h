#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include "Struct.h"
#include <stdio.h>
#include <string.h>
void thongTinThuCung() {
    struct thuCung tc[10];
    int n = 3;
    for (int i = 0; i < n; i++) {
        while (getchar() != '\n');
        printf("Nhap ma thu cung :");
        fgets(tc[i].maThuCung, sizeof(tc[i].maThuCung), stdin);
        printf("Nhap ten thu cung : ");
        fgets(tc[i].tenThuCung, sizeof(tc[i].tenThuCung), stdin);
        printf("Nhap nam sinh thu cung: ");
        scanf("%d", &tc[i].namSinh);
    }
    for (int i = 0; i < n; i++) {
        printf("Ma: %s ", tc[i].maThuCung);
        printf("Ten: %s ", tc[i].tenThuCung);
        printf("Nam Sinh: %d\n", tc[i].namSinh);
    }
    for (int i = 0; i < n; i++) {
        printf("Tuoi cua thu cung %s: %d\n", tc[i].maThuCung, 2025 - tc[i].namSinh);
    }
};