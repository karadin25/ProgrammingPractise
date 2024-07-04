#include <stdio.h>

int NSD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int NSK(int a, int b) {
    return a * (b / NSD(a, b));
}

int main() {
    int p;
    printf("Input the number of p: ");
    scanf("%d", &p);

    if (p < 2 || p > 20) {
        printf("Invalid number of numbers p. Should be 2 <= p <= 20.\n");
        return 1;
    }

    int numbers[p];
    printf("Input %d integer numbers, separated by spaces: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
    for (int i = 1; i < p; i++) {
        result = NSK(result, numbers[i]);
    }

    printf("Least common multiple: %d\n", result);
    return 0;
}

