#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main ()
{
   vector<int> v = {1, 2, 3, 4, 5};
   vector<int>::iterator it = v.begin();
	cout <<*it <<endl;// giai tham chieu: dereference
return 0;
}


