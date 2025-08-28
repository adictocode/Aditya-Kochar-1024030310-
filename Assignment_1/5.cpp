// Q5 Write a program to find sum of every row and every column in a two-dimensional array.
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is:"<<sum<<endl;
        sum=0;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is:"<<sum<<endl;
        sum=0;
    }
    return 0;
} 