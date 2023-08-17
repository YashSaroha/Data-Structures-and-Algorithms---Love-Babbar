// INSERTION SORT

// ek hi loop chlega or hr pichli value se compare kra lenge next value ko
// agr pichli se km hui nayi value to uske left me insert krenge else uske
// right me insert kr denge

// best sorting algorithm, adaptable
// ek hi bari me sort krdega array ko

// best case = O(n)
// worst case = O(n^2)

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    for (int i=1 ; i<n ; i++)
    {
        int temp = arr[i];
        int j = i-1 ;
        for (j ; j>=0 ; j--)
        {
            if (arr[j] > temp)
            {
                // shift j by 1 to right side kyuki value j ke left me aayegi
                // so we need to create an empty space
                arr[j+1] = arr[j];
            }
            else
            {
                // agr value j se bdi hogi to hmne use j ke right me store krana
                // hai to loop rok denge, j ko or km nhi krenge or uske aage 
                // nyi value daal denge i.e j+1 = temp
                break;
            }
        }
        arr[j+1] = temp;
    }

    for (int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }

}

// 3 4 2 6 1 5

// 3 is sorted
// 4>3 so 3 4
// 2<4 , 2<3 so 2 3 4
// 6>4 so 2 3 4 6
// 1<4 , 1<6 , 1<3 , 1<2 so 1 2 3 4 6
// 5<6 , 5>4 so 1 2 3 4 5 6