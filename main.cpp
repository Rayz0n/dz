// dz na 13.05.24
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    // №1
    int operation = 0;
    int op1 = 0;
    int op2 = 0;
    int result = 0;
    cout << "Введите первый оператор: " << endl;
    cin >> op1;
    cout << "Введите второй оператор: " << endl;
    cin >> op2;
    cout << "Выберите действие 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 6 - получение корня" << endl;
    cin >> operation;
    switch(operation){
        case 1:
        {
            result = op1 + op2;
        }
        break;
        case 2:
        {
            result = op1 - op2;
        }
        break;
        case 3:
        {
            result = op1 * op2;
        }
        break;
        case 4:
        {
            result = op1 / op2;
        }
        break;
        case 5:
        {
            result = pow(op1, op2);
        }
        break;
        case 6:
        {
            result = sqrt(op1);
        }
        break;
        default:
        {
            cout << "Номер действия неверный!" << endl;
            return 0;
        }
    }
    cout << "Ваш результат = " << result << endl;
    return 0;
    
    // №2
    int a, b;
    cout << "Введите a и b:" << endl;
    cin >> a >> b;
    if (a == 0)
    {
        if(b==0){
            cout << "INF";
        }
        else{ 
            cout << "NO";
        }
    }else
    {
        if (b % a != 0){
            cout << "NO";
        }
        else{
            cout << -(b) / a;
        }
    } 
    return 0;
    
    // №5
    int c, d;
    cout << "Введите 2 числа: " << endl;
    cin >> c >> d;
    if (c > d){
        while(c>=d){
            cout << d << " ";
            d++;
        }
    }
    else{
        while(d>=c){
            cout << c << " ";
            c++;
        }
    }
    return 0;
}