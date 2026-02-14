#include<iostream>
using namespace std;
float find_SA(float radius)
{
	float SA;
	SA= 4*3.142*radius*radius;
	return SA;
}
float find_vol(float radius)
{
	float vol;
	vol = (4.0/3)*(3.142*radius*radius*radius);
	return vol;
}

int main()
{
	float radius,surfacearea,volume;
	cout<<"Enter radius of sphere: ";
	cin>>radius;
	surfacearea=find_SA(radius);
	cout<<"Surface area of sphere is: "<<surfacearea<<endl;
    volume=find_vol(radius);
	cout<<"Volume of sphere is: "<<volume<<endl;
	return 0;
}