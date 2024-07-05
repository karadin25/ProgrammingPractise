#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    
    printf("Enter the coordinates of the start of the vector (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Enter the coordinates of the end of the vector (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    
    double length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("The length of the vector is: %.6f\n", length);
    
    return 0;
}

