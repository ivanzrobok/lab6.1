// lab6.1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
using namespace std;
void create(int* arr, const int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 80 - 25;

    }
    cout << endl;
}
void print(int* arr, const int n) {
    cout << "massiv  ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int sum(int arr[], int const n) {
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i] % 2 == 1)
            s += arr[i];
    }
    return s;
}
void count(int arr[], const int n)//згідно варіанту функція виводить всі додатні і непарні елементи масиву.
{
    cout << "modefication array  ";
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0 && arr[i] % 2 == 1) {

            cout << arr[i] << " ";
        }

    }
}

int main()
{
    int const n = 23;
    int p[n];
    create(p, n);
    print(p, n);
    cout << "suma modefication array " << sum(p, n) << endl;
    count(p, n);
    cout << endl;
}