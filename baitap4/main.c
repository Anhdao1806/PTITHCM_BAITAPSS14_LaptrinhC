#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[] = "Ho Le Anh Dao ";
    char kyTu;
    int count = 0;
    printf("Nhap ky tu bat ki: ");
    scanf("%c", &kyTu);
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            count++;
        }
    }
    printf("Ky tu %c xuat hien %d lan trong chuoi.\n", kyTu, count);
    return 0;
}

