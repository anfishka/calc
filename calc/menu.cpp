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

    cout << "\x1b[34m\n\n\t\t\t\t\t\t����:" << endl;
    cout << "1. ��������" << endl;
    cout << "2. ���������" << endl;
    cout << "3. ���������" << endl;
    cout << "4. ���������� ��������� � �������" << endl;
    cout << "5. ���������� �������� � �������" << endl;
    cout << "6. ������ �������� �������� ��������� �������" << endl;
    cout << "7. ���������� ������� ������� ��������" << endl;
    cout << "8. ���������� ������� ������� ������" << endl;
    cout << "9. ���������� ������� ������� �������" << endl;
    cout << "0. �����\n\033[0m" << endl;

    while (true) {
        cout << "\x1b[32m������� ����� �������� (0-9): \n\033[0m";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\x1b[32m������� ��� �����: ";
            cin >> a >> b;
            cout << "�����: " << sum(a, b) << endl;
            break;
        case 2:
            cout << "\x1b[32m������� ��� �����: ";
            cin >> a >> b;
            cout << "\x1b[33m��������: " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "\x1b[32m������� ��� �����: ";
            cin >> a >> b;
            cout << "\x1b[33m������������: " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "\x1b[32m������� ������ �������: ";
            cin >> size;
            cout << "\x1b[32m������� �������� �������: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "\x1b[33m���������� ��������: " << findMax(arr, size) << endl;
            break;
        case 5:
            cout << "\x1b[32m������� ������ �������: ";
            cin >> size;
            cout << "\x1b[32m������� �������� �������: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "\x1b[33m���������� ��������: " << findMin(arr, size) << endl;
            break;
        case 6:
            cout << "\x1b[32m������� ������ �������: ";
            cin >> size;
            cout << "\x1b[32m������� �������� �������: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "\x1b[33m������� ��������: " << calculateAverage(arr, size) << endl;
            break;
        case 7:
            cout << "\x1b[32m������� ������ �������: ";
            cin >> size;
            cout << "\x1b[32m������� �������� �������: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            bubbleSort(arr, size);
            cout << "\x1b[33m��������������� ������: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 8:
            cout << "\x1b[32m������� ������ �������: ";
            cin >> size;
            cout << "\x1b[32m������� �������� �������: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            selectionSort(arr, size);
            cout << "\x1b[33m��������������� ������: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 9:
            cout << "\x1b[32m������� ������ �������: ";
            cin >> size;
            cout << "\x1b[32m������� �������� �������: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            insertionSort(arr, size);
            cout << "\x1b[33m��������������� ������: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 0:
            cout << "\x1b[33m��������� ���������." << endl;
            return;
        default:
            cout << "\x1b[31m������������ ����. ���������� ��� ���." << endl;
        }
    }
}