
// codechef live contest problem 26 aug 2026
 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	int k = N % 10;
	if(k!=0){
	    cout<<10-k;
	}
	else{
	    cout<<10;
	}

   return 0;
}
