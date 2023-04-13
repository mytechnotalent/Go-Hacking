#include <stdio.h>
#include <time.h>
#include <windows.h>

int get_magic_number();
int add(int a, int b, int c, int d, int e, int f, int g, int h);
void win();

int main() {
    int magic_number = 0;
    int sum = 0;

    magic_number = get_magic_number();
    sum = add(magic_number, 2, 3,4, 5, 6, 7, 8);
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

int get_magic_number() {
    int number;
    printf("Enter the magic number: ");
    scanf("%d", &number);
    if (number == 42) {
        printf("THE MEANING OF LIFE!\n");
    } else
    {
        printf("clearly not a Hitchhiker's fan... :(\n");
    }
    return number;
}

int add(int a, int b, int c, int d, int e, int f, int g, int h) {
    return a + b + c + d + e + f + g + h;
}

void win() {
    printf("code flow successfully changed\n");
}
