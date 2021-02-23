//
// Created by Aurora on 2021/2/23.
//

void testStr() {
    char *s1 = "hello";
    char s2[] = "hello";
    char s3[5] = {'h', 'e', 'l', 'l', 'o'};
    char s4[5] = "hello";
    char s5[6] = "hello";
    printf("s1 is identical to s2: %s\n", strcmp(s1, s2) == 0 ? "true" : "false");
    printf("s1 is identical to s3: %s\n", strcmp(s1, s3) == 0 ? "true" : "false");
    printf("s1 is identical to s4: %s\n", strcmp(s1, s4) == 0 ? "true" : "false");
    printf("s1 is identical to s5: %s\n", strcmp(s1, s5) == 0 ? "true" : "false");
    printf("sizeof(s1): %d\n", sizeof(s1)); // the size of a pointer
    printf("sizeof(s2): %d\n", sizeof(s2));
    printf("sizeof(s4): %d\n", sizeof(s4));
    printf("strlen(s1): %d\n", strlen(s1));
    printf("strlen(s2): %d\n", strlen(s2));
    printf("strlen(s4): %d\n", strlen(s4));
}