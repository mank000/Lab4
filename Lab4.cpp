#include <iostream>
#include <clocale>
using namespace std;
int solution1() {
    int UserNumber;
    int SummOfChet = 0;
    while (true) {
        cin >> UserNumber;
        if ((UserNumber % 2) == 0
            and (UserNumber != 0)
            and (UserNumber > 0)) { SummOfChet += UserNumber; }
        else if (UserNumber == 0) { break; }
    }
    cout << "\n";
    cout << "Ваша сумма чисел:" << SummOfChet << "\n";
    return 0;
}

int solution2() {
    int UserNumber;
    float AllProiz = 1;
    float Multipier = 1.0;
    cin >> UserNumber;
    for (int key = 0; UserNumber != key; key++)
    {
        Multipier += 0.1;
        AllProiz *= Multipier;
    }
    cout << AllProiz << "\n";
    return 0;
}
int main()
{   
    setlocale(LC_ALL, "ru");
    cout << solution2();
}