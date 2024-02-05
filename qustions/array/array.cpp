//entire array initilized with one value
#include<iostream>
using namespace std;

void array(int array[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<" all done "<<endl;
}
int main()
{
    int n;

    int arr[5]={5,2,2,4,4};
    n=5;
    array(arr,5);

    int box[10]={2,3};
    n=10;
    array(box,10);
    
    int cube[10]={0};
    n=10;
    array(cube,10);

    int cubeSize = sizeof(cube)/sizeof(int);
    cout<<"size of array named cube : "<<cubeSize;


    // int entire[100];
    // fill_n(entire,100,-25);
    // n=25;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<entire[i];
    // }
    // cout<<" all done "<<endl;

    return 0;

}
