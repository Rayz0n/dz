// Dz na 11.03

// №1
# include<iostream>
# include<cmath>
using namespace std;

int main(){
    int a, b, c;
    cout << "Введите число и степень: ";
    cin >> a >> b;
    c = pow(a, b);
    cout << c << endl;
    return 0;
}  

// №2
# include<iostream>
# include<cmath>
using namespace std;

int main(){
    int a, b;
    cout << "Введите отрицательное число: ";
    cin >> a;
    b = abs(a) + 1;
    cout << b << endl ;
    return 0;
}

// №3
# include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Введите объём фотографии в мегабайтах: ";
    cin >> a;
    b = (1024*2)/a;
    cout << "Такая фотография поместится " << b << " раз(а)" << endl;
}