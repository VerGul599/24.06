#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<int> vec;
    srand(time(0));
    for (int i = 0; i < 10; ++i)
    {
        vec.push_back(rand() % 41 - 20);
    }

    cout << "Вектор: ";
    for (int num : vec)
    {
        cout << num << " " ;
    }
    cout << "\n";

    vec.erase(remove_if(vec.begin(), vec.end(), [](int num) {return num <= 0; }), vec.end());

    cout << "Вектор без отрицательных чисел и нулей: ";
    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << "\n";

    sort(vec.begin(), vec.end());

    cout << "Отсортированный вектор: ";
    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << "\n";

    vector<int> sortedNumbers(vec.begin(), vec.end());

    cout << "Отсортированный вектор2: ";
    for (int num : sortedNumbers)
    {
        cout << num << " ";
    }

    system("pause");
    return 0;
}
