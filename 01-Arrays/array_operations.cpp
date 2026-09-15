#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== 1D ARRAY OPERATIONS =====\n";
        cout << "1. Traversal\n";
        cout << "2. Insertion\n";
        cout << "3. Deletion\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Array elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;

        case 2:
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;

            if (pos < 1 || pos > n + 1) {
                cout << "Invalid position!\n";
            } else {
                for (int i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;

                cout << "Element inserted successfully!\n";
            }
            break;

        case 3:
            cout << "Enter position to delete: ";
            cin >> pos;

            if (pos < 1 || pos > n) {
                cout << "Invalid position!\n";
            } else {
                for (int i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;

                cout << "Element deleted successfully!\n";
            }
            break;

        case 4:
            cout << "Program ended.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}