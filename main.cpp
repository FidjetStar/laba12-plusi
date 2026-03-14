#include <iostream>
#include "h.h"
#include <string>
#include <fstream>
#include <deque>
#include <vector>
#include <list>
#include <limits>
#include <iomanip>
#include <algorithm>
#ifdef _WIN64
#include <windows.h>
#endif
int main() {
    using namespace std;
    #ifdef _WIN64
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    #endif
    int choice;
    do {
        cout << "\n=== Выберите Задание ===\n";
        cout << "1. STL2Seq7 (дек, вектор, список)\n";
        cout << "2. STL2Seq12 (дек, список)\n";
        cout << "3. STL2Seq24 (два списка)\n";
        cout << "4. STL1Iter15 (файл)\n";
        cout << "0. Выход\n";
        cout << "Выберите: ";
        while (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Неверный ввод! Введите число: ";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice) {
        case 1: {
            deque<int> d;
            vector<int> v;
            list<int> l;
            int method;
            char filename[100];
            // Дек
            cout << "\nЗаполнение дека:\n1. Клавиатура\n2. Файл\n3. Случайно\nВыберите: ";
            while (!(cin >> method) || method < 1 || method > 3) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Неверный ввод! Введите 1, 2 или 3: ";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (method) {
            case 1: inputfromkeyboard_deque(d); break;
            case 2: 
                cout << "Введите имя файла: "; 
                cin.getline(filename, 100);
                inputfromfile_deque(d, filename);
                break;
            case 3: inputfromrandom_deque(d); break;
            }
            // Вектор
            cout << "\nЗаполнение вектора:\n1. Клавиатура\n2. Файл\n3. Случайно\nВыберите: ";
            while (!(cin >> method) || method < 1 || method > 3) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Неверный ввод! Введите 1, 2 или 3: ";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (method) {
            case 1: inputfromkeyboard_vector(v); break;
            case 2: 
                cout << "Введите имя файла: "; 
                cin.getline(filename, 100);
                inputfromfile_vector(v, filename);
                break;
            case 3: inputfromrandom_vector(v); break;
            }
            // Список
            cout << "\nЗаполнение списка:\n1. Клавиатура\n2. Файл\n3. Случайно\nВыберите: ";
            while (!(cin >> method) || method < 1 || method > 3) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Неверный ввод! Введите 1, 2 или 3: ";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (method) {
            case 1: inputfromkeyboard_list(l); break;
            case 2: 
                cout << "Введите имя файла: "; 
                cin.getline(filename, 100);
                inputfromfile_list(l, filename);
                break;
            case 3: inputfromrandom_list(l); break;
            }
            cout << "\n=== Выполнение задания STL2Seq7 ===\n";
            STL2Seq7(d, v, l);
            break;
        }
        case 2: {
            deque<int> d;
            list<int> l;
            int method;
            char filename[100];
            // Дек
            cout << "\nЗаполнение дека:\n1. Клавиатура\n2. Файл\n3. Случайно\nВыберите: ";
            while (!(cin >> method) || method < 1 || method > 3) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Неверный ввод! Введите 1, 2 или 3: ";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (method) {
            case 1: inputfromkeyboard_deque(d); break;
            case 2: 
                cout << "Введите имя файла: "; 
                cin.getline(filename, 100);
                inputfromfile_deque(d, filename);
                break;
            case 3: inputfromrandom_deque(d); break;
            }
            // Список
            cout << "\nЗаполнение списка:\n1. Клавиатура\n2. Файл\n3. Случайно\nВыберите: ";
            while (!(cin >> method) || method < 1 || method > 3) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Неверный ввод! Введите 1, 2 или 3: ";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (method) {
            case 1: inputfromkeyboard_list(l); break;
            case 2: 
                cout << "Введите имя файла: "; 
                cin.getline(filename, 100);
                inputfromfile_list(l, filename);
                break;
            case 3: inputfromrandom_list(l); break;
            }
            cout << "\n=== Выполнение задания STL2Seq12 ===\n";
            STL2Seq12(d, l);
            break;
        }
        case 3: {
            list<int> l1, l2;
            int method;
            char filename[100];
            // Первый список
            cout << "\nЗаполнение первого списка:\n1. Клавиатура\n2. Файл\n3. Случайно\nВыберите: ";
            while (!(cin >> method) || method < 1 || method > 3) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Неверный ввод! Введите 1, 2 или 3: ";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (method) {
            case 1: inputfromkeyboard_list(l1); break;
            case 2: 
                cout << "Введите имя файла: "; 
                cin.getline(filename, 100);
                inputfromfile_list(l1, filename);
                break;
            case 3: inputfromrandom_list(l1); break;
            }

            // Второй список
            cout << "\nЗаполнение второго списка:\n1. Клавиатура\n2. Файл\n3. Случайно\nВыберите: ";
            while (!(cin >> method) || method < 1 || method > 3) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Неверный ввод! Введите 1, 2 или 3: ";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (method) {
            case 1: inputfromkeyboard_list(l2); break;
            case 2: 
                cout << "Введите имя файла: "; 
                cin.getline(filename, 100);
                inputfromfile_list(l2, filename);
                break;
            case 3: inputfromrandom_list(l2); break;
            }

            cout << "\n=== Выполнение задания STL2Seq24 ===\n";
            STL2Seq24(l1, l2);
            break;
        }
        case 4:
            cout << "\n=== Задание STL1Iter15 (запись в файл) ===\n";
            STL1Iter15();
            break;
        case 0:
            cout << "Выход из программы\n";
            break;
        default:
            cout << "Неверный выбор\n";
            break;
        }
    } 
    while (choice != 0);
    return 0;
}
