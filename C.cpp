#include<bits/stdc++.h>
using namespace std;

#define ll long long

void Print( int N )
{
    if( N==0 )
        return ;
    else
    {
        cout<<N;
        if( N>1 )
            cout<<" ";
        Print(N-1);

    }

}

int main()
{
    int N;
    cin>>N;
    Print(N);
    return 0;
}



