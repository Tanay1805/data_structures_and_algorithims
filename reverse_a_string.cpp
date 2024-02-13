#include <iostream>
#include <string>
using namespace std;

void reverseAstring(string&str)
{
    int n = str.length();

    for (int i=0;i<n/2;i++)
    {
        swap(str[i],str[n-i-1]);
    }
}
int main()
{
    string sentence;
    cout<<"Enter a string you want to reverse:";
    cin>>sentence;

    reverseAstring(sentence);
    cout<<sentence;
    return 0;
}
;