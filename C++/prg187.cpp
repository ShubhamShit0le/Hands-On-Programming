#include <iostream>
using namespace std;

void Swap(int *p , int *q)
{
  int temp;

  temp = *p;

  *p = *q;

  *q = temp;


}

int main()
{
	int x = 0, y = 0;

	cout<<"\nEnter First Number : ";
	cin>>x;

	cout<<"\nEnter Second Number : ";
	cin>>y;
  
    Swap(&x ,&y);

    cout<<"\nValue of x becomes : "<<x<<"\n";
    cout<<"\nValue of x becomes : "<<y<<"\n";

    cout<<"\n";

	return 0;
}