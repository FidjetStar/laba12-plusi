#include "h.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <limits>
#include <deque>
#include <list>
#include <iterator>

void inputfromkeyboard_deque(std::deque<int>& d) { // заполнение с клавиатуры дека
    int n;
    std::cout << "Введите количество элементов для заполнения дека: ";
    while (!(std::cin >> n)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод! Введите число: ";
    }
    std::cout << "Введите " << n << " элементов через пробел: ";
    std::vector<int> temp;
    for (int i = 0; i < n; i++) {
        int x;
        while (!(std::cin >> x)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Неверный ввод! Введите число: ";
        }
        temp.push_back(x);
    }
    d = std::deque<int>(temp.begin(), temp.end());
    std::cout << "Данные успешано записаны" << std::endl;
}

void inputfromfile_deque(std::deque<int>& d, const char* filename) { // заполнение из файла дека
    std::ifstream in(filename);
    if (!in.is_open()) {
        std::cout << "Ошибка открытия файла\n";
        return;
    }
    std::vector<int> temp;
    int x;
    while (in >> x) {
        temp.push_back(x);
    }
    d = std::deque<int>(temp.begin(), temp.end());
    in.close();
    std::cout << "Данные успешано записаны" << std::endl;
}

void inputfromrandom_deque(std::deque<int>& d) { // заполнение рандомно дека
    std::srand(time(nullptr));
    int n;
    std::cout << "Сколько случайных чисел добавить в дек? ";
    while (!(std::cin >> n)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод! Введите число: ";
    }
    std::vector<int> temp;
    for (int i = 0; i < n; i++) {
        temp.push_back(std::rand() % 200 - 100);
    }
    d = std::deque<int>(temp.begin(), temp.end());
    std::cout << "Данные успешано записаны" << std::endl;
}

void inputfromkeyboard_list(std::list<int>& l) { // заполнение с клавиатуры двусвязного списка
    int n;
    std::cout << "Введите количество элементов для заполнения списка: ";
    while (!(std::cin >> n)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод! Введите число: ";
    }
    std::cout << "Введите " << n << " элементов через пробел: ";
    std::vector<int> temp;
    for (int i = 0; i < n; i++) {
        int x;
        while (!(std::cin >> x)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Неверный ввод! Введите число: ";
        }
        temp.push_back(x);
    }
    l = std::list<int>(temp.begin(), temp.end());
    std::cout << "Данные успешано записаны" << std::endl;
}

void inputfromfile_list(std::list<int>& l, const char* filename) { // заполнение из файла двусвязного списка
    std::ifstream in(filename);
    if (!in.is_open()) {
        std::cout << "Ошибка открытия файла\n";
        return;
    }
    std::vector<int> temp;
    int x;
    while (in >> x) {
        temp.push_back(x);
    }
    l = std::list<int>(temp.begin(), temp.end());
    in.close();
    std::cout << "Данные успешано записаны" << std::endl;
}


void inputfromrandom_list(std::list<int>& l) { // заполнение рандомно двусвязного списка
    std::srand(time(nullptr));
    int n;
    std::cout << "Сколько случайных чисел добавить в список? ";
    while (!(std::cin >> n)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод! Введите число: ";
    }
    std::vector<int> temp;
    for (int i = 0; i < n; i++) {
        temp.push_back(std::rand() % 200 - 100);
    }
    l = std::list<int>(temp.begin(), temp.end());
    std::cout << "Данные успешано записаны" << std::endl;
}



void inputfromkeyboard_vector(std::vector<int>& v) { // заполнение с клавиатуры вектора
    int n;
    std::cout << "Введите количество элементов для заполнения вектора: ";
    while (!(std::cin >> n)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод! Введите число: ";
    }
    std::cout << "Введите " << n << " элементов через пробел: ";
    std::vector<int> temp;
    for (int i = 0; i < n; i++) {
        int x;
        while (!(std::cin >> x)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Неверный ввод! Введите число: ";
        }
        temp.push_back(x);
    }
    v = std::vector<int>(temp.begin(), temp.end());
    std::cout << "Данные успешано записаны" << std::endl;
}

void inputfromfile_vector(std::vector<int>& v, const char* filename) { // заполнение с файла вектора 
    std::ifstream in(filename);
    if (!in.is_open()) {
        std::cout << "Ошибка открытия файла\n";
        return;
    }
    std::vector<int> temp;
    int x;
    while (in >> x) {
        temp.push_back(x);
    }
    v = std::vector<int>(temp.begin(), temp.end());
    in.close();
    std::cout << "Данные успешано записаны" << std::endl;
}

void inputfromrandom_vector(std::vector<int>& v) { // заполнение рандомно вектора 
    std::srand(time(nullptr));
    int n;
    std::cout << "Сколько случайных чисел добавить в вектор? ";
    while (!(std::cin >> n)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод! Введите число: ";
    }
    std::vector<int> temp;
    for (int i = 0; i < n; i++) {
        temp.push_back(std::rand() % 200 - 100);
    }
    v = std::vector<int>(temp.begin(), temp.end());
    std::cout << "Данные успешано записаны" << std::endl;
}







