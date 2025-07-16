#include <iostream>
#include <set>
#include <list>

using namespace std;

int main(){

    int n, count=0;
    cin >> n;
    set<string> seen;
    set<string> seen2;
    list<string> result;
    list<string> inputs;

    for(int i=0;i<n;i++){
        string input;
        cin >> input;

        inputs.push_back(input);
    }

    for(string j : inputs){
        if(seen.insert(j).second){
            result.push_front(j);
        }else{
            result.push_front(j);
            count++;
        }
    }

    for(string k : result){
        if(seen2.insert(k).second){
            cout << k << endl;
        }
    }   

return 0;
}
