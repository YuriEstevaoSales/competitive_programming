#include <iostream>
#include <string>
#include <map>
#include <cstring>

using namespace std;

int main()
{
    int n,v,p,menorTempo=1000000, menorPiloto=0, somaTempos, aux=0, volta=101;
    string entrada;
    cin>>n>>v;

    multimap<int, int> corridas;

    for (int i = 0; i < n; i++)
    {
        cin>>p;
        somaTempos=0;
        for (int j = 0; j < v; j++)
        {
            cin>>entrada;
            size_t ptr = entrada.find(':');
            entrada.erase(ptr, 1);
            ptr = entrada.find(':');
            entrada.erase(ptr, 1);
            int entradaI = stoi(entrada);
            if (entradaI<menorTempo)
            {
                menorTempo=entradaI;
                menorPiloto=p;
                volta = j;
            }
            if (entradaI==menorTempo && j<volta)
            {
                menorTempo=entradaI;
                menorPiloto=p;
            }
            
            somaTempos+=entradaI;
        }
        corridas.insert(pair<int, int>(somaTempos, p)); 
    }

    for (auto itr = corridas.begin(); itr != corridas.end(); ++itr) {
        if (itr->second==menorPiloto && aux<10)
        {
            cout<<menorPiloto<<endl;
            return 0;
        }
        aux++;
        if (aux==10)
        {
            cout<<"NENHUM"<<endl;
            return 0;
        }
    }
}