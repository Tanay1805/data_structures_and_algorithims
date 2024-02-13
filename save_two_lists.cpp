#include <iostream> 
using namespace std; 
 
int main() 
{ 
    // declaring the lists 
    // initially sorted 
    list<int> list1 = { 10, 20, 30 }; 
    list<int> list2 = { 40, 50, 60 }; 
 
    // merge operation 
    list2.merge(list1); 
 
    cout << "List: "; 
 
    for (auto it = list2.begin(); it != list2.end(); ++it) 
        cout << *it << " "; 
 
    return 0; 
} 