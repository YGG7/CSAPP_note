//
// Created by Aurora on 2020/12/28.
//

void testFloatArithmetic() {
    double i1 = 3.14, i2 = 1e20, i3 = -1e20;
    printf("3.14+(1e20-1e20)=%f\n", i1+(i2+i3));
    printf("(3.14+1e20)-1e20=%f\n", (i1+i2)+i3);
}