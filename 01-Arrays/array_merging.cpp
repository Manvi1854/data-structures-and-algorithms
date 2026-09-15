#include <iostream>
using namespace std;

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2;

    cout << "Enter number of elements in first array: ";
    cin >> n1;

    cout << "Enter elements of first array:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter number of elements in second array: ";
    cin >> n2;

    cout << "Enter elements of second array:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    cout << "Merged array:" << endl;

    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }

    cout << endl;

    return 0;
}