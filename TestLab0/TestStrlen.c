//
// Created by Aurora on 2021/2/3.
//

void testStrlen() {
    char *s = "hello";
    char s1[] = "hello";
    size_t len = strlen(s); //5
    char *copy = malloc(sizeof(char) * len);
    char *copy2 = malloc(sizeof(char) * len);
    strcpy(copy, s);
    strcpy(copy2, s);
    printf("%d\n", len);
    printf("%d\n", sizeof(s1));
    printf("%s\n", copy);
    if (!strcmp(s, copy)) printf("0");
    if (!strcmp(copy2, copy)) printf("0");
}
