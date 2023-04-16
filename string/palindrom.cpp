#include <iostream>
#include <string>

bool isPalindrome(std::string input)
{
    std::string::iterator begin = input.begin();
    std::string::iterator end = input.end() - 1;
    while (end > begin + 1)
    {
        if (*end != *begin)
        {
            return false;
        }
        end--;
        begin++;
    }
    return true;
}

int main()
{
    std::string str;
    std::cin >> str;
    if (isPalindrome(str))
    {
        std::cout << "Palindrome" << std::endl;
    }
    else
    {
        std::cout << "Not Palindrome" << std::endl;
    }
    return 0;
}
