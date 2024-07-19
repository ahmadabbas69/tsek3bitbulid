#include <iostream>
using namespace std;

int main() {
    // Open file for writing
    FILE *ptr = fopen("inter.txt", "w");

    if (ptr == NULL) {
        cout << "Error opening file for writing" << endl;
    } else {
        cout << "File opened for writing" << endl;

        // Write to the file
        fprintf(ptr, "Ahmad\n");
        fprintf(ptr, "Ali\n");
        fprintf(ptr, "Ahsan\n");

        fclose(ptr); // Close the file after writing
    }

    // Open file for reading
    ptr = fopen("inter.txt", "r");

    if (ptr == NULL) {
        cout << "Error opening file for reading" << endl;
    } else {
        cout << "File opened for reading" << endl;

        char buffer[256];
        while (fgets(buffer, sizeof(buffer), ptr) != NULL) {
            cout << buffer; // Print each line read from the file
        }

        fclose(ptr); // Close the file after reading
    }

    return 0;
}

