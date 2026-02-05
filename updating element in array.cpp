#include <iostream>
using namespace std;
int main()
{
  int a[5],i,index,newElement;
  cout<<"enter array elements: ";
  for(i=0;i<=4;i++)
    cin>>a[i];
  cout<<"orignal array:";
  for(i=0;i<=4;i++)
    cout<<a[i]<<"  ";
  cout<<"enter index of element to update:";
  cin>>index;
  cout<<"enter the new element:";
  cin>>newElement;
  a[index]=newElement;
  cout<<"array elements after update opertion:";
  for(i=0;i<=4;i++)
    cout<<a[i]<<"  ";
}
