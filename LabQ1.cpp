#include<iostream>
using namespace std;
class Array{
    public:
    int  arr[100];
    //rotate an array n position to clockwise and counter clockwise direction
    void rotate_clockwise(int LB,int UB)
    {   cout<<"Elements after rotating "<<LB<<" positions Clockwise are : ";
        for (int i = 0; i < UB; i++)
            cout << arr[(i + LB) % UB] << " ";
        cout<<endl;
    }
    
    void rotate_anti_clockwise(int LB,int UB)
    {   cout<<"Elements after rotating "<<-LB<<" positions AntiClockwise are : ";
        for (int i = 0; i < UB; i++)
            cout << arr[(UB + i - LB) % UB] << " ";
        cout<<endl;
    }
    //List all distinct elements
    void listDistinctElement()
    {   int freq[10]={0};
        cout<<"The Distinct Elements in the array are : ";
        for (int i = 0; i < 10; i++)
        {   if(!freq[(arr[i])])
                cout<<arr[i]<<" ";
            freq[arr[i]]=1;
        }
        cout<<endl;
    }
    //frequency table showing each element and its frequencies
    void frequencyTable()
    {   int n=10;
        int a[]={1,2,3,4,5,6,7,8,9,10};
        listDistinctElement();
        cout<<"\nFrequency Table of Each Element is as follows:\n";
        for (int i = 0; i < n; i++)
        {   cout<<a[i]<<" -> ";
            for (int j = 0; j <=i; j++)
                if(a[j]==a[i])cout<<"1,";
            cout<<endl;
        }
    }
};
int main()
{
    Array arr;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    for (int i = 0; i < 10; i++)
        arr.arr[i] = a[i];

    cout << "Original Array: ";
    for (int i = 0; i < 10; i++)
        cout << arr.arr[i] << " ";
    cout << endl;

    arr.rotate_clockwise(2, 10);
    arr.rotate_anti_clockwise(3, 10);
    arr.listDistinctElement();
    arr.frequencyTable();

    return 0;
}