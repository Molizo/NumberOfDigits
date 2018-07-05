#include <iostream>

using namespace std;

int main()
{int n,c,uc;
    cout << "Introduceti numarul:" ;
    cin>>n;
    c=0;
    while(n>0)
    {
        uc=n%10;
        if(uc%2==0)
        {
            c=c+1;
        }
        if(uc%2==1)
        {
            break;
        }
        n=n/10;
    }
    cout<<endl<<endl<<endl<<"Numarul de cifre este:"<<c<<endl<<endl<<endl;
    return 0;
}
