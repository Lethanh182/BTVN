#include<stdio.h>
#define PI 3.14159

double s(double r) {
    if (r <= 0) {
        return -1; 
    }
    return PI * r * r;
}

int main() {
    double r;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &r);
    double area = s(r);
    if (area == -1) {
        printf("ban kinh khong hop le\n");
    } else {
        printf("Dien tich hinh tron: %2.f\n", area);
    }
    return 0;
}