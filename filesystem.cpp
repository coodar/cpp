#include <iostream>
#include <string>
#include <experimental/filesystem>

using namespace std;
using namespace std::experimental::filesystem;

int main()
{
    string filepath("/test0/test.txt");
    path path1(filepath);
    cout << path1 << endl
         << path1.filename() << endl
         << path1.root_name() << endl
         << path1.root_path() << endl
         << path1.relative_path() << endl
         << path1.parent_path() << endl
         << path1.stem() << endl
         << path1.extension() << endl;
}