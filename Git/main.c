#include <stdio.h>
#include <time.h>

int main() {
    int a, b = 0;
    for (int i = 1; i <= 10; i++) {
        a = rand() % 21;
        b = rand() % 21;
        while (a == 0 || b == 0)
        {
            a = rand() % 21;
            b = rand() % 21;
        }
        int c = rand() % 4;
        int d;
        if (c == 0) {
            printf("[%d/10] %d + %d = ", i, a, b);
            scanf_s("%d", &d);
            if (d == a + b) printf("Correct!\n");
            else printf("Wrong! Answer is %d\n", a + b);
        }
        if (c == 1) {
            printf("[%d/10] %d - %d = ", i, a, b);
            scanf_s("%d", &d);
            if (d == a - b) printf("Correct!\n");
            else printf("Wrong! Answer is %d\n", a - b);
        }
        if (c == 2) {
            printf("[%d/10] %d x %d = ", i, a, b);
            scanf_s("%d", &d);
            if (d == a * b) printf("Correct!\n");
            else printf("Wrong! Answer is %d\n", a * b);
        }
        if (c == 3) {
            printf("[%d/10] %d / %d = ", i, a, b);
            scanf_s("%d", &d);
            if (d == a / b) printf("Correct!\n");
            else printf("Wrong! Answer is %d\n", a / b);
        }

    }
}