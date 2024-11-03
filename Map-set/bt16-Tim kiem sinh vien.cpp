#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n;
	set<string> studentIDs;
	for ( int i = 0; i < n; i++ ) {
		string studentID; 
		cin >> studentID;
		
		cin.ignore();
		string studentName;
		getline(cin,studentName);
		
		studentIDs.insert(studentID);
	}
	int q; cin >> q;
	for ( int i =0; i < q; i++)
	{
		string studentName;
		string qID; cin >> qID;
		if(studentIDs.find(qID) != studentIDs.end()){
			cout <<"FOUND"<<endl;
		}else{
			cout <<"NOT FOUND"<<endl;
		}                                            	
	}
 return 0;
}


