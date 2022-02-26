#include <iostream>
#include <vector>

using namespace std;

using ll = long long;
using vl = vector<ll>;

auto memo = vl(46, -1);
ll f(int n) {
	if (-1 < memo[n]) {
		return memo[n];
	}

	memo[n] = f(n - 1) + f(n - 2);
	return memo[n];
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	memo[0] = 0;
	memo[1] = 1;
	cout << f(n);

	return 0;
}