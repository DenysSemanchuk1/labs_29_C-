#include <iostream>
using namespace std;

// Рекурсивна функція для обчислення суми чисел в інтервалі [start, end]
int sum(int start, int end) {
// Базовий випадок - якщо start більше end, повертаємо 0
if (start > end) {
cout << "Start should be less than or equal to end" << endl;
return 0;
}
// Рекурсивний випадок - повертаємо суму чисел в інтервалі [start+1, end] та числа start
else {
return sum(start + 1, end) + start;
}
}

int main() {
int start, end;
cout << "Enter start and end of the interval: ";
cin >> start >> end;
int result = sum(start, end);
cout << "Sum of numbers in the interval [" << start << ", " << end << "]: " << result << endl;

return 0;
}