#include <iostream>
using namespace std;
// Случай отличается от 1 , от войда придётся отказаться , т.к присутствует случай , когда пользователь вводит 1
int sum(double n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1); // с днём рекурсии
}

int main() {
    double n; // Объявляем нашу переменную , как целочисленную , с int я уже проексперементировал , всё хорошо , с даблом результат тот же
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum of first " << n << " numbers is " << sum(n) << endl;
    return 0;
}

