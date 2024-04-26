// dz na 27.04.24
#include<iostream>
using namespace std;

int main(){
    // 1
    int a;
    cout << "Введите число: ";
    cin >> a;
    for (int i = 0; i < 10; i++){
        cout << a << "*" << i << "=" << a*i << endl;
    }
    return 0;

    // 2
    int b;
    int i = 0;
    cout << "Введите число: ";
    cin >> b;
    while (b > 0){
        b = b/10;
        i++;
    }
    cout << i << endl;
    return 0;

    // 3
    int x, y;
    int j = 0;
    cout << "Введите числa: ";
    cin >> x >> y;
    do {
        x -= y;
        j++;
    } while (x - y >= 0);
    cout << j << endl;
    return 0;
}