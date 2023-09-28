#include <iostream>
#include <clocale>
using namespace std;
/**
 * 12. Дан набор ненулевых целых чисел; признак его завершения - число 0.
 * Вывести сумму всех положительных четных чисел из данного набора.
 * Если требуемые числа в наборе отсутствуют, то вывести 0.
*/
void solution1() {
    int UserNumber;
    int SummOfChet = 0;
    while (true) {
        cin >> UserNumber;
        if (UserNumber == 0) { break; }
        if ((UserNumber % 2) == 0) {
            SummOfChet += UserNumber; 
        }
    }
    cout << "Ваша сумма чисел:" << SummOfChet << "\n";
}
/**
 * @brief 12. Дано целое число N (> 0). Найти произведение 1.1 * 1.2 * 1.3 * ... (N сомножителей).
*/
int solution2() {
    int UserNumber;
    float AllProiz = 1.0;
    float Multipier = 1.0;
    cin >> UserNumber;
    if (UserNumber <= 0) {
        cerr << "Число должно быть > 0";
        return 1;
    }
    for (int i = 0; i < UserNumber; i++) {
        Multipier += 0.1;
        AllProiz *= Multipier;
    }
    cout << AllProiz << "\n";
    return 0;
}
/**
 * @brief Лр 4. Циклический вычислительный процесс
 * по заданиям
*/
int main()
{   
    setlocale(LC_ALL, "ru");
    int UserChoise;
    while (true) {
        cout << "Здравствуйте, напишите номер подпрограммы, в которую хотите попасть\n(1, 2, а для выхода введите -1)\n";
        cin >> UserChoise;
        if (UserChoise == 1) { solution1(); }
        else if (UserChoise == 2) { cout << solution2(); }
        else if (UserChoise == -1) { break; }
        else { cout << "Неправильная цифра!"; };
        cout << "\n";
    }
    return 0;
}