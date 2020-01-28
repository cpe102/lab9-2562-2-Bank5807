#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream source("cheerbook.txt");
    string textline, cop;
    while (getline(source,textline)){
        cop += textline;
        cop += "\n";
    }
   source.close();

   ofstream dest("cheerbook_copy.txt");
   dest << "--------------------SOTUS-----------------------\n";
   dest << cop;
   dest << "--------------------SOTUS-----------------------\n";
   dest.close();
    return 0;
}
