
//Nguyen Dinh Khanh 
//PH66859
//Final Assignment

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

typedef void (*FunctionPtr)();

void CN1_KiemTraSoNguyen() {
    int x;
    int isPrime=0;
    int isSquare;
    printf("\n===================================\n");
    printf("Chuc nang so 1 : Kiem tra 1 so!\n");
    while (scanf_s("%d", &x) != 1) {
        printf("Du lieu khong hop le! Xin nhap lai 1 so nguyen");
    }
    printf("So %d la mot so nguyen! \n", x);
    if (x < 3) {
        printf("So %d khong phai la so nguyen to!!\n", x);
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            isPrime++;
        }
    }
    if (isPrime == 0) {
        printf("So %d la so nguyen to!\n",x);

    }
    else {
        printf("So %d khong phai so nguyen to!\n",x);

    }
    isSquare = (int)sqrt(x);
    if (pow(isSquare, 2) == x) {
        printf("So %d la so chinh phuong !\n", x);
    }
    else {
        printf("So %d khong phai la so chinh phuong !\n", x);
    }
    printf("\n===================================\n");


}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    int u = gcd(a, b);
    return (a / u) * b;
}
void CN2_TimUocVaBoi() {
    int x;
    int y;
    printf("\n===================================\n");
    printf("Chuc nang so 2 : Tim UCLN va BCNN\n");
    printf("Nhap vao 2 so nguyen bat ky: ");
    scanf_s("%d", &x);
    scanf_s("%d", &y);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, gcd(x, y));
    printf("Boi chung nho nhat cua %d va %d la: %d\n", x, y, lcm(x, y));
    printf("\n===================================\n");
   
}

