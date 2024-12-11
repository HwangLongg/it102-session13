#include <stdio.h>

int taoMaTran(int mang[10][10], int dong, int cot) {
    printf("Nhập các giá trị cho ma trận %dx%d:\n", dong, cot);
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhập phần tử [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mang[i][j]);
        }
    }
    return 0;
}

int inMaTran(int mang[10][10], int dong, int cot) {
    printf("Ma trận đã nhập là:\n");
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d\t", mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int dong, cot;
    int mang[10][10];

    printf("Nhập số hàng của ma trận: ");
    scanf("%d", &dong);
    printf("Nhập số cột của ma trận: ");
    scanf("%d", &cot);

    if (dong > 10 || cot > 10) {
        printf("Số hàng và số cột không thể vượt quá 10.\n");
        return 1;
    }

    taoMaTran(mang, dong, cot);

    inMaTran(mang, dong, cot);

    return 0;
}
