
//Nguyen Dinh Khanh 
//PH66859
//Final Assignment

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
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

void demoString() {
    char mangKyTu[30];
    while (getchar() != '\n');
    printf("Nhap du lieu: ");
    fgets(mangKyTu, sizeof(mangKyTu), stdin);
    printf("%s", mangKyTu);
    printf("\n");
    printf("Sring Length: ");
    printf("%d",strlen(mangKyTu)-1);
    printf("\nString Compare: ");
    printf("%d", strcmp("aBc", "aBc"));
    printf("\nString Compare: ");
    printf("%d", strcmp("B", "A"));
    printf("\nString Compare: ");
    printf("%d", strcmp("A", "B"));

    printf("\nString Reverse (Encryption) : ");
    printf("%s", strrev(mangKyTu));
    printf("\nString Reverse (Decryption) : ");
    printf("%s", strrev(mangKyTu));

    printf("\nString Lower: ");
    printf("%s", strlwr(mangKyTu));
    printf("\nString Upper: ");
    printf("%s", strupr(mangKyTu));
    printf("\nFind String in String:  ");
    if (strstr(mangKyTu, "A") != NULL) {
        printf("Found: ");
        printf("%s", strstr(mangKyTu, "A"));

    }
    else {
        printf("Not found!!");
    }
}
void lapChucNang(int n) {
    int tiepTuc = 1;
    while (tiepTuc == 1) {
        switch (n) {
        /*case 0: printf("\n Quy khach da quay tro lai menu chinh\n");
            break;*/
        case 1: CN1_KiemTraSoNguyen();
            break;
        case 2: CN2_TimUocVaBoi();
            break;
        case 3: sapXepPhanTuMang1Chieu();
            break;
        case 4: demoMang2Chieu();
            break;
        case 5: mangKyTu();
            break;
        case 6: demoString();
            break;
        default:
            printf("Chuc nang khong hop le!! Vui long chon chuc nang tu [1-3]!\n");
            break;
        }
        printf("\nBan muon tiep tuc hay dung lai? [1] tiep tuc [0] dung lai:  ");
        scanf_s("%d", &tiepTuc);
        if (tiepTuc != 1) {
            printf("Quy khach da quay tro lai menu chinh!\n");
            return;
        }
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
        printf("4. Mang 2 chieu\n");
        printf("5. Mang Ky Tu \n");
        printf("6. Demo String \n");
        printf("0.  THOAT KHOI UNG DUNG\n");
        printf("=============================");
        printf("\nChon Chuc Nang Tren Menu: ");
        scanf_s("%d", &chon);
        if (chon == 0) {
            printf("Cam on quy khach da su dung dich vu!!");
            break;
        }
        lapChucNang(chon);
        
    } while (chon != 0);


}


