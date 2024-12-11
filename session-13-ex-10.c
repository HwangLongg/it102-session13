#include <stdio.h>

int arr[100];
int n = 0;

int nhapMang() {
    printf("Nhập số phần tử cần nhập (tối đa 100): ");
    scanf("%d", &n);
    if (n > 100) {
        printf("Số phần tử vượt quá giới hạn tối đa là 100.\n");
        n = 100;
    }
    printf("Nhập các phần tử:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    return 0;
}

int inMang() {
    if (n == 0) {
        printf("Mảng rỗng!\n");
        return -1;
    }
    printf("Mảng hiện tại là:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int themPhanTu() {
    int vitri, giaTri;
    if (n >= 100) {
        printf("Mảng đã đầy!\n");
        return -1;
    }
    printf("Nhập vị trí muốn thêm (0 <= vị trí < %d): ", n);
    scanf("%d", &vitri);
    if (vitri < 0 || vitri > n) {
        printf("Vị trí không hợp lệ!\n");
        return -1;
    }
    printf("Nhập giá trị phần tử: ");
    scanf("%d", &giaTri);
    
    for (int i = n; i > vitri; i--) {
        arr[i] = arr[i - 1];
    }
    arr[vitri] = giaTri;
    n++;
    return 0;
}

int suaPhanTu() {
    int vitri, giaTri;
    printf("Nhập vị trí muốn sửa (0 <= vị trí < %d): ", n);
    scanf("%d", &vitri);
    if (vitri < 0 || vitri >= n) {
        printf("Vị trí không hợp lệ!\n");
        return -1;
    }
    printf("Nhập giá trị mới: ");
    scanf("%d", &giaTri);
    arr[vitri] = giaTri;
    return 0;
}

int xoaPhanTu() {
    int vitri;
    printf("Nhập vị trí muốn xóa (0 <= vị trí < %d): ", n);
    scanf("%d", &vitri);
    if (vitri < 0 || vitri >= n) {
        printf("Vị trí không hợp lệ!\n");
        return -1;
    }

    for (int i = vitri; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    return 0;
}

int sapXepGiamDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}

int sapXepTangDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}

int timKiemTuyenTinh(int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int timKiemNhiPhan(int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int menuSapXep() {
    int chon;
    printf("Chọn cách sắp xếp:\n");
    printf("a. Giảm dần\n");
    printf("b. Tăng dần\n");
    printf("Nhập lựa chọn: ");
    scanf(" %c", &chon);
    if (chon == 'a') {
        sapXepGiamDan();
        printf("Mảng sau khi sắp xếp giảm dần:\n");
        inMang();
    } else if (chon == 'b') {
        sapXepTangDan();
        printf("Mảng sau khi sắp xếp tăng dần:\n");
        inMang();
    } else {
        printf("Lựa chọn không hợp lệ!\n");
    }
    return 0;
}

int main() {
    int luaChon, x, viTri;
    do {
        printf("\nMENU:\n");
        printf("1. Nhập số phần tử và giá trị các phần tử\n");
        printf("2. In ra giá trị các phần tử\n");
        printf("3. Thêm một phần tử vào vị trí chỉ định\n");
        printf("4. Sửa một phần tử ở vị trí chỉ định\n");
        printf("5. Xóa một phần tử ở vị trí chỉ định\n");
        printf("6. Sắp xếp các phần tử\n");
        printf("7. Tìm kiếm phần tử\n");
        printf("8. Thoát\n");
        printf("Nhập lựa chọn: ");
        scanf("%d", &luaChon);
        
        switch (luaChon) {
            case 1:
                nhapMang();
                break;
            case 2:
                inMang();
                break;
            case 3:
                themPhanTu();
                break;
            case 4:
                suaPhanTu();
                break;
            case 5:
                xoaPhanTu();
                break;
            case 6:
                menuSapXep();
                break;
            case 7:
                printf("Nhập phần tử cần tìm: ");
                scanf("%d", &x);
                printf("Chọn phương pháp tìm kiếm:\n");
                printf("a. Tìm kiếm tuyến tính\n");
                printf("b. Tìm kiếm nhị phân\n");
                printf("Nhập lựa chọn: ");
                char chon;
                scanf(" %c", &chon);
                if (chon == 'a') {
                    viTri = timKiemTuyenTinh(x);
                } else if (chon == 'b') {
                    if (n == 0) {
                        printf("Mảng rỗng, không thể tìm kiếm nhị phân.\n");
                    } else {
                        sapXepTangDan();
                        viTri = timKiemNhiPhan(x);
                    }
                }
                if (viTri == -1) {
                    printf("Không tìm thấy phần tử %d.\n", x);
                } else {
                    printf("Phần tử %d tìm thấy tại vị trí %d.\n", x, viTri);
                }
                break;
            case 8:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ.\n");
        }
    } while (luaChon != 8);
    
    return 0;
}
