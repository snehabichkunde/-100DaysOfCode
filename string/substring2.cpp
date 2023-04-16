#include <cctype>    // for toupper and tolower
#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, Sneha";
    std::string search_string = "sneha";
    for (char &c : search_string)
    {
        c = std::tolower(c);
    }
    for (char &c : str)
    {
        c = std::tolower(c);
    }
    size_t pos = str.find(search_string);
    if (pos != std::string::npos)
    {
        std::cout << "String is found" << std::endl;
    }
    else
    {
        std::cout << "String is not found" << std::endl;
    }
    return 0;
}
