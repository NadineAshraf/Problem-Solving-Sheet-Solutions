#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[4],sum=0;
    string s;
    for(int i=0; i<4; i++)
    cin>>arr[i];
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
    
    sum+= arr[int(s[i])-48 - 1];
    }
    cout<<sum;
    return 0;
}
