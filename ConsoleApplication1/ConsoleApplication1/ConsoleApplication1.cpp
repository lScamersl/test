#include <iostream>

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    double num1, num2;
    char operation;
    std::cout << "== Простой Калькулятор ==" << std::endl;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите оператор (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    double result;
        switch (operation) {
        case'+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            }
            else {
                std::cout << "Ошибка: Деление на ноль невозможно!" << std::endl;
                return 1; // Завершаем программу с ошибкой
            }
            break;
        default:
            std::cout << "Ошибка: Неверный оператор!" << std::endl;
            return 1;
        }

    // Вывод результата
    std::cout << "Результат: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;

    return 0;
}