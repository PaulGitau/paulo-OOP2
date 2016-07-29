#include <iostream>
#include <list>
#include <algorithm>
int main()
{
    using namespace std;
    list<int> lis;
    for (int a=0; a < 9; a++)
        lis.push_back(a);
    list<int>::iterator it; // declaration of a read/write iterator
    it = find(lis.begin(), lis.end(), 5); // iterate through to 5 in the list
    lis.insert(it, 10); // use list::insert(stl algorithm) to insert the value 10 before iterator
    for (it = lis.begin(); it != lis.end(); it++) // for loop with iterators,while it not referenced to end of iterator
        cout << *it << " ";//exude elements including the it
    cout << endl;
}
