//
// Created by Aurora on 2021/2/5.
//

int testMallocFailure(char *s1, char *s2, char *s3) {
    s1 = malloc(sizeof(char) * 10);
    s2 = malloc(sizeof(char) * 100);
    s3 = malloc(sizeof(char) * 1000);
    // if any malloc failures occur, free allocated space
    // malloc(NULL) does nothing
    if (!s1 || !s2 || !s3) {
        free(s1);
        free(s2);
        free(s3);
        return 0;
    }
    return 1;
}