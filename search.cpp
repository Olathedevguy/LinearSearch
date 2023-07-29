#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size, int target){
	for(int i=0; i<size; i++){
		if(arr[i]==target){
		return true;
		}
	}	
	return false;
	}
	
	int main(){
		int arr[]={2,4,6,8,10};
		int size= sizeof(arr)/sizeof(arr[0]);
		int target;
		
		cout<<"Enter what you want to find"<<endl;
		cin>>target;
		
		bool found= linearsearch(arr,size,target);
		
		if (found){
			cout<<"The element"<<target<<"is found"<<endl;
		}
		else
		{ cout<<"The element"<<target<<"is not found"<<endl;
		}
		
		return 0;
	}
