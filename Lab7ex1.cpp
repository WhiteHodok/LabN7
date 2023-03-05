#include <iostream>
using namespace std;

// Введём функцию , которая не возвращает ничего (void)
void printNumbers(int n) {
    if (n == 1) {
        cout << n << endl;
        return;
    }
    printNumbers(n - 1); // вот та самая ссылка которая делает функцию рекурсивной
    cout << n << endl;
}

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Out numbers from 1 to " << n << endl;
    printNumbers(n);
    return 0;
}
