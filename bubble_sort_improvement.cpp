#include <iostream>
using namespace std;

int main()
{
    int my_array[]={7,3,9,12,11};
    int n = sizeof(my_array)/sizeof(my_array[0]);

    for (int i=0;i<n-1;i++)
    {
        bool swapped = false;
        for (int j =0;j<n-i-1;j++)
        {
            if (my_array[j]>my_array[j+1])
            {
                int temp = my_array[j];
                my_array[j]=my_array[j+1];
                my_array[j+1]=true;
                swapped=true;

            }
            if(!swapped){
                break;
            }
        }
        cout<<"Sorted Array";
        for(int i = 0; i<n;i++)
        {
        cout<<my_array[i];
        }
        cout<<endl;
    }
    return 0;
}