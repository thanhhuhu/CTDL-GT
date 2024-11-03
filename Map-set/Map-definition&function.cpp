#include<bits/stdc++.h>
using namespace std;
int main ()
{
	// bai toan lien quan toi tan suat, tim kiem nhanh thi dung map 
	map<int,int> mp; //pair<int,int>
	mp.insert({1,2});
	mp.insert({3,4});
	mp.insert({1,4});
	mp.insert({3,2});
	mp.insert({4,1});
	//them cap (5,10)
	mp[5] =10;
	//map[key] =value;
	//key : gia tri cua phan tu ,value : tan suat cua gia tri 
	// co 2 y nghia:
	//1: neu key do chua ton tai trong map thi se them 
	//2: vi du nhu neu co 3 thi se thay doi ({3,..}) thi se thay doi value tuong ung
	mp[3] =20;
	cout << mp.size() <<endl;
 	cout << mp[5] <<endl;// xuat value ra trong key tuong ung
	// duyet map 
	// co 2 cach:
	//range base for loop 
	for(auto it :mp){
		cout <<it.first<< " "<<it.second<<endl;
	} 	
	cout << endl;
	//iterator 
	for ( auto it = mp.begin(); it != mp.end(); ++it) //begin tro toi gia tri dau tien,end tro sau vi tri cuoi
	{
		//2 cach 
//	1:rai tham chieu	cout << (*it).first <<" "<<(*it).second<<endl; 
//	2:con tro	cout << it ->first <<" "<< it ->second << endl;
	}
	return 0;
 	
//{(1,2),(3,4),(1,4),(3,2),(4,1),(5,10),}
}


