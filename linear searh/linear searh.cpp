// binary search iterative.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the size of array: ";
    int n;
    cin >> n;
    int a[20];
    cout << "\nNow enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low, mid, high;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    cout << "Enter the key: ";
    int key;
    cin >> key;
    while (low <= high)
    {
        if (key == a[mid])
        {
            cout << "Element found.";
            return 0;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << "Not found.";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
