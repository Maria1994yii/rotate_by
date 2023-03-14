// rotate_by.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void rotate_by(int* arr, unsigned int num, int size);

int main()
{
    unsigned int num;
    int size;
    int* arr;

    std::cout << "size = ";
    std::cin >> size;

    std::cout << "number = ";
    std::cin >> num;
    arr = (int*)new int[size];

    std::cout << "insert number of array\n";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
    
    rotate_by(arr, num, size);

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i]<<", ";
    }

    delete[]arr;
    arr = nullptr;

    return 0;
}

void rotate_by(int* arr, unsigned int num, int size)
{
    if (num > size)return;

    for (int i = 0, j=size-1; i <num; ++i, --j)
    {
        int rot = arr[i];
        arr[i] = arr[j];
        arr[j] = rot;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
// size = sizeof(arr)/sizeof(arr[0])
// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
