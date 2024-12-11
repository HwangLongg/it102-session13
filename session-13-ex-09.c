#include <stdio.h>

int nhapMang(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    return 0;
}

int inMang(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int inGoc(int n, int m, int arr[n][m]) {
    printf("Góc trên trái: %d\n", arr[0][0]);
    printf("Góc trên phải: %d\n", arr[0][m-1]);
    printf("Góc dưới trái: %d\n", arr[n-1][0]);
    printf("Góc dưới phải: %d\n", arr[n-1][m-1]);
    return 0;
}

int inDuongCheoChinh(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n && i < m; i++) {
        printf("Phần tử trên đường chéo chính: %d\n", arr[i][i]);
    }
    return 0;
}

int isSNT(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int inSNT(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isSNT(arr[i][j])) {
                printf("%d là số nguyên tố.\n", arr[i][j]);
            }
        }
    }
    return 0;
}

int main() {
    int n, m, a;
    printf("Nhập số dòng (n) và số cột (m): ");
    scanf("%d %d", &n, &m);

    int arr[n][m];

    do {
        printf("\nChọn chức năng:\n");
        printf("1. Nhập mảng\n");
        printf("2. In mảng\n");
        printf("3. In các góc mảng\n");
        printf("5. In đường chéo chính\n");
        printf("6. In các số nguyên tố trong mảng\n");
        printf("Nhập lựa chọn (1-6): ");
        scanf("%d", &a);

        switch (a) {
            case 1:
                nhapMang(n, m, arr);
                break;
            case 2:
                inMang(n, m, arr);
                break;
            case 3:
                inGoc(n, m, arr);
                break;
            case 5:
                inDuongCheoChinh(n, m, arr);
                break;
            case 6:
                inSNT(n, m, arr);
                break;
            default:
                printf("Chọn không hợp lệ. Chương trình sẽ kết thúc.\n");
                break;
        }
    } while (a >= 1 && a <= 6);

    return 0;
}
