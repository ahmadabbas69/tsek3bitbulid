#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

void vectorOperations() {
    // Creating a vector of integers
    vector<int> vec;

    // Adding elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Accessing elements using index
    cout << "Vector elements: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Using iterator to access elements
    cout << "Vector elements using iterator: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Removing the last element
    vec.pop_back();
    cout << "Vector after pop_back: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void mapOperations() {
    // Creating a map with string keys and integer values
    map<string, int> ageMap;

    // Adding key-value pairs to the map
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;

    // Accessing elements using key
    cout << "Alice's age: " << ageMap["Alice"] << endl;
    cout << "Bob's age: " << ageMap["Bob"] << endl;

    // Iterating over the map
    cout << "All ages: " << endl;
    for (map<string, int>::iterator it = ageMap.begin(); it != ageMap.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    // Removing an element by key
    ageMap.erase("Bob");
    cout << "Map after removing Bob: " << endl;
    for (map<string, int>::iterator it = ageMap.begin(); it != ageMap.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
}

int main() {
    cout << "Vector Operations:" << endl;
    vectorOperations();

    cout << "\nMap Operations:" << endl;
    mapOperations();

    return 0;
}

