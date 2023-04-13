#include <iostream>
#include <lib1>
#include <lib2>
using namespace std;

int main()
{
    const int N = 10; // розмір масиву
    double arr[N];
    double prod = 1.0; // добуток невід'ємних елементів
    double sum = 0.0; // сума від'ємних елементів до максимального
    int max_index = 0; // індекс максимального елемента

    // заповнення масиву випадковими дійсними числами
    for (int i = 0; i < N; i++) {
        arr[i] = (rand() % 101 - 50) / 10.0;
        cout << arr[i] << " ";
    }
    cout << endl;

    // обчислення добутку невід'ємних елементів та суми від'ємних елементів до максимального
    for (int i = 0; i < N; i++) {
        if (arr[i] >= 0.0) {
            prod *= arr[i];
        } else if (i < max_index) {
            sum += arr[i];
        } else if (arr[i] > arr[max_index]) {
            sum = 0.0;
            max_index = i;
        } else {
            sum += arr[i];
        }
    }
    cout << "Добуток невід'ємних елементів: " << prod << endl;
    cout << "Сума від'ємних елементів до максимального: " << sum << endl;

    // зміна порядку елементів на зворотний
    for (int i = 0; i < N / 2; i++) {
        double temp = arr[i];
        arr[i] = arr[N - i - 1];
        arr[N - i - 1] = temp;
    }

    // виведення масиву у зворотньому порядку
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

