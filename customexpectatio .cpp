#include <iostream>
#include <exception>
using namespace std;

// Custom exception class
class MyException : public exception {
public:
    // Constructor with a message parameter
    MyException(const char* message) : msg_(message) {}

    // Overriding the what() method to return the exception message
    virtual const char* what() const throw() {
        return msg_;
    }

private:
    const char* msg_;
};

// Function that throws a custom exception
void checkNumber(int number) {
    if (number < 0) {
        throw MyException("Negative number exception");
    } else if (number == 0) {
        throw MyException("Zero exception");
    } else {
        cout << "Number is positive: " << number << endl;
    }
}

int main() {
    try {
        int number;
        cout << "Enter a number: ";
        cin >> number;

        // Call the function that may throw an exception
        checkNumber(number);
    }
    catch (MyException& e) {
        // Catch the custom exception and display the error message
        cout << "Caught an exception: " << e.what() << endl;
    }
    catch (exception& e) {
        // Catch any other standard exceptions
        cout << "Caught an exception: " << e.what() << endl;
    }

    return 0;
}

