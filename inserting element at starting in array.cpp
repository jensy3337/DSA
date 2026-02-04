#include <iostream>
using namespace std;
int main()
{
    int array[10] = {3, 9, 41, 16, 7},n=5,x;
    cout << "current array: ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"   ";
    }
    cout << endl;
    cout<<"enter element to be inserted at start: ";
    cin>>x;
    for(int i=n;i>0;i--)
    {
        array[i]=array[i-1];
    }
    array[0]=x;
    n++;
    cout<<"array after insertion: ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"   ";
    }
    cout<<endl;
    return 0;
}
