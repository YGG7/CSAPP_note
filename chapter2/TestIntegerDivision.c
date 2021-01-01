//
// Created by Aurora on 2021/1/1.
//

int div16(int x) {
    // if x<0, bias=15, else bias=0
    int bias = (x >> 31) & 0xF;
    return (x + bias) >> 4;
}

void testIntegerDivision() {
    int i = -1 / 2;
    int j = 10 / 35;
    printf("-1/2 = %d\n", i);
    printf("10/35 = %d\n", j);
}