#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[] = "Ho Le Anh Dao";
    int demChuCai = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
        demChuCai++;
        }
    }
    printf("Chuoi: \"%s\"\n", chuoi);
    printf("So ky tu la chu cai trong chuoi la: %d\n", demChuCai);
    return 0;
}

