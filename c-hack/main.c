#include <stdio.h>
#include <time.h>
#include <windows.h>

void win();
int add(int a, int b, int c, int d, int e, int f, int g, int h);

int main() {
    int sum = 0;

    printf("normal flow\n");

    sum = add(1, 2, 3,4, 5, 6, 7, 8);
    printf("sum: %d\n", sum);

    time_t t1, t2;
    time(&t1);
    Sleep(2000);
    time(&t2);

    if (difftime(t2, t1) == 1) {
        win();
    }

    return 0;
}

void win() {
    printf("code flow successfully changed\n");
}

int add(int a, int b, int c, int d, int e, int f, int g, int h) {
    return a + b + c + d + e + f + g + h;
}
