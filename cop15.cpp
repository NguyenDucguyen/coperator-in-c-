Cho mảng A[] gồm N phần tử được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là tìm vị trí cuối cùng của X trong mảng hoặc kết luận là X không xuất hiện.

Lưu ý bài này các bạn cần code bằng 2 cách : Tự cài đặt theo hướng dẫn trong slide và sử dụng hàm upper_bound.

Gợi ý là tìm upper_bound vs X rồi dịch trái 1 phần tử. Độ phức tạp cần đạt được cho code là O(logN)

Đầu vào
• Dòng 1 là N và X : số lượng phần tử trong mảng và X

• Dòng 2 gồm N số viết cách nhau 1 dấu cách

Giới hạn
• 1<=N<=1000

• 0<=A[i]<=10^9

Đầu ra
In ra vị trí cuối cùng (theo chỉ số tính từ 0) của phần tử X hoặc in ra -1 nếu X không xuất hiện trong mảng.

Ví dụ :
Input 01
Copy
6 3
1 2 3 3 3 4
Output 01
Copy
4

#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main () {
	int n,x;
	cin >> n>>x;
	vector <int>v;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		v.push_back(k);
	}
	auto it = upper_bound(v.begin(), v.end(), x);
	it--;
	if (it == v.end() || *it != x) cout << -1;
	else cout << it - v.begin();


	return 0;
}

