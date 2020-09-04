#include <bits/stdc++.h>
using namespace std;
long long performPlusOperations(double a, double b) {

	double res = a - b;
	long long s = ceil(res / 10);
	return s;

}
int main(){
    int t;
	cin >> t;
	while (t--) {
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
		double a, b;
		cin >> a >> b;
		if (a == b) {
			cout << "0" << "\n";
		} else if (a > b) {
			cout << performPlusOperations(a, b) << "\n";
		} else {
			cout << performPlusOperations(b, a) << "\n";
		}
	}
    return 0;
}