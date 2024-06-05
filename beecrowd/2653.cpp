#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<string> a;
    string entrada;
    while(getline(cin, entrada)){
        a.insert(entrada);
    }
    cout<<a.size()<<endl;

    return 0;
}
