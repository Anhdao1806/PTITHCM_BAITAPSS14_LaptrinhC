#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    printf("Chuoi vua nhap %s\n", chuoi);
    printf("Do dai cua chuoi la: %lu\n", strlen(chuoi));

    return 0;
}

