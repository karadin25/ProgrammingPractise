#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long long countAnagrams(char *word) {
    int length = strlen(word);
    int freq[256] = {0};
    for (int i = 0; i < length; i++) {
        freq[(int)word[i]]++;
    }

    unsigned long long total_permutations = factorial(length);
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            total_permutations /= factorial(freq[i]);
        }
    }

    return total_permutations;
}

int main() {
    char word[15];
    printf("Enter a word: ");
    scanf("%14s", word);

    unsigned long long result = countAnagrams(word);
    printf("Number of anagrams: %llu\n", result);

    return 0;
}

