#include <stdio.h>

int gcd(int a, int b) {
    int min_val = (a < b) ? a : b;
    int result = 1;
    for (int i = 1; i <= min_val; i++) {
        if (a % i == 0 && b % i == 0) {
            result = i;
        }
    }
    return result;
}

int main() {
    int num1, num2;
    printf("Nhập số nguyên thứ nhất: ");
    scanf("%d", &num1);
    printf("Nhập số nguyên thứ hai: ");
    scanf("%d", &num2);

    int result = gcd(num1, num2);

    printf("Ước chung lớn nhất của %d và %d là: %d\n", num1, num2, result);

    return 0;
}
