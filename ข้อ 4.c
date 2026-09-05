#include <stdio.h>

int main() {
    int num;
    int check = 1; // ให้ 1 เป็นจริง (เป็นจำนวนเฉพาะ)

    printf("Enter number: ");
    scanf("%d", &num);

    // เลขน้อยกว่าหรือเท่ากับ 1 ไม่ใช่จำนวนเฉพาะ
    if (num <= 1) {
        check = 0;
    } else {
        // วน วนลูปเช็ตตัวหาร
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                check = 0; // หารลงตัว คือ ไม่ใช่
                break;     // หยุดลูปทันที
            }

        }

    }

    // แสดงผล
    if (check == 1) {
        printf("%d is Prime\n", num);
    } else {
        printf("%d is NOT Prime\n", num);
    }

    return 0;
}
