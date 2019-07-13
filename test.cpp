#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "hello world\n";
    auto beg = s1.begin();
    auto end = s1.end();
    for(auto index = beg; index != end && !isspace(*index); ++index)
        {
            auto &c = *index;
            c = toupper(c);
        }
    cout << s1;
}