#include<bits/stdc++.h>
using namespace std;
int tim (string s, char x)
{
	for ( int i =0; i < s.length(); i++)
	{
		if (s[i] == x) return i;
 	}
 	return 0;
}
//s ="abcd"
//s.substr(0)="abc"
int main ()
{
	// truoc getline (doc het 1 dong, co khoang trang) ma la cin thi phai co cin.ignore()
	int n; cin >> n;
	int a[n];
	map<string,multiset<string>> mp;
	for ( int i = 0; i < n; i++ ){
		cin.ignore();
		string s;
		getline(cin,s);
		int pos = tim(s,'-');
		string t1 = s.substr(0,pos-1);// lay tu vi tri 0 den vi tri - 1
		string t2 = s.substr(pos+2);// lay tu vi tri bat dau tro ve cuoi
		mp[t1].insert(t2);
		mp[t2].insert(t1);
	}
	for ( auto it : mp)
	{
		cout << it.first << " : ";
		for ( string x : it.second)
		{
			cout << x << " ";
		}
		cout << endl;
	}
 return 0;
}


