// dz na 20.05.24

#include <iostream>
using namespace std;

int main()
{
    int n, z;
    cout << "Введите числа: ";
    cin >> n >> z;
    int a = 0;
    while (n > 0){
        if (n % 10 > z){
            a += n%10;
        }
        n = n/10;
    }
    cout << a << endl;
    return 0;
}
