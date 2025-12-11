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
    string destination;
    int num;
    while (file >> origin >> destination) {
        airport[origin]++;
        airport[destination]++;
    }
    file.close();

    cout << "Airport Information (Airports & Traffic counts): \n";
    for (const auto& port : airport) {
        cout << port.first << " " << port.second << endl;
    }

    int trafficCountHigh = 0;
    for (const auto& port : airport) {
        if (port.second > trafficCountHigh) {
            trafficCountHigh = port.second;
        }
    }

    cout << "\nBusiest airport(s) with " << 
    for (const auto& port : airport) {
        if (port.second == trafficCountHigh) {
            cout << port.first << " " << port.second << endl;
        }
    }

    return 0;
}
