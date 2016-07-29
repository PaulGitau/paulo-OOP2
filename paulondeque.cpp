#include <iostream>
#include <deque>
int main()
{
    using namespace std;

    deque<int> dequ;
    for (int a=0; a < 39; a++)
    {
        //Allow insertion of elements from both positions of the array,front and back
        dequ.push_back(a);
        dequ.push_front(51 - a);
    }

    for (int t=0; t < dequ.size(); t++)
        cout << dequ[t] << " ";

    cout << endl;
}
