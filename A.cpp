#include<bits/stdc++.h>
using namespace std;

#define ll long long

void Print( int N )
{
    if( N==0 )
        return ;
    else
    {
        Print(N-1);
        cout<<"I love Recursion"<<endl;
    }

}

int main()
{
    int N;
    cin>>N;
    Print(N);
    return 0;
}


