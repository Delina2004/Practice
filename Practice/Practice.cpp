#include <iostream>
using namespace std;


int main()
{
    int n, int sum = 0;
    cout << "Enter your num";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
     }
    cout << "Addition" << n << sum;

    return 0;
}

