#include <iostream>
#include <string>
#include <ctime>

using namespace std;

string generate_password(int length) {
    const string chars =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "!@#$%^&*";

    string password;
    for (int i = 0; i < length; i++) {
        password += chars[rand() % chars.size()];
    }
    return password;
}

int main() {

    srand(time(0));

    int length;
    cout << "Enter password length: ";
    cin >> length;

    if (length < 8)
        cout << "Your password must have at least 8 symbols" << endl;
    
    string password = generate_password(length);
    cout << "Your password: " << password << endl;

    return 0;
}