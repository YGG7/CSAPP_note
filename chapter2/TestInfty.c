//
// Created by Aurora on 2021/1/3.
//
#include <float.h>

#define POS_INFINITY 1e400
#define NEG_INFINITY (-POS_INFINITY)
#define NEG_ZERO (1/NEG_INFINITY)

void printDoubleX(double f);

void testInfty() {
    double pos_infty = POS_INFINITY;
    double neg_infty = NEG_INFINITY;
    double neg_zero = NEG_ZERO;
    double pos_max = DBL_MAX;
    double pos_max_1 = DBL_MAX + 1; // the result is rounded to DBL_MAX, no overflow
//    the exponent field of DBL_MAX = 111...10, multiplying DBL_MAX by 2.0 will cause overflow
    double pos_infty_over = DBL_MAX * 2.0;
    printDoubleX(pos_infty);
    printDoubleX(neg_infty);
    printDoubleX(neg_zero);
    printDoubleX(pos_max);
    printDoubleX(0.0 + 1e-309); // a denormalized value
    printf("test over\n");
}

void printDoubleX(double f) {
    unsigned char *bytes = (unsigned char*) &f;
    for (unsigned i = 0; i< sizeof(double); i++) {
        printf("%02x ", bytes[i]);
    }
    printf("\n");
}