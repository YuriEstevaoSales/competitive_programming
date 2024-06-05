#include <iostream>

using namespace std;

int main()
{
    int n,l,d,totalCafe=0,total=0;
    cin>>n>>l>>d;

    totalCafe = (n * d);
    l = l * 1000;
    while(total<totalCafe)
    {
        total+=l;
    }
    cout<<total/1000<<endl;
    
    return 0;
}