//
// Created by Aurora on 2021/1/13.
//

void testContinue() {
    for (int i=0; i<10; i++) {
        if (i==3||i==6) {
            continue; // program will still execute update expression
        }
        printf("%d\n", i);
    }
}