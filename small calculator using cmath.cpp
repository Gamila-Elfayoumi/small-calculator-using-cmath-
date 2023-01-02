#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number to calculate the sine, cosine, tangent and square root of the number :";
    cin >> x;
    float sinx = sin(x);
    float cosx = cos(x);
    float tanx = tan(x);
    float root = sqrt(x);
    cout << "sine value of x =" << x << " : \t \t" << sinx << "\n";
    cout << "cosine value of x =" << x << ":\t \t" << cosx << "\n";
    cout << "tangent value of x = " << x << ":\t \t" << tanx << "\n";
    cout << "root square value of x = " << x << ":\t" << root << "\n";
    system("pause");
}