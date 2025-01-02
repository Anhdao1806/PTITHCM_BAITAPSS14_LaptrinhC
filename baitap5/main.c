#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[] = "Ho Le Anh Dao";
    int soTu = 1;
    int dangTrongTu = 0;
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == ' ') {
         if (dangTrongTu) {
        soTu++;
        dangTrongTu = 0;
            }
        } else {
        dangTrongTu = 1;
        }
    }
    printf("So tu trong chuoi: %d\n", soTu);
    return 0;
}

