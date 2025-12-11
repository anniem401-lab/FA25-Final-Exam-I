// COMSC-210 | Final Exam I | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    ifstream file;
    file.open("210-final-FA25.txt");
    if (!file.good()) throw "Error: Failed to open the file.";

    map<string, int> airport;
    string origin;
    int num;
    while (file >> origin >> num) {
        
    }

    return 0;
}
