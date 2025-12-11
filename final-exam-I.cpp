// COMSC-210 | Final Exam I | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <fstream>
#include <map>
using namespace std;

void trafficRange (map<string, int> airport, int low, int high);

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

    cout << "\nAirport Information (Airports & Traffic counts): \n";
    for (const auto& port : airport) {
        cout << port.first << " " << port.second << endl;
    }

    int trafficCountHigh = 0;
    for (const auto& port : airport) {
        if (port.second > trafficCountHigh) {
            trafficCountHigh = port.second;
        }
    }

    cout << "\nBusiest airport(s) with " <<  trafficCountHigh << ": " << endl;
    for (const auto& port : airport) {
        if (port.second == trafficCountHigh) {
            cout << port.first << " " << port.second << endl;
        }
    }

    trafficRange(airport, 3,8);

    return 0;
}

void trafficRange (map<string, int> airport, int low, int high) {
    cout << "\nAirports with traffic in range:\n";
    for (const auto& port : airport) {
        
    }
}