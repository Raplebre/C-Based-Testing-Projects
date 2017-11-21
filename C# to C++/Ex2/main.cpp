#include <iostream>

using namespace std;

int main() // Read two integer values and present the difference (subtract) between the biggest and the smallest
{
    int x = 0;
    int y = 0;
    cout << "Insert the value of x" << endl;
    cin >> x;
    cout << "Insert the value of y" << endl;
    cin >> y;
    if (x >= y)
        cout << "Result: " << (x-y);
    else
        cout << "Result: " << (y-x);
    return 0;
}
