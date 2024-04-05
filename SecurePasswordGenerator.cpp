#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random password
string generatePassword(int length) {
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}|[]\\:;\"'<>,.?/";
    string password = "";
    
    srand(time(0)); // Seed the random number generator
    
    for (int i = 0; i < length; ++i) {
        int index = rand() % characters.length();
        password += characters[index];
    }
    
    return password;
}

int main() {
    int length;
    
    // Get password length from user
    cout << "Enter the length of the password (between 4 and 20 characters): ";
    cin >> length;
    
    // Validate password length
    if (length < 4 || length > 20) {
        cout << "Invalid password length! Please enter a length between 4 and 20 characters." << endl;
        return 1;
    }
    
    // Generate and display the password
    string password = generatePassword(length);
    cout << "Generated Password: " << password << endl;
    
    return 0;
}
