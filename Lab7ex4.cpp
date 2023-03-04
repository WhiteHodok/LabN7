#include <iostream>
using namespace std;

int sum(int n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + sum(n / 10); 
}

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Sum of " << n << " is " << sum(n) << endl;
    return 0;
}

// Типикл задача из ЕГЭ , по-моему даже из первой части, так что интерпретируем код из змеи на цпп