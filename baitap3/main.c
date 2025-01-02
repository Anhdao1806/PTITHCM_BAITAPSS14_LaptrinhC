#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[] = "Ho Le Anh Dao";
    int doDai = strlen(chuoi);
    printf("Chuoi goc: %s\n", chuoi);
    printf("Chuoi dao nguoc: ");
    for (int i = doDai - 1; i >= 0; i--) {
        putchar(chuoi[i]);
    }
    printf("\n");
    return 0;
}
