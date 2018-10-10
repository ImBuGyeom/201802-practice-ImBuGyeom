#include<iostream>
#include<cstring>
#include<cctype>

int main()
{
    char str[90];
    int i;
    strcpy(str, "this is a test");
    for(i=0; str[i]; i++)
        str[i] = toupper(str[i]);
    std::cout<<str;
    return 0;
}