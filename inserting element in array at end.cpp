#include <iostream>
using namespace std;
int main()
{
    int array[] = {3, 8, 54, 23},n=4,x;
    cout << "current array: ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"   ";
    }
    cout<<"   ";
    cout<<"enter element to be inserted at end: ";
    cin>>x;
    array[n]=x;
    n++;
    cout<<"array after insertion: ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"   ";
    }
    
    return 0;
}
