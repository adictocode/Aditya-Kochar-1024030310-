// / 1) Develop a menu driven program to demonstrate the following operations of arrays:

//     1.CREATE
//     2.DISPLAY
//     3.INSERT
//     4.DELETE
//     5.LINEAR SEARCH
//     6.EXIT



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v;
void displayMenu()
{
    cout<<"Select one out of below:"<<endl;
    cout<<"1. CREATE"<<endl<<"2. DISPLAY"<<endl<<"3. INSERT"<<endl<<"4. DELETE"<<endl<<"5. LINEAR SEARCH"<<endl<<"6. EXIT"<<endl<<"Enter your input:";
}
int main()
{
    int choice;
    while(true)
    {
        displayMenu();
        cin>>choice;
    switch (choice)
    {
        int size;
        case 1:         //CREATE
        {
            v.clear();
            cout<<"Enter size of array:";
            cin>>size;
            int arr[size];
            for(int i=0;i<size;i++)
            {
                cout<<"enter the element:";
                cin>>arr[i];
            }
            for(int i=0;i<size;i++)
            {
                v.push_back(arr[i]);
            }
            cout<<"Your array is sucessfully created!!!";
            break;
        }
        case 2:           //DISPLAY
        {
            if(v.size()==0)
            {
                cout<<"No array created yet!!!"<<endl<<"Please create an array first."<<endl<<"Nothing to display:"<<endl;
            }
            for(int i=0;i<size;i++)
            {
                cout<<v[i]<<endl;
            }
            break;
        }
        case 3:          //INSERT
        {
            int element;
            cout<<"Enter the element you want to insert:";
            cin>>element;
            cout<<"Enter the position where you want to insert above element:";
            int position;
            cin>>position;
            if(position<0 || position>v.size())
            {
                cout<<"Enter valid input!!!"<<endl;
            }
            else
            {
                v.insert(v.begin()+position,element);
            }
            break;
        }
        case 4:          //DELETE
        {
            cout<<"Enter the position of element you want to delete:";
            int position;
            cin>>position;
            v.erase(v.begin()+position);
            break;
        }
        case 5:         //LINEAR SEARCH
        {
            int ele;
            cout<<"Enter the element you want to find in the array:";
            cin>>ele;
            int count=0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==ele)
                {
                    cout<<"Element found at position:"<<i<<endl;
                    count=1;
                    break;
                }
            }
            if(count==0)
            {
                cout<<"Element is not present in array:"<<endl;
            }
            break;
        }
        case 6:          //EXIT
        {
            cout<<"Exiting the program.Thank you!!!"<<endl;
            return 0;
        }
        default:
        {
            cout<<"Invalid choice!!!Try agai!!!"<<endl;
        }
        
    }
    }
    return 0;
}
