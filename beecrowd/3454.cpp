#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin>>input;

    if (input=="XXO" || input=="OXX"){
        cout<<"Alice"<<endl;
    }else if(input=="XOX"){
        cout<<"*"<<endl;
    }else{
        cout<<"?"<<endl;
    }
    
    return 0;
}