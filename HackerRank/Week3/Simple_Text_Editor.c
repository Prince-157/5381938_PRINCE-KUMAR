#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000000

char text[MAX];
char *history[MAX];
int histTop = -1;
int len = 0;

void save_state() {
    history[++histTop] = strdup(text);
}

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int type;
        scanf("%d", &type);
        if (type == 1) {
            char w[MAX];
            scanf("%s", w);
            save_state();
            strcat(text, w);
            len += strlen(w);
        } else if (type == 2) {
            int k;
            scanf("%d", &k);
            save_state();
            len -= k;
            text[len] = '\0';
        } else if (type == 3) {
            int k;
            scanf("%d", &k);
            printf("%c\n", text[k-1]);
        } else if (type == 4) {
            strcpy(text, history[histTop]);
            free(history[histTop--]);
            len = strlen(text);
        }
    }
    return 0;
}
