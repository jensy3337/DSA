//input value from user
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



//normal
// # include <iostream>
// using namespace std;
// int main(){
//     int array[6] = {10, 20, 30, 40, 50, 60 };
//     int size = sizeof(array)/sizeof(array[0]);
//     int value = 80; 
//     array[size] = value;
//     size++ ;

//     cout << "array after inserting element at end: ";
//     for(int i = 0; i < size; i++){
//         cout << array[i] << " ";
//     }
// }
