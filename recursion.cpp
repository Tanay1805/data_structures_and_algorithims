#include <iostream>
using namespace std;

int main()
{
    int my_array[]={1,2,3,4,5};
    int size=sizeof(my_array)/sizeof(my_array[0]);
    int minVal=my_array[0];
    
    for (int i=0;i<size;i++)
    {
        if (my_array[i]<minVal)
        {
            minVal=my_array[i];
        }
            }
    cout<<("Lowest Value:",minVal);
}
