#include <bits/stdc++.h>
typedef long long ll;
#define fo(a,n) for(int i=a;i<n;i++)
#define w(s) while(s--)
using namespace std;
#define mod 1000000007




int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str;
	cin >> str;
	string pat = "hello";
	int start = 0;
	int arr[5] = {0};
	fo(0, str.length()) {
		if (str[i] == pat[start]) {
			arr[start] = 1;
			start++;
		}
	}
	int flag = 1;
	fo(0, 5) {
		if (arr[i] == 0) {
			flag = 0;
			break;
		}
	}

	if (flag == 1) cout << "YES" << "\n";
	else cout << "NO" << "\n";
	return 0;
}