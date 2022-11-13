#include <iostream>
using namespace std;

template <class T>

void Swap(T *p , T *q)
{
  T temp;

  temp = *p;

  *p = *q;

  *q = temp;


}

int main()
{
	char x = '\0', y = '\0';

	cout<<"\nEnter First Value : ";
	cin>>x;

	cout<<"\nEnter Second Value : ";
	cin>>y;
  
    Swap(&x ,&y);

    cout<<"\nValue of x becomes : "<<x<<"\n";
    cout<<"\nValue of x becomes : "<<y<<"\n";

    int i = 0, j = 0;

  cout<<"\nEnter First Value : ";
  cin>>i;

  cout<<"\nEnter Second Value : ";
  cin>>j;
  
    Swap(&i ,&j);

    cout<<"\nValue of x becomes : "<<i<<"\n";
    cout<<"\nValue of x becomes : "<<j<<"\n";


    cout<<"\n";

	return 0;
}