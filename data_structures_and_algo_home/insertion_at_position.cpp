#include <iostream>
using namespace std;

int main()
{
    int n=0,i,position,item,m;
    cout<<"Enter the number of elements in the list:";
    cin>>m;
    int array1[m];

    for (int i=0;i<m;i++)
    {
        cout<<"Enter element "<<i+1<<":";
        cin>>array1[i];
    }
    
    cout<<"The element you want to add in the array:";
    cin>>item;
    cout<<"The position you want to add the element:";
    cin>>position;

    for (int i=n;i>position;i++)
    {
        array1[i-1]=array1[i-2];
    }
    array1[position-1]=item;
    n++;

    cout<<"The array with adding an element at some position is:"<<endl;
    for(int i =0;i<m;i++)
    {
        cout<<array1[i]<<" ,";
    }
}