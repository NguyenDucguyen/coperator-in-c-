Cho mảng A[], B[] gồm N và M phần tử, nhiệm vụ của bạn là với mỗi phần tử trong mảng A[] bạn hãy chỉ ra có bao nhiêu phần tử trong mảng B[] nhỏ hơn nó.

Gợi ý : Sort mảng B[] rồi dùng binarysearch biến đổi hoặc lowerbound, upperbound. Khi đó bạn chỉ cần duyệt qua mảng A[], với mỗi phần tử trong mảng A[] gọi hàm tìm kiếm mất O(logM) nên toàn bộ code có độ phức tạp O(NlogM).

Đầu vào
Dòng 1 là N và M

Dòng 2 là mảng A[], dòng 3 là mảng B[]

Giới hạn
• 1<=N,M<=10^6

• 0<=A[i],B[i]<=10^9

Đầu ra
In ra kết quả của bài toán

Ví dụ :
Input 01
Copy
5 8
2 8 7 2 8
9 3 7 1 0 4 1 5
Output 01
Copy
3 7 6 3 7

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(b,b+m);
    for(int x : a){
        int *p = lower_bound(b,b+m,x);
        int index = p-b;
        --index;
        cout<<index+1<<" ";
    }



}
