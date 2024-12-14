#include "header.h"

int main() 
{
    vector<int> arr = { 12, -7, 104, 81, -5, 3, -2 };
    vector<int> arr1 = { 1, 2, 3, 4 };
    vector<int> arr2 = { 3, 4, 5, 6 };

    // 1. Сумма цифр массива
    cout << "Sum of array digits: " << sumOfDigits(arr) << endl;

    // 2. Среднее арифметическое положительных элементов
    cout << "Arithmetic mean of positive elements: "
        << averageOfPositive(arr) << endl;

    // 3. Максимальный отрицательный элемент
    auto [maxNeg, index] = maxNegativeElement(arr);
    cout << "Maximum negative element: " << maxNeg
        << " at position " << index << endl;

    // 4. Число, чаще всего встречающееся в массиве
    cout << "Most frequent number in the array: "
        << mostFrequentNumber(arr) << endl;

    // 5. Наибольший элемент с нечетными номерами, делящийся на 3
    cout << "Largest element with odd indices divisible by 3: "
        << maxOddIndexedDivisibleBy3(arr) << endl;

    // 6. Поменять наибольший четный элемент с наименьшим нечетным
    swapEvenOdd(arr);
    cout << "Array after swapping: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // 7. Общие и уникальные элементы двух массивов
    auto [intersection, difference] = arrayIntersectionAndDifference(arr1, arr2);
    cout << "Common elements: ";
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Unique elements: ";
    for (int num : difference) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}