 du doan ket qua cua mot so chuong trinh sau 

quiz 1
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int a[7] ={5,5,1,2,3,4,5};
 set<int> se(a,a+7);
 auto it = se.find(7);
 --it;
 cout << *it << endl;
 return 0;
}

quiz 2
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int a[7] ={5,5,1,2,3,4,5};
 set<int> se(a,a+7);
 auto it = se.find(4);
  it -= 2;
 cout << *it << endl;
 return 0;
}

quiz 3  
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int a[7] ={5,5,1,2,3,4,5};
 set<int> se(a,a+7);
 cout << *se.begin() <<endl;
 auto it = se.end() ;
 --it; 
 cout << *it << endl;
 return 0;
}


quiz 4
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 	int a[7] ={5,5,1,2,3,4,5};
 	set<int> se(a,a+7);
	cout << *se.begin()<<endl;
	cout << *se.rbegin()<<endl; 
}

quiz 5
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 	int a[7] ={5,5,1,2,3,4,1};
 	set<int> se(a,a+7);
	auto it = se.find(3);
	--it;
	se.erase(it);
	for ( int x : a) cout << x << " ";
	return 0;
}

quiz 6
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 	int a[7] ={5,5,1,2,3,4,1};
 	set<int> se(a,a+7);
	
	for (auto it = se.rbegin(); it != se.rend(); ++ it)
	{
		cout << *it << " ";
	}
	return 0;
} 
