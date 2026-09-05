#include <stdio.h>

int main() {
    int n = 5;

    // ลูปนอกวิ่งตามจำนวนแถว
    for(int i = 1; i <= n; i++) {

        // ลูปช่องว่าง
        for(int j = i; j < n; j++) {
            printf("  ");
        }

        // ลูปพิมพ์ดาว
        for(int k = 1; k <= (2* i -1); k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
