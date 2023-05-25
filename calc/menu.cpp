#include <iostream>
#include "array_utils.h"
#include "math_utils.h"
#include "sorting_utils.h"
using namespace std;



void menu()
{
    setlocale(LC_ALL, "");
    int choice;
    int a, b;
    int arr[100];
    int size;


    cout << "\x1b[32m ::::::::      :::     :::        ::::::::  :::    ::: :::            ::: ::::::::::: ::::::::  :::::::::  \n";
    cout << ":+:    :+:   :+: :+:   :+:       :+:    :+: :+:    :+: :+:          :+: :+:   :+:    :+:    :+: :+:    :+: \n";
    cout << "+:+         +:+   +:+  +:+       +:+        +:+    +:+ +:+         +:+   +:+  +:+    +:+    +:+ +:+    +:+ \n";
    cout << "+#+        +#++:++#++: +#+       +#+        +#+    +:+ +#+        +#++:++#++: +#+    +#+    +:+ +#++:++#:  \n";
    cout << "+#+        +#+     +#+ +#+       +#+        +#+    +#+ +#+        +#+     +#+ +#+    +#+    +#+ +#+    +#+ \n";
    cout << "#+#    #+# #+#     #+# #+#       #+#    #+# #+#    #+# #+#        #+#     #+# #+#    #+#    #+# #+#    #+# \n";
    cout << " ########  ###     ### ########## ########   ########  ########## ###     ### ###     ########  ###    ### \n\033[0m";

    cout << "\x1b[34m\n\n\t\t\t\t\t\tМеню:" << endl;
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cout << "3. Умножение" << endl;
    cout << "4. Нахождение максимума в массиве" << endl;
    cout << "5. Нахождение минимума в массиве" << endl;
    cout << "6. Расчет среднего значения элементов массива" << endl;
    cout << "7. Сортировка массива методом пузырька" << endl;
    cout << "8. Сортировка массива методом выбора" << endl;
    cout << "9. Сортировка массива методом вставки" << endl;
    cout << "0. Выход\n\033[0m" << endl;

    while (true) {
        cout << "\x1b[32mВведите номер операции (0-9): \n\033[0m";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\x1b[32mВведите два числа: ";
            cin >> a >> b;
            cout << "Сумма: " << sum(a, b) << endl;
            break;
        case 2:
            cout << "\x1b[32mВведите два числа: ";
            cin >> a >> b;
            cout << "\x1b[33mРазность: " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "\x1b[32mВведите два числа: ";
            cin >> a >> b;
            cout << "\x1b[33mПроизведение: " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "\x1b[32mВведите размер массива: ";
            cin >> size;
            cout << "\x1b[32mВведите элементы массива: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "\x1b[33mНаибольшее значение: " << findMax(arr, size) << endl;
            break;
        case 5:
            cout << "\x1b[32mВведите размер массива: ";
            cin >> size;
            cout << "\x1b[32mВведите элементы массива: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "\x1b[33mНаименьшее значение: " << findMin(arr, size) << endl;
            break;
        case 6:
            cout << "\x1b[32mВведите размер массива: ";
            cin >> size;
            cout << "\x1b[32mВведите элементы массива: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "\x1b[33mСреднее значение: " << calculateAverage(arr, size) << endl;
            break;
        case 7:
            cout << "\x1b[32mВведите размер массива: ";
            cin >> size;
            cout << "\x1b[32mВведите элементы массива: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            bubbleSort(arr, size);
            cout << "\x1b[33mОтсортированный массив: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 8:
            cout << "\x1b[32mВведите размер массива: ";
            cin >> size;
            cout << "\x1b[32mВведите элементы массива: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            selectionSort(arr, size);
            cout << "\x1b[33mОтсортированный массив: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 9:
            cout << "\x1b[32mВведите размер массива: ";
            cin >> size;
            cout << "\x1b[32mВведите элементы массива: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            insertionSort(arr, size);
            cout << "\x1b[33mОтсортированный массив: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 0:
            cout << "\x1b[33mПрограмма завершена." << endl;
            return;
        default:
            cout << "\x1b[31mНекорректный ввод. Попробуйте еще раз." << endl;
        }
    }
}