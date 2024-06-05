#include <iostream>

using namespace std;

int main()
{
    int n,o,aux=0;
    string tempo;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>o>>tempo;

        if (tempo=="1T")
        {
            if (o>45)
            {
                aux = o - 45;
                cout<<"45+"<<aux<<endl;
            }else{
                cout<<o<<endl;
            }
        }
        if (tempo=="2T"){
            o = o + 45;
            if (o>90)
            {
                aux = o - 90;
                cout<<"90+"<<aux<<endl;
            }else{
                cout<<o<<endl;
            }
        }
    }
    
    return 0;
}