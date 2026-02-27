#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Задання констант
    const double a = -1;
    const double b = -4;
    const double c = 6.3;

    cout << "ОБЧИСЛЕННЯ ЗНАЧЕННЯ ФУНКЦІЇ" << endl;
    cout << "============================" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl << endl;

    // Перевірка коректності вхідних даних
    double discriminant = pov(b,2) + b*a;
    if (discriminant == 0) {
        cout << "ПОМИЛКА: Знаменник не може дорівнювати 0 (ділення на нуль)!" << endl;
        return 1;
    }

    double denominator = a / (b-a);

    if (denominator < 0) {
        cout << "ПОМИЛКА: Вираз під коренем від'ємний: " << discriminant << endl;
        return 1;
    }

    // Обчислення функції
    double result = sqrt(denominator) / discriminant - abs(b+2);

    // Виведення результату
    cout << "Формула: f = sqrt(a/(b-a)) / (pov(b,2)+b*a) - |b+2|" << endl;
    cout << "Результат: f = " << result << endl;
    cout << "Результат (з точністю до 6 знаків): f = "
        << fixed << setprecision(6) << result << endl;

    return 0;
}