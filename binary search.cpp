#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter array size:";
    cin >>n;

    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cout<<"Element " << i+1 << ":";
        cin >> arr[i];
    }


    int low=0;
    int high= n-1;
    int mid = low+(high-low)/2;

    int flag=0;

    int searchValue;
    cout<< "Enter searching value: " << endl;
    cin >> searchValue;

    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(arr[mid]== searchValue)
        {
            cout << "The index of mid value " << mid << endl;
            flag=1;
            break;
        }
        if(arr[mid] > searchValue)
        {
            high =mid-1;
            cout << "The mid index : " << mid << endl;

        }
        else
        {
            low = mid +1;
            cout << "the mid index: " << mid << endl;
        }
    }
    if(flag ==0)
    {
        cout << "Not found,";
    }
    return 0;
}