void CN3_TinhTienKaraoke() {
    int gioVao;
    int gioRa;
    double bill;
    printf("\n===================================\n");
    printf("Chuc nang so 3 : Tinh tien cho quan Karaoke\n");
    printf("Nhap gio vao quan: ");
    while (scanf_s("%d", &gioVao) != 1) {
        printf("Du lieu khong hop le, vui long nhap lai!!! :");
    }
    if (gioVao < 12 || gioVao >23) {
        printf("Quan chi mo cua tu 12h - 23h! Vui long quay lai sau!!\n");
        return;
    }
    printf("Nhap gio ra quan: ");
    while (scanf_s("%d", &gioRa) != 1) {
        printf("Du lieu khong hop le, vui long nhap lai!!! :");
    }
    if (gioRa <= gioVao || gioRa > 23) {
        printf("Gio ra phai lon hon gio vao va <= 23h!\n");
        return;
    }
    int tongGio = gioRa - gioVao;
    
    if (tongGio < 4) {
        bill = tongGio * 150000;
    }
    else {
        bill = 3 * 150000 + ((tongGio - 3) * 150000 * 0.7);
    }
    if (gioVao >= 12 && gioVao<=17) {
        bill = bill * 0.9;
    }

    printf("Tong so tien can thanh toan cua ban la: %.2lf VND \n", bill);

    printf("\n===================================\n");
    
}
void CN4_TinhTienDien() {
    //printf("Day la chuc nang so 4 : Tinh tien dien!\n");
    /*int tieptuc = 1;
    do
    {*/
    printf("\n===================================\n");
    printf("Chuc nang so 4 : Tinh tien dien!\n");
    printf("\n===================================\n");
    //int soNguyen;
    /*printf("\n----------------------------------\n");
    printf("Ban co muon TIEP TUC thuc hien Chuc Nang 4 khong?\n");
    printf("Nhap [1] de tiep tuc, nhap [0] de thoat ve Menu chinh: ");

    scanf_s("%d", &tieptuc);
    if (tieptuc != 1 && tieptuc != 0) {
        printf("Lua chon khong hop le!! Vui long nhap [1] hoac [0]!");
    }
} while (tieptuc == 1);*/
}
void CN5_DoiTien() {
    //printf("Day la chuc nang so 5 : Chuc nang doi tien!\n");
  /*  int tieptuc = 1;
    do
    {*/
    printf("\n===================================\n");
    printf("Chuc nang so 5 : Chuc nang doi tien!\n");
    printf("\n===================================\n");
    //int soNguyen;
   /* printf("\n----------------------------------\n");
    printf("Ban co muon TIEP TUC thuc hien Chuc Nang 5 khong?\n");
    printf("Nhap [1] de tiep tuc, nhap [0] de thoat ve Menu chinh: ");

    scanf_s("%d", &tieptuc);
    if (tieptuc != 1 && tieptuc != 0) {
        printf("Lua chon khong hop le!! Vui long nhap [1] hoac [0]!");
    }
} while (tieptuc == 1);*/
}
void CN6_TinhLaiSuat() {
    //printf("Day la chuc nang so 6 : Chuc nang tinh lai xuat vay ngan hang vay tra gop!\n");
   /* int tieptuc = 1;
    do
    {*/
    printf("\n===================================\n");
    printf("Chuc nang so 6 : Chuc nang tinh lai xuat vay ngan hang vay tra gop!\n");
    printf("\n===================================\n");
    //int soNguyen;
   /* printf("\n----------------------------------\n");
    printf("Ban co muon TIEP TUC thuc hien Chuc Nang 6 khong?\n");
    printf("Nhap [1] de tiep tuc, nhap [0] de thoat ve Menu chinh: ");

    scanf_s("%d", &tieptuc);
    if (tieptuc != 1 && tieptuc != 0) {
        printf("Lua chon khong hop le!! Vui long nhap [1] hoac [0]!");
    }
} while (tieptuc == 1);*/
}
void CN7_VayTienMuaXe() {
    //printf("Day la chuc nang so 7 : Chuong trinh vay tien mua xe!\n");
    /*int tieptuc = 1;
    do
    {*/
    printf("\n===================================\n");
    printf("Chuc nang so 7 : Chuong trinh vay tien mua xe!\n");
    printf("\n===================================\n");
    //int soNguyen;
    /*printf("\n----------------------------------\n");
    printf("Ban co muon TIEP TUC thuc hien Chuc Nang 7 khong?\n");
    printf("Nhap [1] de tiep tuc, nhap [0] de thoat ve Menu chinh: ");

    scanf_s("%d", &tieptuc);
    if (tieptuc != 1 && tieptuc != 0) {
        printf("Lua chon khong hop le!! Vui long nhap [1] hoac [0]!");
    }
} while (tieptuc == 1);*/
}
void CN8_SapXepThongTinSinhVien() {
    //printf("Day la chuc nang so 8 : Chuc nang sap xep thong tin sinh vien!\n");
    //int tieptuc = 1;
    //do
    //{
    printf("\n===================================\n");
    printf("Chuc nang so 8 : Chuc nang sap xep thong tin sinh vien!\n");
    printf("\n===================================\n");
    //int soNguyen;
   /* printf("\n----------------------------------\n");
    printf("Ban co muon TIEP TUC thuc hien Chuc Nang 8 khong?\n");
    printf("Nhap [1] de tiep tuc, nhap [0] de thoat ve Menu chinh: ");

    scanf_s("%d", &tieptuc);
    if (tieptuc != 1 && tieptuc != 0) {
        printf("Lua chon khong hop le!! Vui long nhap [1] hoac [0]!");
    }
} while (tieptuc == 1);*/
}
void CN9_GameFPOLY_LOTT() {
    //printf("Day la chuc nang so 9 : Game FPoly - LOTT\n");
   /* int tieptuc = 1;
    do
    {*/
    printf("\n===================================\n");
    printf("Chuc nang so 9 : Game FPoly - LOTT\n");
    printf("\n===================================\n");
    //int soNguyen;
   /* printf("\n----------------------------------\n");
    printf("Ban co muon TIEP TUC thuc hien Chuc Nang 9 khong?\n");
    printf("Nhap [1] de tiep tuc, nhap [0] de thoat ve Menu chinh: ");

    scanf_s("%d", &tieptuc);
    if (tieptuc != 1 && tieptuc != 0) {
        printf("Lua chon khong hop le!! Vui long nhap [1] hoac [0]!");
    }
} while (tieptuc == 1);*/
}
void CN10_TinhToanPhanSo() {
    //printf("Day la chuc nang so 10 : Xay dung chuong trinh tinh toan phan so!\n");
   /* int tieptuc = 1;
    do
    {*/
    printf("\n===================================\n");
    printf("Chuc nang so 10 : Chuong trinh tinh toan phan so!\n");
    printf("\n===================================\n");
    //int soNguyen;
   /* printf("\n----------------------------------\n");
    printf("Ban co muon TIEP TUC thuc hien Chuc Nang 10 khong?\n");
    printf("Nhap [1] de tiep tuc, nhap [0] de thoat ve Menu chinh: ");

    scanf_s("%d", &tieptuc);
    if (tieptuc != 1 && tieptuc != 0) {
        printf("Lua chon khong hop le!! Vui long nhap [1] hoac [0]!");
    }
} while (tieptuc == 1);*/
}

