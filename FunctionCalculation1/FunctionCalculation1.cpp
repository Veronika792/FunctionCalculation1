#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Задання констант
    const double a = 5.0;
    const double b = 9.0;
    const double c = -2.5;

    cout << "ОБЧИСЛЕННЯ ЗНАЧЕННЯ ФУНКЦІЇ" << endl;
    cout << "============================" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl << endl;

    // Перевірка коректності вхідних даних
    if (a == 0) {
        cout << "ПОМИЛКА: a не може дорівнювати 0 (ділення на нуль)!" << endl;
        return 1;
    }

    double discriminant = b * b + 4 * a * c;

    if (discriminant < 0) {
        cout << "ПОМИЛКА: Вираз під коренем від'ємний: " << discriminant << endl;
        return 1;
    }

    // Обчислення функції
    double result = (-b - sqrt(discriminant)) / (2 * a) + abs(c);

    // Виведення результату
    cout << "Формула: f = (-b - sqrt(b² + 4ac)) / (2a) + |c|" << endl;
    cout << "Результат: f = " << result << endl;
    cout << "Результат (з точністю до 6 знаків): f = "
        << fixed << setprecision(6) << result << endl;

    return 0;
}