#include<iostream>
using namespace std;
int main (){

		int ar[]={ 19, 45, 34, 35};
		cout<<" The Value of array is :";
		for(int i=0; i<4; i++){
		cout<<ar[i]<<" ";
		}
		
		for(int i=0; i<4; i++)
		{	
			for(int j=0; j<4; j++)
			{
			if(ar[i]<ar[j]){
			int temp = ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
			}
	}
	cout<<endl;
	
}
cout<<"After sorted array is:";
	for(int i=0; i<4; i++){
		cout<<ar[i]<<" ";
}

		return 0;
}

