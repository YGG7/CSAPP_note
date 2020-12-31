//
// Created by Aurora on 2020/12/30.
//

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void testInplaceSwap() {
    int a = 10, b = 5, c = 7;
    inplace_swap(&a, &b);
    inplace_swap(&c, &c);
    printf("swapped a: %d\n", a);
    printf("swapped b: %d\n", b);
    printf("swapped c: %d\n", c);
}