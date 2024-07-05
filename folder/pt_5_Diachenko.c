#include <stdio.h>

#define MOD 12345

int main() {
    int n;
    printf("Input the length of the sequence n:");
    scanf("%d", &n);
    if (n < 2 || n >= 10000)
    {
        printf("The length of the sequence must be in the range 2 <= n < 10000\n");
        return 1;
    }

    int a[n+1], b[n+1], c[n+1];

    a[1] = 1;
    b[1] = 1;
    c[1] = 0;

    for (int i = 2; i <= n; i++) {
        a[i] = (a[i-1] + b[i-1] + c[i-1]) % MOD;
        b[i] = a[i-1];
        c[i] = b[i-1];
    }

    int result = (a[n] + b[n] + c[n]) % MOD;
    printf("Number of searched sequences: %d\n", result);

    return 0;
}

