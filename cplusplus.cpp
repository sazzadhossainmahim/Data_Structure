#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string str;
    do
    {
        cout << "enter text: ";
        getline(cin, str);
        cout << "you Entered: " << str << '\n';

    } while (str != "goodbye");
}