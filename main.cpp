// dz na 01.04.24
#include<iostream>
using namespace std;

int main(){
    // №2 из кл. работы
    int a;
    cout << "Введите возраст: " << endl;
    cin >> a;
    if (a >= 25 and a <= 40)
    cout << "Подходит" << endl;
    else
    cout << "Не подходит" << endl;
    return 0;

    // №3 из кл. работы
    int b;
    cout << "Введите число: " << endl;
    cin >> b;
    if (b > 9 and b % 7 == 0)
    cout << "Да" << endl;
    else
    cout << "Нет" << endl;
    return 0;

    // №1 из дз
    int c;
    cout << "Введите день недели: ";
    cin >> c;
    if (c <= 0 || c >= 8){
        cout << "Указан неверный день недели" << endl;
    }
    if (c == 1 || c == 4){
        cout << "Самолёт летает в этот день" << endl;
    }
    if (c == 2 || c == 3 || c == 5 || c == 6 || c == 7){
        cout << "Самолёт не летает в этот день" << endl;
    }
    return 0;

    // №2 из дз
    int d;
    cout << "Введите номер месяца: ";
    cin >> d;
    if (d <= 0 || d >= 13){
        cout << "Указан неверный месяц" << endl;
    }
    if (d == 12 || d == 1 || d == 2){
        cout << "Вы указали месяц зимы" << endl;
    }
    if (d == 3 || d == 4 || d == 5){
        cout << "Вы указали месяц весны" << endl;
    }
    if (d == 6 || d == 7 || d == 8){
        cout << "Вы указали месяц лета" << endl;
    }
    if (d == 9 || d == 10 || d == 11){
        cout << "Вы указали месяц осени" << endl;
    }
    return 0;
}