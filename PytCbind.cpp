// PytCbind.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <string>
#include <iostream>
#include <fstream>

int main(int argc , char* argv[])
{
    std::string path;
    std::cout << "Enter Address of file: ";
    std::getline(std::cin, path);
    std::cout << "Loading File at : " << path << std::endl;
    return 0;
}