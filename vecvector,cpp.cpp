#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //Container containing integers declared
    vector <int> a;
    //Add elements to the container
    a.push_back(90);
    a.push_back(91);
    a.push_back(92);
    for(int x=0; x<a.size(); x++)
    {
        cout<<a[x]<<" ";
    }
    if(!a.empty())          //Checks if empty
        a.clear();          //Clears vector
    vector <int> another_vector;  //Creates another vector to store integers
    another_vector.push_back(10); //Adds to end of vector
    a.push_back(10);
    if(a==another_vector)   //To show testing equality
    {
        a.push_back(20);
    }
    for(int y=0; y<a.size(); y++)
    {
        cout<<a[y]<<" ";
    }
    return 0;}
