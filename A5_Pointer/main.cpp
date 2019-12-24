#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int tmp1 = *a + *b;
    int tmp2 = 0;
    if(*a > *b)
        tmp2 = *a - *b;
    else
        tmp2 = *b - *a;
    *a = tmp1;
    *b = tmp2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
