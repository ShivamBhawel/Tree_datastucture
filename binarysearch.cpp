#include <iostream>
using namespace std;

int main( ) {
        
        int n;
        cout<<"Enter the size of array = ";
        cin>>n;
        
        int arr[n];
        cout<<"Enter the value one by one \n";
        for(int i=0 ;i<n ;i++)
        {
                cin>>arr[i];
        }
        
        int item;
        cout<<"enter the searching elment = ";
        cin>>item;
        
        int frist = 0,last = n-1;
        int mid = (frist+last)/2;
        
        while(frist<last){
                
                if(arr[mid]==item){
                   
                   cout<<"Element is fount at location = "<<mid+1;
                        break;
                }
                else if(arr[mid]<item){
                        
                        frist = mid + 1 ;
                        
                }
                else{
                        last = mid + 1;
                }
                
                mid = (frist + last)/2;
        }
        if(frist > last )
        {
                cout<<"Element is not fount in list ";
        }
        
	return 0;
}
