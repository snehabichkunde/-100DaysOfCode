#include <iostream>
#include <string>

int main()
{
    std::string str1 = "hello";
    std::string str2 = "world";

    int result = str1.compare(str2);  // compare str1 and str2 using the compare function

    if (result == 0)  // check if the strings are equal
    {
        std::cout << "The strings are equal." << std::endl;
    }
    else if (result < 0)  // check if str1 is lexicographically less than str2
    {
        std::cout << "str1 is lexicographically less than str2." << std::endl;
    }
    else  // if none of the above conditions are met, str1 must be lexicographically greater than str2
    {
        std::cout << "str1 is lexicographically greater than str2." << std::endl;
    }

    return 0;
}