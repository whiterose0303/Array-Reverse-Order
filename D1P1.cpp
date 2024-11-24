#include <iostream>
using namespace std;
int main()
{
 int a[10]= {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};
 cout << "Normal Order: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
 cout<<"Correct Order: ";
  for (int i = 9; i >= 0; --i)
  {
  cout<<a[i]<<" ";
  }
cout<<endl;
return 0;
}
