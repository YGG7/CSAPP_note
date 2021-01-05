//
// Created by Aurora on 2021/1/4.
//

void testCharToUnsigned() {
    char c = -1;
    unsigned int i = c; // let printf interpret i as an unsigned integer
    printf("%u\n", i);
}
