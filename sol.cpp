#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define SQ(a) (a) * (a)

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

void decode() {
	int a, b, n, c;
	cin >> a >> b >> n;
	if(a < b) {
		c = a;
		a = b;
		b = c;
	}
	int cnt = 0;
	while(true) {
		if(cnt % 2 == 0) {
			b += a;
			c = b;
		}
		else {
			a += b;
			c = a;
		}
		cnt++;
		if(c > n) break;
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
