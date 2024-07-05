#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;

    printf("Enter the coordinates of the center and radius of the first circle (x1, y1, r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);

    printf("Enter the coordinates of the center and radius of the second circle (x2, y2, r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    int intersection_points;

    if (distance == 0 && r1 == r2) {
        // Кола співпадають
        intersection_points = -1;
    } else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        // Кола не перетинаються
        intersection_points = 0;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Кола торкаються в одній точці
        intersection_points = 1;
    } else {
        // Кола перетинаються у двох точках
        intersection_points = 2;
    }

    printf("Number of intersection points: %d\n", intersection_points);

    return 0;
}

