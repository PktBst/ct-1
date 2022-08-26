//2010990555
//Test-04
//Question_1
#include <iostream>
#include <unordered_set>
using namespace std;

int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    unordered_set<int> set;

    for (int i = n - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }

        else {
            set.insert(arr[i]);
        }
    }

    if (minIndex == n) {
        return -1;
    }

    return minIndex;
}

int main()
{

    cout<<"enter the length of array : ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cout<<"enter "<<i<<" index element of array : ";
            cin>>arr[i];
    }


    int minIndex = findMinIndex(arr, n);

    if (minIndex!=-1) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }

    return 0;
}
