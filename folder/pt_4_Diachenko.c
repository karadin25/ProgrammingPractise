#include <stdio.h>

int countEqualDivisors(int n) {
    int count = 0;
    
    for (int m = 1; m * m <= n; ++m) {
        if (n % m == 0) {
            count++;
            if (m * m != n) {   //тут ми перевіряємо, чи дорівнює m кореню квадратному із числа n (при цій умові будуть рахуватися два однакові дільники, оскільки n/m дорівнює кореню із n, що не є правильним для виконання умови)
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int n;
    printf("Введіть натуральне число n (1 < n < 150): ");
    scanf("%d", &n);
    
    if (n <= 1 || n >= 150) {
        printf("Натуральне число n повинно бути більше 1 і менше 150.\n");
        return 1;
    }
    
    int result = countEqualDivisors(n);
    printf("Кількість рівних дільників числа %d: %d\n", n, result);
    
    return 0;
}

