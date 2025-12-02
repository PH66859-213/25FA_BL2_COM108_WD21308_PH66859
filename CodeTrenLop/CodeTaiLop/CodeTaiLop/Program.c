
//Nguyen Dinh Khanh 
//PH66859
//Final Assignment

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


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
    
    printf("\n===================================\n");
    printf("Chuc nang so 2 : Tim UCLN va BCNN\n");
    printf("\n===================================\n");
    
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


void demoMang2Chieu() {
    
    
    int array[2][3];
    printf("Mang 2 chieu: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d] = ", i,j );
            scanf("%d", &array[i][j]);
        }
    }
    printf("Mang da nhap la: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ,", array[i][j]);
        }
        printf("\n");
    }
}
void mangKyTu() {
    //string - "string.h"
    //char mangKyTu[10] = { 'A','n','h' };
    char mangTen[3][10];
    /*for (int i = 0; i < 3; i++) {
        scanf(" %c", &mangKyTu[i]);
    }*/

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            scanf(" %c", &mangTen[i][j]);
            if (mangTen[i][j] == '.') {
                break;
            }
        }
    }
    puts(mangTen);
    /*for (int i = 0; i < 3; i++) {
        printf("%c", mangKyTu[i]);
    }*/
    //puts(mangKyTu);
    //fgets(mangKyTu);

}
int main() {

    int chon;
    do
    {
        printf("==============Menu============\n");
        printf("1.  CN1 _ Kiem Tra So Nguyen\n");
        printf("2.  CN2 _ Tim Uoc So Chung Va Boi Chung Cua 2 So\n");
        printf("3. Sap xep mang 1 chieu\n");
        printf("4. Mang 2 chieu\n");
        printf("5. Mang Ky Tu \n");
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
        case 4: handle_function_loop(demoMang2Chieu);
            break;
        case 5: handle_function_loop(mangKyTu);
            break;
        default:
            printf("Chuc nang khong hop le!! Vui long chon chuc nang tu [1-3]!\n");
            break;
        }
    } while (chon != 0);


}


