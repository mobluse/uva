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
}
