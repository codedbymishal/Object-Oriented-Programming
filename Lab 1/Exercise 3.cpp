#include<iostream>
using namespace std;
float convert_to_cel(float F)
{
	float C;
	C = (F-32)/1.8;
	return C;
}
int main()
{
	float fahren,cel;
	cout<<"Enter temperature in Fahrenheit: ";
	cin>>fahren;
	cel=convert_to_cel(fahren);
	cout<<"Temperature in Celcius: "<<cel<<"\u00B0C" <<"C"<<endl;
	return 0;
}