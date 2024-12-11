#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    if ((a>c&&c>b)||(a<c&&c<b)) {
        printf("So thu ba %d nam trong khoang giua %d va %d.\n", c, a, b);
    } else {
        printf("So thu ba %d khong nam trong khoang giua %d va %d.\n", c, a, b);
    }

    return 0;
}

