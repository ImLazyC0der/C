#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair <int,int> p1,p2;

    cout<<"Enter the X and Y coordinates of the point P1 here ";
    cin>>p1.first>>p1.second;
    cout<<"Point P1 is ("<<p1.first<<","<<p1.second<<")"<<endl;

    cout<<"Enter the X and Y coordinates of the point P2 here ";
    cin>>p2.first>>p2.second;
    cout<<"Point P1 is ("<<p2.first<<","<<p2.second<<")"<<endl;

    if(p1 == p2)
    {
        cout<<"Two distinct points are required to find a line equation"<<endl;
        return 0;
    }

    int b = p2.first - p1.first;
    int a = p2.second - p1.second;
    int c = ((b*p1.second)-(a*p1.first));
    if(a<0)
    {
        a *= (-1);
        b *= (-1);
        c *= (-1);
    }

    cout<<"Line equation is ";
    if(a != 0)
        cout<<a<<"x ";

    if(b<0)
    {
        b *= (-1);
        cout<<"+"<<b<<"y ";
    }
    else if(b==0)
    {
        cout<<"";
    }
    else
    {
        cout<<"-"<<b<<"y ";
    }

    if(c>0)
        cout<<"+"<<c;
    else if(c==0)
        cout<<"";
    else
    {
        cout<<c;
    }

    cout<<" = 0";

    return 0;
}