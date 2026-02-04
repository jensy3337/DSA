#include <iostream>
using namespace std;
int array[5]={10,2,36,7,19}, n=5;
void bubbleSort(){
  for(int i=0;i<n-1;i++){
    int swap =0;
    for(int j=0;j<n-i-1;j++){
      if (array[j]>array[j+1]){
        int temp;
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
        swap=1;
      }
    }
    if (swap==0){
      break;
    }
  }
}
void print()
{
  for(int i=0;i<n;i++){
    cout<<array[i]<<" \n";
  }
}
int main() {
    cout<<"before sorting array:\n";
  print();
  bubbleSort();
  cout<<"after sorting array:\n";
  print();
    return 0;
}
