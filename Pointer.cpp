// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=10;
//     int *p=&a;
//     cout<<"p: "<<p<<endl;//it will show the location of the variable
//     cout<<"*p: "<<*p<<endl;//it will show value of the variable it is assigned
//     cout<<"a: "<<a<<endl;//original value
//     //To change the value of a with out using a
//     *p=20;
//     cout<<endl<<"a: "<<a<<endl;//changed value

// //POINTER IN ARRAY
        

//     return 0;
// }

#include<bits/stdc++.h>

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int T; cin >> T;
	for (int case_num = 1; case_num <= T; case_num ++) {
		int N, K; cin >> N >> K;
		string S; cin >> S;
		int cur_score = 0;
		for (int i = 0; i < N/2; i++) {
			cur_score += (S[i] != S[N-1-i]);
		}

		cout << "Case #" << case_num << ": " << abs(cur_score - K) << '\n';
	}

	return 0;
}
