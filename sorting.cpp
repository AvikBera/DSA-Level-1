#include <iostream>
using namespace std;

int main() {

    int arr[5] = {60, 20, 40, 40, 50};

    bool sorted = true;

    for (int i = 0; i < 4; i++) {

        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "Array is sorted";
    }
    else {
        cout << "Array is not sorted";
    }

    return 0;
}
