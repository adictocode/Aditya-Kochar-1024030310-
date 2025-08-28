// Q4 a reverse an array
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void reversearr(int arr[],int size){ 
  int start =0; 
  int end = size -1 ; 
  while (start<end ){
    swap(arr[start],arr[end]); 
  }
  for(int i=0;i<size;i++){
    cout<<arr[i]<< " "; 
  }
}
int main() {
int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element:";
        cin>>arr[i];
    }
    reversearr(arr,size);

return 0;
}

// Q4B Matrix Multiplication
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int arr2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
//     int result[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             int sum=0;
//             for(int k=0;k<3;k++)
//             {
//                 sum=sum+arr[i][k]*arr2[k][j];
//             }
//             result[i][j]=sum;
//         }
//     }
//     cout<<"The result of matrix multiplication is:"<<endl;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Q4 c 
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++)
//     {
//         for(int j=i;j<3;j++)
//         {
//             if(i!=j)
//             {
//                 int temp=arr[i][j];
//                 arr[i][j]=arr[j][i];
//                 arr[j][i]=temp;
//             }
//         }
//     }
//     cout<<"The transpose of the given matrix is: "<<endl;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }