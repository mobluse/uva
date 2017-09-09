// @JUDGE_ID: mobluse 11044 C++ "Closed-form expression"
// g++ -lm -lcrypt -O2 -pipe -DONLINE_JUDGE main.cpp
// g++ -lm -lcrypt -O2 -pipe -std=c++11 -DONLINE_JUDGE main.cpp
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", (n/3)*(m/3));
    }
    return 0;
}
