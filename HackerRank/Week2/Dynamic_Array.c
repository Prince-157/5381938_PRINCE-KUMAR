#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;
    int size;
    int capacity;
} Sequence;

void append(Sequence *seq, int value) {
    if (seq->size == seq->capacity) {
        seq->capacity = (seq->capacity == 0) ? 1 : seq->capacity * 2;
        seq->arr = (int *)realloc(seq->arr, seq->capacity * sizeof(int));
    }
    seq->arr[seq->size++] = value;
}

int get(Sequence *seq, int index) {
    return seq->arr[index];
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    Sequence *seqList = (Sequence *)malloc(n * sizeof(Sequence));
    for (int i = 0; i < n; i++) {
        seqList[i].arr = NULL;
        seqList[i].size = 0;
        seqList[i].capacity = 0;
    }

    int last_answer = 0;

    for (int i = 0; i < q; i++) {
        int op, x, y;
        scanf("%d %d %d", &op, &x, &y);

        int idx = (x ^ last_answer) % n;

        if (op == 1) {
            append(&seqList[idx], y);
        } else if (op == 2) {
            int pos = y % seqList[idx].size;
            last_answer = get(&seqList[idx], pos);
            printf("%d\n", last_answer);
        }
    }

    for (int i = 0; i < n; i++) {
        free(seqList[i].arr);
    }
    free(seqList);

    return 0;
}
