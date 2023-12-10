#include <iostream>
using namespace std;
int main()
{
	int x,a,r,sum=0;
	cout<<"enter your 3 digit integer";
	cin>>x;
	a=x;
	while (x!=0)
	{
		r=x%10;
		if(r==0){
			sum=sum+x;
			else{
				sum=sum+r;
			}
			x=x/10;
		}
		cout <<"the sum of digit is "<<a<<"=<<sum;
		return o;
	}
}