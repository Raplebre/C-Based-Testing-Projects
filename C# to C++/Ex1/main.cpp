//I would have started with "Hello World", but it was already done when I launched Code::Blocks.

#include <iostream>

using namespace std; // This is a simple average fuel consumption formula

int main()
{ // Following British English grammar
    cout << "What was the total distance travelled by the vehicle in kilometres?" << endl;
    float km = 0;
    cin >> km;
    if (km <= 0)
    {
        cout << "No distance travelled.";
    }
    else
    {
        cout << "How many litres were consumed? " << endl;
        float lt = 0;
        cin >> lt;
        if (lt <= 0)
        {
            cout << "Invalid amount.";
        }
        else
        {
            cout << "Average fuel consumption: " << (km/lt) << endl;
        }
    }

    return 0;
}
