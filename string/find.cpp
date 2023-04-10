#include <iostream>
#include <string>

int main()
{
    std::string str = "hello world";

    std::size_t pos = str.find("l", 3);  // search for the first occurrence of 'l' starting at position 3

    if (pos != std::string::npos)  // check if the substring was found
    {
        std::cout << "The substring was found at position " << pos << std::endl;
    }
    else
    {
        std::cout << "The substring was not found." << std::endl;
    }

    return 0;
}