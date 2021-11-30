#include <iostream>
#include <string>
using namespace std;
bool Include(const string s, const string cs)
{
    bool r = true;
    r = r && ( s.find(cs) != -1 );
    return r;
}
string Change(string& s, const string cs)
{
    size_t pos = 0;
    while ( (pos = s.find(cs, pos)) != -1 )
    s.replace(pos, 3, "**");
    return s;
}
int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    string cs1 = "AGA";
    string cs2 = "OGO";
    string a1 = "Modified string (param) : ";
    string a2 = "Modified string (result): ";
    if (Include(str, cs1) && Include(str, cs2))
    {
        cout << "yes" << endl;
        string dest = Change(str, cs1);
        dest = Change(str, cs2);
        cout << a1 << str << endl;
        cout << a2 << dest << endl;
    }
    else
        if (Include(str, cs1))
        {
            cout << "yes" << endl;
            string dest = Change(str, cs1);
            cout << a1 << str << endl;
            cout << a2 << dest << endl;
        }
    else
        if (Include(str, cs2))
        {
            cout << "yes" << endl;
            string dest = Change(str, cs2);
            cout << a1 << str << endl;
            cout << a2 << dest << endl;
        }
        else
        {
            cout << "no" << endl;
            cout << a1 << str << endl;
            cout << a2 << str << endl;
        }
    return 0;
}
