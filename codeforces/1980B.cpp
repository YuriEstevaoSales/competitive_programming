#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,f,k,a,favorito=0;
    vector<int> valores;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>f>>k;
        for (int j = 0; j < n; j++)
        {
            cin>>a;
            valores.push_back(a);
        } 

        favorito = valores.at(f-1);
        
        sort(valores.begin(), valores.end(), greater<int>());
        
        if(k<n){
            if (valores[k-1] > favorito || valores[k] > favorito)
            {
                cout<<"NO"<<endl;
            }else{
                if (valores[k-1] < favorito || valores[k] < favorito)
                {
                    cout<<"YES"<<endl;
                }else{
                    cout<<"MAYBE"<<endl;
                }
                
            }
        }else{
            if(n>1){
                if (valores[k-1] > favorito)
                {
                    cout<<"NO"<<endl;
                }else{
                    if (valores[k-1] < favorito || valores[k])
                    {
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"MAYBE"<<endl;
                    }
                    
                }
            }else{
                cout<<"YES"<<endl;
            }
        }
        valores.clear();
    }
    
    return 0;
}