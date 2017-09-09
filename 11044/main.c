/* @JUDGE_ID: mobluse 11044 C "Closed-form expression" */
/* gcc -lm -lcrypt -O2 -pipe -ansi -DONLINE_JUDGE main.c */
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int i;
    for (i = 0; i < t; ++i) {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", (n/3)*(m/3));
    }
    return 0;
}
