#include <stdio.h>
#include <math.h>

int minus(int a);
int del(int a, int d);
int dso(int a, int d);
int prost(int b);
int npd(int a);

int main() {
    int a;
    char c;
    scanf("%d", &a);
    scanf("%c", &c);
    if ((c == EOF) || (c == '\n')) {
        printf("%d", npd(minus(a)));
    } else {
        printf("n/a");
    }
    return 0;
}

int minus(int a) {
    if (a < 0)
        a = a * (-1);
    return a;
}

int del(int a, int d) {
    int b, k = 0;
    b = minus(a);
    while (b >= d) {
        k++;
        b -= d;
    }
    return k;
}

int dso(int a, int d) {
    int b;
    b = minus(a);
    while (b >= d) {
        b -= d;
    }
    return b;
}

int prost(int b) {
    for (int i = 2; i <= sqrt(b); i++)
        if (dso(b, i) == 0)
            return 0;
    return 1;
}

int npd(int a) {
    for (int i = a; i > 0; i--) {
        if (prost(i) == 1)
            if (dso(a, i) == 0)
                return i;
    }
    return 0;
}
