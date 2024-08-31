Cho mảng A[] gồm N phần tử được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là tìm vị trí đầu tiên của X trong mảng hoặc kết luận là X không xuất hiện.

Lưu ý bài này các bạn cần code bằng 2 cách : Tự cài đặt theo hướng dẫn trong slide và sử dụng hàm lower_bound. Độ phức tạp cần đạt được cho code là O(logN)

Đầu vào
• Dòng 1 là N và X : số lượng phần tử trong mảng và X

• Dòng 2 gồm N số viết cách nhau 1 dấu cách

Giới hạn
• 1<=N<=1000

• 0<=A[i]<=10^9

Đầu ra
In ra vị trí đầu tiên (theo chỉ số tính từ 0) của phần tử X hoặc in ra -1 nếu X không xuất hiện trong mảng.

Ví dụ :
Input 01
Copy
10 3
1 1 1 2 2 2 3 3 3 3
Output 01
Copy
6

#include<bits/stdc++.h>
using namespace std;
int nhiphan(int A[], int N, int X) {
    int low = 0, high = N - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (A[mid] == X) {
            result = mid;
            high = mid - 1;
        } else if (A[mid] < X) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i)
    cin >> a[i];
    int index = nhiphan(a,n,x);
    if (index != -1)
       cout << index << endl;
    else
       cout<<"-1";
    return 0;
}

