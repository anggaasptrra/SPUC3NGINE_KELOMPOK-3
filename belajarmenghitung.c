#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, r = 0;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++){
        r += n;
        printf("%d x %d = %d\n", n, i, r);
    }
    return 0;
}