#include <iostream>
#include <ctime> // Додаємо бібліотеку для функції time()

using namespace std;

// 1. Функція заповнює масив випадковими числами від -20 до 50
void zapovnytyMasiv(int a[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = -20 + rand() % (50 - (-20) + 1);
    }
}

// 2. Функція виводить масив на екран
void vyvestyMasiv(int a[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

// 3. Обчислення кількості
int obchyslytyKilkist(int a[], const int n)
{
    int kilkist = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && i % 5 != 0)
        {
            kilkist++;
        }
    }
    return kilkist;
}

// 4. Обчислення суми
int obchyslytySumu(int a[], const int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && i % 5 != 0)
        {
            suma = suma + a[i];
        }
    }
    return suma;
}

// 5. Заміна елементів нулями
void zaminytyNuliamy(int a[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && i % 5 != 0)
        {
            a[i] = 0;
        }
    }
}

int main()
{
    // ІНІЦІАЛІЗАЦІЯ ГЕНЕРАТОРА ВИПАДКОВИХ ЧИСЕЛ
    // time(0) повертає поточний час у секундах, тому при кожному запуску числа будуть новими
    srand(time(0));

    const int n = 20;
    int a[n];

    zapovnytyMasiv(a, n);

    cout << "Pochatkovyi masiv:" << endl;
    vyvestyMasiv(a, n);

    int k = obchyslytyKilkist(a, n);
    int s = obchyslytySumu(a, n);

    zaminytyNuliamy(a, n);

    cout << "\nKilkist = " << k << endl;
    cout << "Suma = " << s << endl;

    cout << "\nModyfikovanyi masiv:" << endl;
    vyvestyMasiv(a, n);

    return 0;
}