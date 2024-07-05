#include <stdio.h>
#include <math.h>

int minSteps(int x, int y) {
    int distance = y - x;
    if (distance == 0) return 0;

    int steps = 0;
    int stepSize = 0;
    int totalSteps = 0;

     do {
        steps++;
        if (steps % 2 == 1) {
            stepSize++;
        }
        totalSteps += stepSize;
    } while (totalSteps < distance);

    return steps;
}

int main() {
    int x, y;

    printf("Enter the starting point x: ");
    scanf("%d", &x);
    printf("Enter the ending point y: ");
    scanf("%d", &y);

    if (x < 0 || y >= pow(2, 31) || x > y) {
        printf("Invalid input\n");
        return 1;
    }

    int result = minSteps(x, y);
    printf("Minimum number of steps: %d\n", result);

    return 0;
}

