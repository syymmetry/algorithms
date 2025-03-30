#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void bubblesort() {
    const int SIZE = 20;
    vector<int> array(SIZE);

    for (int n = 0; n < SIZE; n++) {
        while (true) {
            cout << "Введите " << n + 1 << "-е число в массиве: ";
            if (cin >> array[n]) {
                break;
            } else {
                cout << "Ошибка! Введите целое число.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

 
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) { 
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    cout << "\nОтсортированный массив:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    bubblesort();
    return 0;
}