#include <iostream>
using namespace std;

void marks(int* ptrarray[3])
{
    int sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < 3; i++) 
    {
        int sum = 0;
        for (int j = 0; j < 5; j++) 
        {
            cout << ptrarray[i][j] << " "; 
            sum += ptrarray[i][j]; 
        }
        if (i == 0)
            sum1 = sum;
        else if (i == 1)
            sum2 = sum;
        else if (i == 2)
            sum3 = sum;
        cout << "Sum: " << sum << endl; 
        cout << endl; 
    }
    cout << "Total sum for Subject 1: " << sum1 << endl; 
    cout << "Total sum for Subject 2: " << sum2 << endl; 
    cout << "Total sum for Subject 3: " << sum3 << endl; 
}

int main()
{
    int sub1[] = {80, 85, 90, 95, 100};
    int sub2[] = {70, 75, 80, 85, 90};
    int sub3[] = {60, 65, 70, 75, 80};

    int* ptrarray[3] = {sub1, sub2, sub3}; 

    marks(ptrarray); 

    return 0;
}
