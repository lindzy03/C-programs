#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    switch(x)
    {
        case 1:cout<<"I"<<endl;break;
        case 5:cout<<"V"<<endl;break;
        case 10:cout<<"X"<<endl;break;
        case 50:cout<<"L"<<endl;break;
        case 100:cout<<"C"<<endl;break;
        case 500:cout<<"D"<<endl;break;
        case 1000:cout<<"M"<<endl;break;
        default:cout<<"Nqma savpadenie"<<endl;
    }
    return 0;
}
