#include <iostream>

int main()
{
    char symbol;
    int count;
    char* str = nullptr;
    char* strTemp = nullptr;

    while (true)
    {
        std::cout << "Input symbol: ";
        std::cin >> symbol;
        
        if (symbol == '~') break;

        std::cout << "Input count: ";
        std::cin >> count;

        int length = ((str) ? strlen(str) : 0);
        int sizeNew = count + 1 + length;
        strTemp = new char[sizeNew];

        for (int i{}; i < length; i++)
            strTemp[i] = str[i];

        for (int i{}; i < count; i++)
            strTemp[i + length] = symbol;

        strTemp[length + count] = '\0';
        if(str)
            delete[] str;
        str = strTemp;
    }

    std::cout << str;
}
