//
// Created by Aurora on 2020/12/31.
//
#include <stdint.h>

// "unsigned" is identical to "unsigned int"
int uadd_ok(unsigned x, unsigned y) {
    unsigned s = x + y;
    return s >= x;
}

int tadd_ok(int x, int y) {
    int s = x + y;
    // If at least one of x, y is zero, addition will not overflow
    int pos_overflow = (x > 0) && (y > 0) && (s < 0);
    int neg_overflow = (x < 0) && (y < 0) && (s >= 0);
    return !pos_overflow && !neg_overflow;
}

int tsub_ok(int x, int y) {
    int s = x - y;
    // If y is zero, subtraction will not overflow
    int pos_overflow = (x >= 0) && (y < 0) && (s < 0);
    int neg_overflow = (x < 0) && (y > 0) && (s > 0); // INT32_MIN-INT32_MAX cannot reach 0
    return !pos_overflow && !neg_overflow;
}

int tmult_ok(int x, int y) {
    int p = x * y;
    // will not cause a division by zero
    return !x || !y || (p/x == y);
}

int tmult_ok2(int x, int y) {
    int p32 = x * y;
    int64_t p64 = x * y;
    return (p32 == p64);
}

void testAddok() {
    int b1 = uadd_ok(UINT32_MAX, UINT32_MAX);
    int b2 = uadd_ok(UINT64_MAX, UINT64_MAX);
    int b3 = uadd_ok(0, 1);
    int b4 = uadd_ok(UINT64_MAX, UINT32_MAX);
    int b5 = uadd_ok(UINT64_MAX, 0);

    int b6 = tadd_ok(INT32_MIN, INT32_MIN);
    int b7 = tadd_ok(INT32_MIN, -1);
    int b8 = tadd_ok(0, 1);
    int b9 = tadd_ok(INT32_MAX, INT32_MAX);
    int b10 = tadd_ok(INT32_MAX, 1);
    int size_unsigned = sizeof(unsigned);

    int int32_min = INT32_MIN;
    int int32_min_inverse = -int32_min;
    int int32_max_p1 = INT32_MAX + 1;
    printf("uadd_ok() test over\n");
}