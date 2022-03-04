#include <iostream>
using namespace std;

//Сортировка вставками

int main()
{
    setlocale(LC_ALL, "Russian");
    
     cout << "Сортировка вставками" << endl;

    int N[7];                       //  массив из 7 элементов

    cout << "Введите 7 чисел: " << endl;

    for (int i = 0; i < 7; i++)
    {
        cin >> N[i];
    }
    
    int s = 0; // временная переменная
    int i, j;  

    for (i = 1; i < 7; i++)
    {
        s = N[i]; 
        for (j = i - 1; j >= 0 && N[j] > s; j--)
            N[j + 1] = N[j];

        N[j + 1] = s; 
    }
    
    cout << "Отсортированный массив: ";

    for (int i = 0; i < 7; i++)
        cout << N[i] << " ";

    return 0;
}












