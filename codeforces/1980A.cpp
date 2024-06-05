#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, n, m, aux=0, counter;
    char problemas, auxi;
    cin>>t;
    string entrada;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>m;
        cin>>entrada;
        counter=0;
        aux=0;
        do
        {
            auxi='A';
            for (int k = 0; k <= 6; k++)
            {
                auto pos = entrada.find(auxi);
                if (pos == string::npos)
                {
                    counter++;
                }else{
                    entrada.erase(pos, 1);
                }
                auxi = static_cast<char>(auxi + 1);
            }
            
            aux++;
        } while (aux<m);
        cout<<counter<<endl;
    }

    return 0;
}