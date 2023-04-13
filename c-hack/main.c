#include <stdio.h>
#include <time.h>
#include <windows.h>

void win() {
    printf("code flow successfully changed\n");
}

int main() {
    printf("normal flow\n");

    time_t t1, t2;
    time(&t1);
    Sleep(2000);
    time(&t2);

    if (difftime(t2, t1) == 1) {
        win();
    }

    return 0;
}
