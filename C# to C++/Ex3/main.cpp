#include <iostream>
#include <string>
using namespace std;

int main() // I actually skipped a lot of exercises between this one and the last as they were all variations of the same ones.
{ // Make a program that asks the user's name, address (name of location will do) and phone number and shows them all in a single message
    cout << "Insert your name:" << endl;
    string name ="";
    getline (cin, name);
    cout << "Insert your address:" << endl;
    string address="";
    getline (cin, address);
    cout << "Insert your phone number:" <<endl;
    long phone = 0;
    cin >> phone;
    cout << "Your name is " << name << ", you live in " << address << " and your phone number is " << phone;
    return 0;
}
