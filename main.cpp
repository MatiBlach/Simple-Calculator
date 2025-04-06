#include <iostream>
using namespace std;

int main()
{
        int n;
        cin>>n;
        
        for(int i = 0; i < n; i++)
        {
                int ile;
                cin>>ile;
                double wynik;
                cin>>wynik;
                
                
                
                for(int j = 0; j < ile - 1; j++)
                {
                        char znak;
                        cin>>znak;
                        double a;
                        cin>>a;
                        if(znak == '+')
                        {
                                wynik = wynik + a;
                        }
                        else if(znak == '*')
                        {
                                wynik = wynik * a;
                        }
                        else if(znak == '/')
                        {
                                wynik = wynik / a;
                        }
                        else
                        {
                                wynik = wynik - a;
                        }
                }
                cout<<wynik;
        }
        
        return 0;
}
