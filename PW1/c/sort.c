#include <stdio.h>
int n;
int input[1000];
int i = 0;

void sort(int num, int numbers[]);

int main() {
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    sort(n, input);

    for(i = 0; i < n; i++) {
        printf("%d ", input[i]);
    }
}


void sort(int num, int numbers[]) {
    int i = 0, j = 0, temp = 0;
    for (i = num - 1; i >= 0; i--) {
        for (j = 0; j < i; j++) {
            if(numbers[j] > numbers[j + 1]) {
                temp = numbers[j+1];
                numbers[j+1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}