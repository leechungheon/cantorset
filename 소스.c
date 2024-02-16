//4779 칸토어 집합
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void f(int n);
int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        f(pow(3, n));
        printf("\n");
    }
    return 0;
}
void f(int n) {
    if (n != 1) {
        n /= 3;
        f(n);
        for (int i = 0; i < n; i++) {
            printf(" ");
        }
        f(n);
    }
    else {
        printf("-");
    }
}