#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
ofstream output("test.txt");
output << "this is a test13" << endl
        << "test2" << endl;
output.close();
ifstream ifile("test.txt");
for(string line; getline(ifile,line);)
    cout << line << endl;
ifile.close();
}