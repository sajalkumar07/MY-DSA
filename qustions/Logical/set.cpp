#include <iostream>
#include <set>
using namespace std;

int main() {
   set <int>s;
   int setSize;
   cout<<"enter the size of set : ";
   cin>>setSize;

    cout<<"enter "<<setSize<<" element in set : ";
    for(int i=0; i<setSize; i++){    
        int elements;
        cin>>elements;
        s.insert(elements);
    }

    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;

}
