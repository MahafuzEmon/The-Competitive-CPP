#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: "; cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements for the array sequentially:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<n; i++)
    {
        if(arr[i] != arr[0]) //Here, we are using the concept of binary conditioning to check whether the array has same elements in all slots or not. We are assuming the array to have same element in all of it's slots. This means if we compare each element of the array with the first element, they must be equal and that indicates the array to have same element.
        {                    //If the condition gets false, this means an element is not equal to the first element of the array, which indicates that the elements in the array are not same. This is the concept used here.
            cout<<"All elements in the array aren't the same."<<endl;
            goto here;

        }
    }
    cout<<"All elements in the array are same."<<endl;
    here:
    return 0;
}
