#include<bits/stdc++.h>
using namespace std;
int main ()
{
 set<string> se;
 string s;
 while(cin>> s)
 {
 	se.insert(s);
 	cout<<se.size()<<endl;
 	cout <<*se.begin()<<" "<<*se.rbegin()<<endl;
 }
 return 0;
}


