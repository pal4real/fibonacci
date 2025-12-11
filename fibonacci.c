#include <stdio.h>

int main() {
    int input = 0;
    scanf("%d", &input);

    int temp1 = 0;
    int temp2 = 1;

    for(int i = 0; i < input; i++) {
        if(i == 0) {
            printf("%d ", temp1);
        }
        else if(i == 1) {
            printf("%d ", temp2);
        }
        else if(i > 1) {
            int n = temp1 + temp2;
            printf("%d ", n);
            temp1 = temp2;
            temp2 = n;
        }
    }
    
    return 0;
}