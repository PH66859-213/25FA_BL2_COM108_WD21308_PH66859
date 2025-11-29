
//Nguyen Dinh Khanh 
//PH66859
//Final Assignment

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

typedef void (*FunctionPtr)();

void handle_function_loop(FunctionPtr function_to_call/*, const char* function_name*/) {

    int tieptuc;
    int luaChonHopLe;

    do
    {
        /*printf("\n=============================\n");
        printf("Chuc nang: %s\n", function_name);*/

        function_to_call();

        do
        {
            luaChonHopLe = 1;
            printf("\n------------------------------\n");
            printf("Ban co muon TIEP TUC thuc hien Chuc Nang nay hay khong?\n");
            printf("Nhap [1] de tiep tuc, nhap [0] de thoat ve Menu chinh: \n");

            if (scanf_s("%d", &tieptuc) != 1) {
                printf("Lua chon khong hop le (Nhap sai kieu du lieu)! Vui long nhap [1] hoac [0]!\n");
                luaChonHopLe = 0;
            }
            else if (tieptuc != 1 && tieptuc != 0) {
                printf("Lua chon khong hop le!! Vui long nhap [1] hoac [0]!\n");
                luaChonHopLe = 0;
            }
            clear_input_buffer();
        } while (luaChonHopLe == 0);
    } while (tieptuc == 1);
}

void CN1_KiemTraSoNguyen() {

    printf("\n===================================\n");
    printf("Chuc nang so 1 : Kiem tra 1 so!\n");
    printf("\n===================================\n");


}
void CN2_TimUocVaBoi() {
    //printf("Day la chuc nang so 2 : Tim UCLN va BCNN\n");
    //int tieptuc = 1;
    /*do
    {*/
    printf("\n===================================\n");
    printf("Chuc nang so 2 : Tim UCLN va BCNN\n");
    printf("\n===================================\n");
    //int soNguyen;
    //printf("\n----------------------------------\n");
    /*printf("Ban co muon TIEP TUC thuc hien Chuc Nang 2 khong?\n");
    printf("Nhap [1] de tiep tuc, nhap [0] de thoat ve Menu chinh: ");

    scanf_s("%d", &tieptuc);
    if (tieptuc != 1 && tieptuc != 0) {
        printf("Lua chon khong hop le!! Vui long nhap [1] hoac [0]!");
    }*/
    /*} while (tieptuc == 1);*/
}
void CN3_TinhTienKaraoke() {
    //printf("Day la chuc nang so 3 : Tinh tien cho quan Karaoke\n");
    /*int tieptuc = 1;
    do
    {*/
    printf("\n===================================\n");
    printf("Chuc nang so 3 : Tinh tien cho quan Karaoke\n");
    printf("\n===================================\n");
    //int soNguyen;
    //printf("\n----------------------------------\n");
//    printf("Ban co muon TIEP TUC thuc hien Chuc Nang 3 khong?\n");
//    printf("Nhap [1] de tiep tuc, nhap [0] de thoat ve Menu chinh: ");

//    scanf_s("%d", &tieptuc);
//    if (tieptuc != 1 && tieptuc != 0) {
//        printf("Lua chon khong hop le!! Vui long nhap [1] hoac [0]!");
//    }
//} while (tieptuc == 1);
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
    printf("Nhap du lieu mang %d phan tu: \n ", length);
    for (int i = 0; i < length; i++)
    {
        printf("mang[%d] = ", i);
        scanf_s("%d", &intergerArray[i]);
    }


    //printf("Sap xep Tang dan du lieu mang %d phan tu:  \n ", length);
    for (int i = 0; i < length - 1; i++)
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
    for (int i = length - 1; i > -1; i--)
    {

        printf("mang[%d] = %d ,", i, intergerArray[i]);
    }

}

int main() {

    int chon;
    do
    {
        printf("==============Menu============\n");
        printf("1.  CN1 _ Kiem Tra So Nguyen\n");
        printf("2.  CN2 _ Tim Uoc So Chung Va Boi Chung Cua 2 So\n");
        printf("3. Sap xep mang 1 chieu\n");
        printf("0.  THOAT KHOI UNG DUNG\n");
        printf("=============================");
        printf("\nChon Chuc Nang Tren Menu: ");
        scanf_s("%d", &chon);
        switch (chon) {
        case 0: printf("\n Cam on quy khach da su dung dich vu!!\n");
            break;
        case 1: handle_function_loop(CN1_KiemTraSoNguyen);
            break;
        case 2: handle_function_loop(CN2_TimUocVaBoi);
            break;
        case 3: handle_function_loop(sapXepPhanTuMang1Chieu);
            break;
        default:
            printf("Chuc nang khong hop le!! Vui long chon chuc nang tu [1-10]!");
            break;
        }
    } while (chon != 0);


}


