// Dz na 25.03

// №1
# include<iostream>
# include<random>
# include<ctime>
using namespace std;

int main(){
    srand(time(0)); 
    cout << rand() % 99 << endl;
    cout << rand() % 99 << endl;
    cout << rand() % 99 << endl;
    return 0;
}

// №2
# include<iostream>
# include<random>
# include<ctime>
using namespace std;

int main(){
    srand(time(0)); 
    int a = 0;
    a += rand() % (6 - 1 + 1) + 1;
    a += rand() % (6 - 1 + 1) + 1;
    a += rand() % (6 - 1 + 1) + 1;
    a += rand() % (6 - 1 + 1) + 1;
    a += rand() % (6 - 1 + 1) + 1;
    cout << a << endl;
    return 0;
}

// №3
# include<iostream>
# include<random>
# include<cmath>
# include<ctime>
using namespace std;

int main(){
    srand(time(0)); 
    int a, b, c, d;
    a = rand() % (6 - 1 + 1) + 1;
    b = rand() % (6 - 1 + 1) + 1;
    c = rand() % (6 - 1 + 1) + 1;
    cout << "Выпало очков:" << endl << a << " " << b << " " << c << endl;
    d = a * 100 + b * 10 + c;
    cout << "Число: " << d << endl;
    d = pow(d, 2);
    cout << "Его квадрат " << d << endl;
    return 0;
}

// №4
# include<iostream>
# include<random>
# include<ctime>
using namespace std;

int main(){
    srand(time(0)); 
    int a, b, c, d;
    a = rand() % (999 - 100 + 1) + 100;
    cout << "Получено число " << a << endl;
    b = a / 100;
    c = a % 100 / 10;
    d = a % 10 % 10;
    cout << "сотни: " << b << endl << "десятки: " << c << endl << "едницы: " << d << endl;
    return 0;
}