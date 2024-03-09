// Dz na 11.03

// №1
# include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Введите время в секундах: ";
    cin >> a;
    b = a / 60;
    c = a % 60;
    cout << b << " мин. " << c << " с." << endl;
    return 0;
}  

// №2
# include<iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cout << "Введите время в секундах: ";
    cin >> a;
    b = a / 3600;
    c = (a - (b*3600))/60;
    d = a - (b * 3600 + c * 60);
    cout << b << " ч. " << c << " мин. " << d << " с. " << endl ;
    return 0;
}

// №3
# include<iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cout << "Введите номер урока: ";
    cin >> a;
    d = (8*60+30) + (a * 45 + (a-1) * 10);
    b = d / 60;
    c = d - (b * 60);
    cout << b << "-" << c << endl;
}