void sapXepPhanTuMang1Chieu() {
    int intergerArray[100];
    int length;
    int temp; //temperary
    printf("Nhap so luong phan tu mang: ");
    scanf_s("%d", &length);
    printf("Nhap du lieu mang %d phan tu: \n ",length);
    for ( int i = 0; i < length;i++)
    {
        printf("mang[%d] = ", i);
        scanf_s("%d", &intergerArray[i]);
    }
    

    //printf("Sap xep Tang dan du lieu mang %d phan tu:  \n ", length);
    for ( int i = 0; i < length-1;i++)
    {
        if (intergerArray[i] > intergerArray[i + 1]) {
            temp = intergerArray[i];
            intergerArray[i] = intergerArray[i + 1];
            intergerArray[i + 1] = temp;
            i = -1;
        }
    }
    printf("Mang sap xep theo thu tu tang dan:  \n ");
    for (int i = 0; i < length; i++)
    {

        printf("mang[%d] = %d ,", i, intergerArray[i]);
    }

    printf("\nMang sap xep theo thu tu giam dan:  \n ");
    for (int i = length-1; i >-1; i--)
    {

        printf("mang[%d] = %d ,", i, intergerArray[i]);
    }

}

void lapChucNang(int chonChucNang) {
    int tiepTuc = 1;
    while (tiepTuc == 1) {
        switch (chonChucNang)
        {
            case 0: printf("\n Cam on quy khach da su dung dich vu!!\n");
                return;
            case 1: CN1_KiemTraSoNguyen();
                break;
            case 2: CN2_TimUocVaBoi();
                break;
            case 3: CN3_TinhTienKaraoke();
                break;
            //case 4: CN4_TinhTienDien();
            //    break;
            //case 5: CN5_DoiTien();
            //    break;
            //case 6: handle_function_loop(CN6_TinhLaiSuat);
            //    break;
            //case 7: handle_function_loop(CN7_VayTienMuaXe);
            //    break;
            //case 8: handle_function_loop(CN8_SapXepThongTinSinhVien);
            //    break;
            //case 9: handle_function_loop(CN9_GameFPOLY_LOTT);
            //    break;
            //case 10: handle_function_loop(CN10_TinhToanPhanSo);
            //    break;
            //case 11: handle_function_loop(sapXepPhanTuMang1Chieu);
            //    break;
            default:
                printf("Chuc nang khong hop le!! Vui long chon chuc nang tu [1-10]! : ");
                break;
        }
        
            printf("Tiep tuc chuc nang? [1 = Co | 0 = Khong ] !!");
            scanf_s("%d", &tiepTuc);
            system("cls");
    }

}

int main() {

    int chonChucNang;
    do
    {
        printf("==============Menu============\n");
        printf("1.  CN1 _ Kiem Tra So Nguyen\n");
        printf("2.  CN2 _ Tim Uoc So Chung Va Boi Chung Cua 2 So\n");
        printf("3.  CN3 _ Tinh Tien Cho Quan Karaoke\n");
        printf("4.  CN4 _ Tinh Tien Dien\n");
        printf("5.  CN5 _ Chuc Nang Doi Tien\n");
        printf("6.  CN6 _ Tinh Lai Xuat Vay Ngan Hang Vay Tra Gop\n");
        printf("7.  CN7 _ Vay Tien Mua Xe\n");
        printf("8.  CN8 _ Sap Xep Thong Tin Sinh Vien\n");
        printf("9.  CN9 _ Game FPOLY-LOTT\n");
        printf("10.  CN10 _ Chuong Trinh Tinh Toan Phan So\n");
        printf("11. Sap xep mang 1 chieu\n");
        printf("0.  THOAT KHOI UNG DUNG\n");
        printf("=============================");
        printf("\nChon Chuc Nang Tren Menu: ");
        scanf_s("%d", &chonChucNang);
        if (chonChucNang < 0 || chonChucNang>10) {
            printf("Khong hop le! Vui long chon chuc nang tu [1-10]: ");
            scanf_s("%d", &chonChucNang);
            lapChucNang(chonChucNang);
        }
        else {
            lapChucNang(chonChucNang);

        }
    } while (chonChucNang != 0);


}


