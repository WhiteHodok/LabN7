#include <iostream>
using namespace std;
// Дефинируем нашу функцию , ищущую НОД
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b); // с днём рекурсии!
}
// Модифицируем её и переделываем в НОК
int abc(int a, int b) {
    return (a * b) / gcd(a, b);
}
// Реализуем это всё на практике :)
int main() {
    int a, b;
    cout << "Enter two positive numbers with space beetwen: ";
    cin >> a >> b;
    cout << "Naim obshee kratnoe of " << a << " and " << b << " is " << abc(a, b) << endl;
    return 0;
}

