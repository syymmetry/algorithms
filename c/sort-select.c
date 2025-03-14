#include <stdio.h>

void selection_sort(int array[], int N)
{
    for (int i = 0; i < N; i++) {
        int cur = array[i];
        int ind_el = i;
        
        for (int j = i + 1; j < N; j++) {
            if (cur > array[j]) {
                cur = array[j];
                ind_el = j;
            }
        }

        if (ind_el != i) {
            int t = array[i];
            array[i] = array[ind_el];
            array[ind_el] = t;
        }
    }
}

int main()
{
    int a[] = {-3, 27, 14, -10, 295, 31, 32, 42};
    int N = sizeof(a) / sizeof(a[0]);

    selection_sort(a, N);

    printf("Отсортированный массив:\n");
    for (int i = 0; i < N; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}