void STL2Seq7(std::deque<int>& d, std::vector<int>& v, std::list<int>& l) { // дек вектор двусвязный список
    if (d.size() >= 2 && v.size() >= 2 && l.size() >= 2 && d.size() % 2 == 0 && v.size() % 2 == 0 && l.size() % 2 == 0) {
        std:: cout << "Исходный дек:" << std::endl;
        std::deque<int>::iterator it_d, it_d1;
        for (it_d = d.begin(); it_d != d.end(); ++it_d) {
            std::cout << *it_d << " ";
        }
        std::cout << std::endl;
        std::cout << "Исходный вектор:" << std::endl;
        std::vector<int>::iterator it_v,it_v1;
        for (it_v = v.begin(); it_v != v.end(); ++it_v) {
            std::cout << *it_v << " ";
        }
        std::cout << std::endl;
        std::cout << "Исходный список:" << std::endl;
        std::list<int>::iterator it_l,it_l1;
        for (it_l = l.begin(); it_l != l.end(); ++it_l) {
            std::cout << *it_l << " ";
        }
        std::cout << std::endl;
        std::advance(it_d = d.begin(), d.size() / 2 - 1);
        std::advance(it_v = v.begin(), v.size() / 2 - 1);
        std::advance(it_l = l.begin(), l.size() / 2 - 1);
        std::advance(it_d1 = d.begin(), d.size() / 2);
        std::advance(it_v1 = v.begin(), v.size() / 2);
        std::advance(it_l1 = l.begin(), l.size() / 2);
        std::swap(*it_d, *it_d1);
        std::swap(*it_v,*it_v1);
        std::swap(*it_l,*it_l1);
        std:: cout << "Результат:" << std::endl;
        std:: cout << "Дек:" << std::endl;
        for (it_d = d.begin(); it_d != d.end(); ++it_d) {
            std::cout << *it_d << " ";
        }
        std::cout << std::endl;
        std::cout << "Вектор:" << std::endl;
        for (it_v = v.begin(); it_v != v.end(); ++it_v) {
            std::cout << *it_v << " ";
        }
        std::cout << std::endl;
        std::cout << "Список:" << std::endl;
        for (it_l = l.begin(); it_l != l.end(); ++it_l) {
            std::cout << *it_l << " ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "Все контейнеры должны содержать четное количество элементов и не менее 2\n";
        return;
    }
}



void STL2Seq12(std::deque<int>& d, std::list<int>& l) { // дек двусвязный список
    if (d.size() >= 5 && l.size() >= 5) {
        std::cout << "Исходный дек:" << std::endl;
        for (auto it = d.begin(); it != d.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        std::cout << "Исходный список:" << std::endl;
        for (auto it = l.begin(); it != l.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        auto it_insert = std::prev(l.end(), 5);
        l.insert(it_insert, d.rbegin(), d.rbegin() + 5);
        std::cout << "Результат (список после вставки):" << std::endl;
        for (auto it = l.begin(); it != l.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    } 
    else {
        std::cout << "Все контейнеры должны содержать не менее 5 элементов\n";
    }
}


void STL2Seq24(std::list<int>& l1, std::list<int>& l2) { // два двусвязных списка
    if (!l1.empty() && !l2.empty() && l1.size() % 2 != 0) {
        std:: cout << "Исходный первый список " << std::endl;
        for (auto it = l1.begin(); it != l1.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        std:: cout << "Исходный второй список " << std::endl;
        for (auto it = l2.begin(); it != l2.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        auto it_l1 = l1.begin();
        std::advance(it_l1, l1.size() / 2); 
        auto it_l2 = l2.end(); 
        l2.splice(it_l2, l1, it_l1);
        std::cout << "Результат: " << std::endl;
        for (auto it = l2.begin(); it != l2.end(); ++it) {
            std::cout << *it << " ";
        }
    } 
    else {
        std::cout << "Списки должны быть не пустые и число элементов первого списка должно быть нечетным" << std::endl;
    }
}


void STL1Iter15() { // не используются контейнеры 
    std::string name;
    std::cout << "Введите название файла, куда будет записан ответ: ";
    std::getline(std::cin, name);
    std::ofstream f(name);
    if (!f.is_open()) {
        std::cout << "Файл не открылся!" << std::endl;
        return;
    }
    std::cout << "Введите числа: " << std::endl;
    std::cout << "Для завершения ввода введите не число!!!" << std::endl;
    std::replace_copy(
        std::istream_iterator<int>(std::cin), // указатель на начало ввода
        std::istream_iterator<int>(),         // указатель на конец ввода
        std::ostream_iterator<int>(f, "  "),  // куда пишем ++ два пробела
        0, 10                                 // заменяем 0 на 10
    );
    f.close();
    std::cout << "Числа успешно записаны в файл \"" << name << "\"\n";
}

