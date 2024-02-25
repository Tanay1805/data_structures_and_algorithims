#include <iostream>
using namespace std;

int main()
{
    int array[10],n=0,i,item;
    cout<<"Enter the elements in the array:"<<endl;
    for (int i=0;i<10;i++)
    {
        cout<<"Enter element "<<i+1<<":";
        cin>>array[i];
    }
    cout<<"Enter the element to be added in the beginning of the array:";
    cin>>item;
    n++;
    for(int i=n;i>1;i--)
    {
        array[i-1]=array[i-2];
    }
array[0]=item;

cout<<"The array after insertion is ";
for (int i=0;i<10;i++)
{
    cout<<array[i]<<" ,";
}
return 0;
}
