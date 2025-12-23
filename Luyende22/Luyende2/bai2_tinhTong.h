#pragma once
int tinhTong(int n) {
    int tongLe = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            tongLe += i;
        }
    }
    printf("Tong cac so le tu 1 den %d la: %d\n", n, tongLe);
    if (n % 5 == 0) {
        printf("So %d la so chia het cho 5!\n", n);
    }
    else printf("So %d la so khong chia het cho 5!\n", n);
    return 0;
};