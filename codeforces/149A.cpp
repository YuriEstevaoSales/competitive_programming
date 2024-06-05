#include <iostream>
#include <set>

using namespace std;

int main()
{
    int k, entrada, soma=0, aux=0;
    cin>>k;
    multiset<int> a;
    for (int i = 0; i < 12; i++)
    {
        cin>>entrada;
        a.insert(entrada);
    }
    
    auto it = a.end();
    auto x = a.begin();
    it--;
    x--;
    while(soma < k)
    {
        soma = soma + *it;
        aux++;
        if (it==x)
        {
            cout<<"-1";
            return 0;
        }
        it--;
    }
    cout<<aux;

    return 0;
}
