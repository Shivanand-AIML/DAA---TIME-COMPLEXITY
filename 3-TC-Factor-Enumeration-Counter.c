#include <stdio.h>
int count = 0;
void Factor(int num) {
    for (int i = 1; i <= num; i++) {
        count++;
        if (num % i == 0) {
            // printf("%d", i);
            count++;
        }
        count++;
    }
    count++;
}
int main() {
    int n;
    scanf("%d", &n);
    Factor(n);
    printf("%d", count);
    return 0;
}
