#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>  
#include <algorithm>

using namespace std;

int main()
{
    int n;
    string nome,notas,p1,p2,trab,ps,trash;
    cin>>n;
    getline(cin, trash);
    for (int i = 0; i < n; i++)
    {
        getline(cin, nome);
        getline(cin, notas);

        p1 = notas.substr(0, 3);
        float p1f = stof(p1);
        if (notas.length()>=4)
        {
            p2 = notas.substr(4, 3);
            float p2f = stof(p2);
            if (notas.length()>=8)
            {
                trab = notas.substr(8, 3);
                float trabf = stof(trab);
                if (notas.length()>=13)
                {
                    ps = notas.substr(12, 3);
                    float psf = stof(ps);
                    float menor = min(psf, min(trabf, min(p2f, p1f)));

                    cout<<nome<<": "<<fixed<<setprecision(1)<<((p1f+p2f+trabf+psf)-menor)/3<<endl;
                }else{ cout<<nome<<": "<<fixed<<setprecision(1)<<(p1f+p2f+trabf)/3<<endl; }
                
            }else{ cout<<nome<<": "<<fixed<<setprecision(1)<<(p1f+p2f)/2<<endl; }
            
        }else{ cout<<nome<<": "<<fixed<<setprecision(1)<<p1f/2<<endl; }
    
    }
    return 0;
}