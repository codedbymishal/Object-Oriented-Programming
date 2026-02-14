#include<iostream>
using namespace std;
void swap(int *aptr,int *bptr,int *cptr )
{
	int temp;
	temp=*aptr;
	*aptr=*bptr;
	*bptr=*cptr;
	*cptr=temp;
}
int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers: "<<endl;
	cin>>a>>b>>c;
	
	cout<<"Values Before Swap: "<<endl;
	cout<<"a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
	
	swap(&a,&b,&c);
	
	cout<<"Values After Swap: "<<endl;
	cout<<"a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
	return 0;
}