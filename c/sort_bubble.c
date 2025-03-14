#include <stdio.h>

void sort_bubble() {
    int array[20];
    int N = sizeof(array) / sizeof(array[0]); 

    for (int n = 0; n < N; n++) {
        printf("Введите %d-е число в массив: ", n + 1);
        scanf("%d", &array[n]);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) { 
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Отсортированный массив:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    sort_bubble();
    return 0;
}