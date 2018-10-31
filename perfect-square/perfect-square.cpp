#include <iostream>
#include <cmath>

using namespace std;

bool perfect_square(int num)
{
    float temp = sqrt(num);

    if (temp - (int)sqrt(num) == 0)
        return true;

    else return false;
}

int main()
{
    cout << "Enter a number to test!: ";
    int num;
    cin >> num;
    
    if (perfect_square(num))
    {
        cout << num << " is a perfect square!";
    }
    else
    {
        cout << num << " is not a perfect square!";
    }
}

//making it short :P
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(sqrt(n)*sqrt(n)==n)
        cout<<"perfect square"<<endl;
    else
        cout<<"Not a perfect square"<<endl;
    return 0;
}
