#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

// Структура для зберігання даних про працівника
struct Employee {
    string name;
    string surname;
    double salary;
    double tax;
};

int main() {
    // Відкриваємо файл для зчитування даних про працівників
    ifstream infile("./employees.txt");

    // Змінні для зберігання даних про працівників та для підрахунку загальної суми зароблених коштів та максимального податку
    Employee employee;
    double totalSalary = 0;
    double maxTax = 0;
    string maxTaxName;

    // Зчитуємо дані про працівників з файлу та обробляємо їх
    string line;
    while (getline(infile, line)) {
        stringstream ss(line);
        ss >> employee.name >> employee.surname >> employee.salary >> employee.tax;

        // Додаємо зарплату до загальної суми зароблених коштів
        totalSalary += employee.salary;

        // Якщо податок працівника більший за максимальний податок, оновлюємо значення максимального податку та ім'я працівника з максимальним податком
        if (employee.tax > maxTax) {
            maxTax = employee.tax;
            maxTaxName = employee.name + " " + employee.surname;
        }
    }

    // Закриваємо файл
    infile.close();

    // Виводимо загальну суму зароблених коштів та ім'я працівника з максимальним податком
    printf("Total salary: %.2f\n", totalSalary);
    printf("Employee with max tax: %s\n", maxTaxName.c_str());
    printf("Max tax: %.2f\n", maxTax);

    return 0;
}
