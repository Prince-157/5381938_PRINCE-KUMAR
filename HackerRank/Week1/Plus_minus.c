#include <stdio.h>
int main () {
    int i, n;
    scanf("%d", &n);
    float arr[n], positive = 0, negative = 0, zero = 0;
    for (int i=0; i<n;i++){
        scanf("%f", &arr[i]);
        if (arr[i]>0) {
            positive++;
        }
        else if (arr[i]<0) {
        negative++;    
        }
        else {
            zero++;
        }
    }  
    printf("%f\n%f\n%f\n", positive/n, negative/n, zero/n);
    return 0;
}