
#include <iostream>
#include <map>
#include <string>
int main()
{
    using namespace std;
    map<int, string> mymap;
    mymap.insert(make_pair(4, "Gitau"));
    mymap.insert(make_pair(2, "Derrick"));
    mymap.insert(make_pair(1, "Paul"));
    mymap.insert(make_pair(3, "Nicholas"));
    mymap.insert(make_pair(6, "Informatics"));
    mymap.insert(make_pair(5, "Gichaga"));

    map<int, string>::const_iterator it; // declaration of an iterator,this case a read-only iterator
    it = mymap.begin(); // reference to the start of the vector
    while (it != mymap.end()) //while loop implemented i.e while iterator is not referenced to the end.
    {
        cout << it->first << "=" << it->second << " "; // exude element it points to
        ++it; // and pre-increment(iterate) to the next element
    }

    cout << endl;}

