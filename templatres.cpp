#include<iostream>
using namespace std;

template <class T>
T calculate_max(T a, T b) {
    if (a > b) {
        cout << "a is the largest number\n";
        return a;
    } else if (a == b) {
        cout << "No one is better\n";
        return a; // or return b; since they are equal
    } else {
        cout << "b is the largest number\n";
        return b;
    }
}

int main() {
    int choice;
    cout << "Choose data type (1 for int, 2 for float): ";
    cin >> choice;

    if (choice == 1) {
        int a, b;
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
        int max_value = calculate_max(a, b);
        cout << "The max value is " << max_value << endl;
    } else if (choice == 2) {
        float a, b;
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
        float max_value = calculate_max(a, b);
        cout << "The max value is " << max_value << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

