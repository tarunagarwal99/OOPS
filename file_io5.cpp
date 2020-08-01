#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char myline[75];
    int ic = 0;
    ofstream outfile("out.txt", ios::app);
    ifstream infile("out.txt", ios::in);
    if (!infile)
    {
        cout << "failed to open input file .\n";
        exit(0);
    }
    while (1)
    {
        infile.getline(myline, 75, '.');
        if (infile.eof())
            break;
        ic++;
        outfile << ic << ":" << myline << "\n";
    }
    infile.close();
    outfile.close();
    cout << "output " << ic << " records" << endl;

    return 0;
}