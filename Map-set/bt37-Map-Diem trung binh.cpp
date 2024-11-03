#include<bits/stdc++.h>
using namespace std;
//Lan:{(4,8),(2,4),(3,1)} 
double dtb (vector<pair<int,int>> v){
	int sum1 = 0;
	int sum2 = 0;
	for ( auto it : v){
		sum1 += it.first* it.second; //second cua pair;
		sum2 += it.first;
	}
	return (double)sum1/sum2;
 }
int main ()
{
	map<string, vector<pair<int,int>>> mp;
	string name;
	while(cin >> name){
		int stc, score;
		cin >> stc >> score;
		mp[name].push_back({stc,score});	
	}
	for ( auto it = mp.rbegin(); it != mp.rend(); it++)
	{
		cout <<(*it).first<<" : ";
		cout << fixed<<setprecision(2)<<dtb((*it).second) <<endl; //second cua map
	}
//	for ( pair<int,int> it : mp["Lan"]){
//		cout <<it.first<<" "<<it.second<<endl; in diem cua Lan  
 return 0;
}


