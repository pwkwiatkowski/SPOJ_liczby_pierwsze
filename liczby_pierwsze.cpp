#include <iostream>

using namespace std;

int main()
{
    int n,liczba;
    bool flaga=false;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>liczba;
        if(liczba==1)
            cout<<"NIE"<<endl;
        else if(liczba==2)
            cout<<"TAK"<<endl;
        else
        {
            for(int j=2; j<liczba; j++)
            {
                if(liczba%j!=0)
                {
                    flaga=true;
                }
                else
                {
                    flaga=false;
                    break;
                }
            }

            if(flaga==true)
                cout<<"TAK"<<endl;
            else
                cout<<"NIE"<<endl;
        }
    }

    return 0;
}
