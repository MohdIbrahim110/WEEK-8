#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, substring;
    size_t insertPosition, deletePosition, deleteLength;

    // Input original string
    cout << "Enter the original string: ";
    getline(cin, str);

    // Input substring to insert
    cout << "Enter the substring to insert: ";
    getline(cin, substring);

    // Input position to insert the substring
    cout << "Enter the position to insert the substring: ";
    cin >> insertPosition;

    // Insert the substring
    if (insertPosition > str.size()) {
        insertPosition = str.size(); // Adjust to end if out of bounds
    }
    str = str.substr(0, insertPosition) + substring + str.substr(insertPosition);
    cout << "String after insertion: " << str << endl;

    // Input position and length to delete
    cout << "Enter the position to delete from: ";
    cin >> deletePosition;
    cout << "Enter the length of the substring to delete: ";
    cin >> deleteLength;

    // Delete the substring
    if (deletePosition < str.size()) {
        size_t end = min(deletePosition + deleteLength, str.size());
        str = str.substr(0, deletePosition) + str.substr(end);
    } else {
        cout << "Position is out of bounds. Nothing to delete." << endl;
    }
    
    cout << "String after deletion: " << str << endl;

    return 0;
}

