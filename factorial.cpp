#include <iostream>
using namespace std;

double fact(int n)
{

   double f = 1;
    for (int i = 1; i <= n; i++) {
        f*= i;
    }
    return  f;
}

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    

    cout << "The factorial of " << num << " is " << fact(num) << endl;

    return 0;
}