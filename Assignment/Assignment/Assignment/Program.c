
//Nguyen Dinh Khanh 
//PH66859
//Final Assignment

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>


void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


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
    int soDien;
    double bill=0;
    printf("\n===================================\n");
    printf("Chuc nang so 4 : Tinh tien dien!\n");
    printf("Nhap so kwh thang vua roi: ");
    scanf_s("%d", &soDien);
    while (soDien < 0) {
        printf("So dien phai lon hon 0! Nhap lai so dien : ");
        scanf_s("%d", &soDien);
    }
    if (soDien <= 50) {
        bill = soDien * 1678;
    }
    else if (soDien <= 100) {
        bill = 50 * 1678 + (soDien - 50) * 1734;
    }
    else if (soDien <= 200) {
        bill = 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014;
    }
    else if (soDien <= 300) {
        bill = 50 * 1678 + 50 * 1734 + 100 * 2014 + (soDien - 200) * 2536;
    }
    else if (soDien <= 400) {
        bill = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (soDien - 300) * 2834;
    }
    else {
        bill = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (soDien - 400) * 2927;
    }
    printf("Tong so tien dien can thanh toan thang nay la: %.2lf VND", bill);
    printf("\n===================================\n");
    
}
void CN5_DoiTien() {
   
    int money;
    printf("\n===================================\n");
    printf("Chuc nang so 5 : Chuc nang doi tien!\n");
    printf("Nhap so tien can doi: ");
    scanf_s("%d", &money);

    while (money <= 0) {
        printf("So tien phai >= 0. Nhap lai: ");
        scanf_s("%d", &money);
    }
    
    int menhGia500[] = { 200, 100, 50, 20, 10, 5, 2, 1 };
    int menhGiaNormal[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };

    int size;
    int* menhGia;
    if (money == 500) {
        menhGia = menhGia500;
        size = sizeof(menhGia500) / sizeof(menhGia500[0]);

    }
    else {
        menhGia = menhGiaNormal;
        size = sizeof(menhGiaNormal) / sizeof(menhGiaNormal[0]);

    }
    printf("Ket qua doi tien: \n");
    for (int i = 0; i < size; i++) {
        if (money >= menhGia[i]) {
            int soTo = money / menhGia[i];
            money = money % menhGia[i];
            printf("%d VND: %d to\n",menhGia[i],soTo);
        }
    }
    printf("\n===================================\n");
    
}
void CN6_TinhLaiSuat() {
    double tienVay;
    double laiSuat = 0.05;
    int soThang = 12;

    printf("\n===================================\n");
    printf("Chuc nang so 6 : Chuc nang tinh lai xuat vay ngan hang vay tra gop!\n");
    printf("Nhap so tien can vay: ");
    scanf_s("%lf", &tienVay);
    while (tienVay <= 0) {
        printf("So tien vay phai >=0. Nhap lai: ");
        scanf_s("%lf", &tienVay);
    }
    double gocMoiThang = tienVay / soThang;
    double duNo = tienVay;
    
    printf("\n%-10s %-15s %-15s %-20s %-20s\n", "Thang", "Lai phai tra", "Goc Phai Tra", "So tien phai tra", "So tien con lai");
    
    for( int i =1 ; i<= soThang ; i++){
        double lai = duNo * laiSuat;
        double gocPhaiTra;
        if (i == soThang) {
            gocPhaiTra = duNo;
        }
        else {
            gocPhaiTra = gocMoiThang;
        }
        double tongTra = lai + gocPhaiTra;
        duNo = duNo - gocPhaiTra;

        printf("\n%-10d %-15.2lf  %-15.2lf  %-20.2lf  %-20.2lf VND \n", i, lai, gocPhaiTra, tongTra, duNo);
    }

    printf("\n===================================\n");
   
}
void CN7_VayTienMuaXe() {
    
    printf("\n===================================\n");
    printf("Chuc nang so 7 : Chuong trinh vay tien mua xe!\n");
    double vayCoDinh = 500000000;
    int vay;
    double laiSuat = 0.072;
    int soThang = 24;
    printf("Tien duoc vay co dinh la : %.0lf VND!! ", vayCoDinh);
    printf("Ban muon vay bao nhieu phan tram: ");
    scanf_s("%d", &vay);
    while (vay <= 0 || vay > 100) {
        printf("Ban chi duoc vay trong khoang 0 - 100 % cua so tien %.0lf VND . Nhap lai: ", vayCoDinh);
        scanf_s("%d", &vay);
    }
    double tienTraTruoc = (100 - vay) * vayCoDinh / 100;

    double duNo = vayCoDinh - tienTraTruoc;
    double laiPhaiTra;
    double gocCoDinh = duNo / soThang;
    double tongTra;
    printf("Ban chon vay %.d %%, tra truoc %.0lf VND!!, so tien con no : %.0lf VND", vay, tienTraTruoc,duNo);
    
    printf("\n%-15s %-15s %-15s %-15s %-10s  \n","Thang","Lai Phai Tra","Goc Phai Tra","Tong Tra","Con No");

    for (int i = 1; i <= soThang; i++) {
        laiPhaiTra = duNo * laiSuat;
        double gocPhaiTra;
        if (i == soThang) {
            gocPhaiTra = duNo;
        }
        else {
            gocPhaiTra = gocCoDinh;
        }
        tongTra = laiPhaiTra + gocPhaiTra;
        duNo = duNo - gocPhaiTra;


        printf("\n%-15d %-15.0lf %-15.0lf %-15.0lf %-9.0lf   VND  \n", i, laiPhaiTra, (i==soThang)? gocPhaiTra:(duNo+gocPhaiTra), tongTra, duNo)
            ;
    }
    printf("\n===================================\n");
    
}
void CN8_SapXepThongTinSinhVien() {
    printf("\n===================================\n");
    printf("Chuc nang so 8 : Chuc nang sap xep thong tin sinh vien!\n");
    int n;
    printf("Hay nhap vao so sinh vien : ");
    scanf_s("%d", &n);
    char hoTen[100][25];
    double diem[100];
    char hocLuc[100][15];
    for (int i = 0; i < n; i++) {
        clear_input_buffer();
        printf("Nhap ten sinh vien %d: ", i + 1);
        scanf("%[^\n]", hoTen[i]);
        //fgets(hoTen[i], sizeof(hoTen[i]), stdin);
        printf("Nhap diem cua sinh vien %d: ", i + 1);
        scanf_s("%lf", &diem[i]);

        if (diem[i] >= 9) strcpy(hocLuc[i], "Xuat sac");
        else if (diem[i] >= 8) strcpy(hocLuc[i], "Gioi");
        else if (diem[i] >= 7) strcpy(hocLuc[i], "Kha");
        else if (diem[i] >= 6) strcpy(hocLuc[i], "Trung Binh");
        else strcpy(hocLuc[i], "Yeu");

    }

    for (int i = 0; i < n -1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diem[i] < diem[j]) {
                double tmpD = diem[i];
                diem[i] = diem[j];
                diem[j] = tmpD;

                char tmpName[25];
                strcpy(tmpName, hoTen[i]);
                strcpy(hoTen[i], hoTen[j]);
                strcpy(hoTen[j], tmpName);

                char tmpHocLuc[15];
                strcpy(tmpHocLuc, hocLuc[i]);
                strcpy(hocLuc[i], hocLuc[j]);
                strcpy(hocLuc[j], tmpHocLuc);

            }
        }
    }

    printf("\n%-20s %-20s %-20s \n", "Ho Ten", "Diem", "Hoc Luc");
    for (int i = 0; i < n; i++) {
        printf("\n %-20s %-20.2lf %-20s \n", hoTen[i], diem[i], hocLuc[i]);
    }
    printf("\n===================================\n");
    
}
void CN9_GameFPOLY_LOTT() {
    
    printf("\n===================================\n");
    printf("Chuc nang so 9 : Game FPoly - LOTT\n");
    int a;
    int b;
    printf("Nhap vao 2 so bat ky de bat dau choi tro choi may man!!\n");
    printf("Nhap vao so dau tien: ");
    scanf("%d", &a);
    while (a < 1 || a> 15) {
        printf("Khong hop le. Vui long nhap lai so tu [1 - 15]: ");
        scanf("%d", &a);
    }
    printf("Nhap vao so thu hai: ");
    scanf("%d", &b);
    while (b < 1 || b> 15 || b ==a) {
        printf("Khong hop le. Vui long nhap lai so tu [1 - 15] va phai khac so thu nhat: ");
        scanf("%d", &b);
    }
    srand(time(NULL));
    int system1 = rand() % 15 + 1;
    int system2;
    do
    {
        system2 = rand() % 15 + 1;
    } while (system2==system1);
    printf("So may tinh chon: %d va %d \n", system1, system2);
    printf("So ban chon: %d va %d \n", a, b);
    int count = 0;
    if (a == system1 || a == system2) count++;
    if (b == system1 || b == system2) count++;
    
    if (count == 2) printf("Chuc mung ban da trung giai nhat!\n");
    else if (count == 1) printf("Chuc mung ban da trung giai nhi! \n");
    else printf("Chuc ban may man lan sau!\n");

    printf("\n===================================\n");
    
}
void CN10_TinhToanPhanSo() {
    
    printf("\n===================================\n");
    printf("Chuc nang so 10 : Chuong trinh tinh toan phan so!\n");
    int tuSo1;
    int mauSo1;
    int tuSo2;
    int mauSo2;
    printf("Nhap hai phan so bat ky vao de bat dau chuong trinh!!\n");
    printf("Nhap tu so phan so thu nhat: ");
    scanf("%d", &tuSo1);
    printf("Nhap mau so phan so thu nhat: ");
    do
    {
        scanf("%d", &mauSo1);
        if (mauSo1 == 0) {
            printf("Mau so phai khac 0! Nhap lai: ");
        }
    } while (mauSo1==0);
    printf("Nhap tu so phan so thu hai: ");
    scanf("%d", &tuSo2);

    printf("Nhap mau so phan so thu hai: ");
    do
    {
        scanf("%d", &mauSo2);
        if (mauSo2 == 0) {
            printf("Mau so phai khac 0! Nhap lai: ");
        }
    } while (mauSo2==0);
    
    int tuTong = tuSo1 * mauSo2 + tuSo2 * mauSo1;
    int mauTong = mauSo1 * mauSo2;
    int u1= gcd(tuTong, mauTong);
    tuTong /= u1;
    mauTong /= u1;

    int tuHieu = tuSo1 * mauSo2 - tuSo2 * mauSo1;
    int mauHieu = mauSo1 * mauSo2;
    int u2 = gcd(tuHieu, mauHieu);
    tuHieu /= u2;
    mauHieu /= u2;

    int tuTich = tuSo1 * tuSo2;
    int mauTich = mauSo1 * mauSo2;
    int u3 = gcd(tuTich, mauTich);
    tuTich /= u3;
    mauTich /= u3;

    int tuThuong = tuSo1 * mauSo2;
    int mauThuong = mauSo1 * tuSo1;
    int u4 = gcd(tuThuong, mauThuong);
    tuThuong /= u4;
    mauThuong /= u4;

    printf("Tong cua %d/%d + %d/%d = %d/%d \n", tuSo1, mauSo1, tuSo2, mauSo2, tuTong, mauTong);
    printf("Hieu cua %d/%d - %d/%d = %d/%d \n", tuSo1, mauSo1, tuSo2, mauSo2, tuHieu, mauHieu);
    printf("Tich cua %d/%d * %d/%d = %d/%d \n", tuSo1, mauSo1, tuSo2, mauSo2, tuTich, mauTich);
    printf("Thuong cua %d/%d : %d/%d = %d/%d \n", tuSo1, mauSo1, tuSo2, mauSo2, tuThuong, mauThuong);
    printf("\n===================================\n");
    
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
            case 4: CN4_TinhTienDien();
                break;
            case 5: CN5_DoiTien();
                break;
            case 6: CN6_TinhLaiSuat();
                break;
            case 7: CN7_VayTienMuaXe();
                break;
            case 8: CN8_SapXepThongTinSinhVien();
                break;
            case 9: CN9_GameFPOLY_LOTT();
                break;
            case 10: CN10_TinhToanPhanSo();
                break;
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


