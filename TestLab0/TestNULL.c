//
// Created by Aurora on 2021/2/3.
//

typedef struct m_queue{
    int val;
} m_queue;

void testNULL() {
    m_queue *queue = NULL;
//    int val = queue->val;
    int val2 = (int)NULL;
    m_queue *queue1 = malloc(sizeof(m_queue));
    if (queue1) printf("not null");
    printf("%d\n", val2);
}
