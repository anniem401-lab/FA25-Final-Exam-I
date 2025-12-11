// COMSC-210 | Final Exam I | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    ifstream file;
    file.open("210-final-1-FA25.txt");
    if (!file.good()) throw "Error: Failed to open the file.";

    map<string, int> airport;
    string origin;
    string count;
    int num;
    while (file >> origin >> count) {
        airport[origin]++;
        airport[count]++;
    }
    file.close();

    cout << "Airport Information: \n";
    for (const auto& port : airport) {
        cout << port.first << " " << port.second << endl;
    }
    return 0;
}
