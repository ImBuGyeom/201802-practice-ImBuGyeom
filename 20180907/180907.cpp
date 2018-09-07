#include <iostream>
/*
int main(void)
{
    int val1;
    std::cout << "insert first number: ";
    std::cin >> val1;
    
    int val2;
    std::cout << "insert second number: ";
    std:: cin >> val2;
    
    int result = val1 + val2;
    std:: cout << "addition result: " << result << std::endl;
    return 0;
}

//.cpp 파일 실행이 안 될 때: chmod로 바꿀 것이 아니라 g++로 컴파일을 해야됨.
*/

int main(void)
{
    int val1, val2;
    int result = 0;
    std:: cout << "insert two numbers: ";
    std:: cin >> val1 >> val2;
    
    if (val1<val2)
    {
        for (int i = val1+1; i < val2; i ++)
            result += i;
    }
    else
    {
        for (int i = val2+1; i < val1; i++)
            result += i;
    }
    
    std::cout<<"sum of numbers between the two numbers: " << result << std::endl;
    return 0;
    
}