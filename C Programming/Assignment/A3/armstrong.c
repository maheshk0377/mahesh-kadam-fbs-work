#include <stdio.h>
#include <math.h>

int main() {
    int n = 153;
    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    while (n != 0) {
        int digit = n % 10;
        sum += (int)pow(digit, digits);
        n /= 10;
    }
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

}