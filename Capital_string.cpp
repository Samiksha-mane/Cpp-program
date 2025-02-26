#include <iostream>
#include <string>

void toUpperCase(std::string &str) 
{
    for (size_t i = 0; i < str.length(); i++) 
	{
        if (str[i] >= 'a' && str[i] <= 'z') 
		{
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

int main() 
{
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    toUpperCase(input);
    
    std::cout << "Uppercase string: " << input << std::endl;
    
    return 0;
}

