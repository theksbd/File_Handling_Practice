#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream myFile;
    // write mode
    myFile.open("text.txt", ios::out);
    if (myFile.is_open())
    {
        for (int i = 0; i < 3; i++)
            myFile << "Hello World!\n";
        myFile << "Last line of printing";
        myFile.close();
    }
    // read mode
    myFile.open("text.txt", ios::in);
    if (myFile.is_open())
    {
        string line;
        int i = 1;
        while (getline(myFile, line))
            cout << line << ' ' << i++ << endl;
        myFile.close();
    }
    return 0;
}