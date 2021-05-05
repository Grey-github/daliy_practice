#include <iostream>
#include <string>

void PrintString(const std::string& string)
{
    std::cout << string << std::endl;
}

void CapacityFunctions();
void InputFunctions();
void IteratorFunctions();
void ManipulatingFunctions();

int main()
{
    std::string name = std::string("Cherno") + " great";
    PrintString(name);
    bool contains = name.find("eat") != std::string::npos;

    CapacityFunctions();
    InputFunctions();
    IteratorFunctions();
    ManipulatingFunctions();

    return 0;
}

void CapacityFunctions()
{
    // C++ code to demonstrate the working of
    // capacity(), resize() and shrink_to_fit()

    std::string str;
    // Displaying string
    std::cout << "The initial string is :";
    std::cout << str << std::endl;

    // Resizing string using resize()
    str.resize(13);

    // Displaying string
    std::cout << "The string after resize operation is : ";
    std::cout << str << std::endl;

    // Displaying capacity of string
    std::cout << "The capacity of string is : ";
    std::cout << str.capacity() << std::endl;

    // Displaying length of the string
    std::cout << "The length of the string is : " << str.length() << std::endl;

    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();

    // Displaying string
    std::cout << "The new capacity after shrinking is : ";
    std::cout << str.capacity() << std::endl;

    std::cout << std::endl;
}

void InputFunctions()
{
    // C++ code to demonstrate the working of
    // getline(), push_back() and pop_back()

    // Declaring string
    std::string str;

    // Taking string input using getline()
    // "geeksforgeek" in giving output
    std::getline(std::cin, str);

    // Displaying string
    std::cout << "The initial string is:";
    std::cout << str << std::endl;

    // Using push_back() to insert a character
    // at end
    // pushes 's' in this case
    str.push_back('s');

    // Displaying string
    std::cout << "The initial string is:";
    std::cout << str << std::endl;

    // Using pop_back() to delete a character
    // from end
    // pops 's' in this case
    str.pop_back();

    // Displaying string
    std::cout << "The initial string is:";
    std::cout << str << std::endl;

    std::cout << std::endl;
}

void IteratorFunctions()
{
    // C++ code to demonstrate the working of
    // begin(), end(), rbegin(), rend()

    // Initializing string
    std::string str = "geeksforgeeks";

    // Declaring iterator
    std::string::iterator it;

    // Declaring reverse iterator
    std::string::reverse_iterator it1;

    // Displaying string
    std::cout << "The string using forward iterators is : ";
    for (it=str.begin(); it!=str.end(); it++)
        std::cout << *it;
    std::cout << std::endl;

    // Displaying reverse string
    std::cout << "The reverse string using reverse iterators is : ";
    for (it1=str.rbegin(); it1!=str.rend(); it1++)
        std::cout << *it1;
    std::cout << std::endl;

    std::cout << std::endl;
}

void ManipulatingFunctions()
{
    // C++ code to demonstrate the working of
    // copy() and swap()

    // Initializing 1st string
    std::string str1 = "geeksforgeeks if for geeks";

    // Declaring 2nd string
    std::string str2 = "geeksforgeeks rocks";

    // Declaring character array
    char ch[80];

    // using copy() to copy elements into char array
    // copies "geeksforgeeks"
    str1.copy(ch, 13, 0);

    // Displaying char array
    std::cout << "The new copied character array is :";
    std::cout << ch << std::endl << std::endl;

    // Displaying strings before swapping
    std::cout << "The 1st string before swapping is : ";
    std::cout << str1 << std::endl;
    std::cout << "The 2nd string before swapping is : ";
    std::cout << str2 << std::endl;

    // using swap() to swap string content
    str1.swap(str2);

    // Displaying strings after swapping
    std::cout << "The 1st string after swapping is : ";
    std::cout << str1 << std::endl;
    std::cout << "The 2nd string after swapping is : ";
    std::cout << str2 << std::endl;

    std::cout << std::endl;
}
