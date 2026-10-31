#include <stdio.h>
int count = 0;
void reverse(int n) {
    int rev = 0, remainder;
    count++;
    while (n != 0) {
        count++;
        remainder = n % 10;
        count++;
        rev = rev * 10 + remainder;
        count++;
        n /= 10;
        count++;
    }
    count++;
    // print(rev);
    count++;
}
int main() {
    int n;
    scanf("%d", &n);
    reverse(n);
    printf("%d", count);
    return 0;
}
