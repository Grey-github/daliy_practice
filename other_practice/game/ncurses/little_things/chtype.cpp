#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <ncurses.h>
#include <iostream>
#include <string>
#include <bitset>

void chtypeBit64(chtype ch)
{
    std::cout <<
        std::bitset<48>(ch>>16) << ' ' <<
        std::bitset<8>(ch>>8) << ' ' <<
        std::bitset<8>(ch) << std::endl; 
}

void attrBit64(attr_t attr)
{
    std::cout << 
    std::bitset<48>(attr>>16) << ' ' <<
    std::bitset<8>(attr>>8) << ' ' <<
    std::bitset<8>(attr) << std::endl << std::endl;
}

int main(int argc, char** argv)
{
    // start and configure color pairs
    initscr();
    if (!has_colors())
    {
        return -1;
    }

    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    endwin();

    char c = 'A';
    const int size_c = sizeof(c);

    std::cout << std::string(66, '=') << std::endl;
    std::cout.width(66);
    std::cout << std::right << "Type: char | sizeof(char = 1 byte = 8 bits" << std::endl;
    std::cout << std::string(66, '-') << std::endl;

    std::cout.width(58);
    std::cout << std::right << ' ';
    std::cout << std::right <<
        std::bitset<8>(c) << std::endl;
    
    std::cout.width(58);
    std::cout << std::right << ' ';
    std::cout.width(9);
    std::cout << std::left << "Text" << std::endl << std::endl;

    std::cout << std::string(66, '=') << std::endl;

    chtype ch = 'A' | A_REVERSE | COLOR_PAIR(1);
    const int size_ch = sizeof(ch);

    std::cout.width(66);
    std::cout << std::right << "Type: chtype | sizeof(char) = 8 byte = 64 bits" << std::endl;
    std::cout << std::string(66, '-') << std::endl;

    chtypeBit64(ch);

    std::cout.width(49);
    std::cout << std::left << "Attributes";
    std::cout.width(9);
    std::cout << std::left << "Colors";
    std::cout.width(9);
    std::cout << std::left << "Text" << std::endl << std::endl;

    std::cout << std::string(66, '=') << std::endl;

    std::cout.width(66);
    std::cout << std::right << "A_CHARTEXT" << std::endl;
    std::cout << std::string(66, '-') << std::endl;
    attrBit64(A_CHARTEXT);

    std::cout << std::string(66, '=') << std::endl;

    std::cout.width(66);
    std::cout << std::right << "A_COLOR" << std::endl;
    std::cout << std::string(66, '-') << std::endl;
    attrBit64(A_COLOR);

    std::cout << std::string(66, '=') << std::endl; 
}