#include <stdio.h>
int main() {
    int num, reversed = 0;

    printf("Nh?p vào m?t s? nguyên có 4 ch? s?: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("S? nh?p vào không ph?i là s? nguyên có 4 ch? s?.\n");
        return 1; 
    }

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("S? d?o ngu?c là: %d\n", reversed);

    return 0;
}
