Cho mảng A[] gồm N phần tử và số nguyên K, bạn hãy đếm xem trong mảng có bao nhiêu cặp phần tử A[i], A[j] với i khác j mà có độ chênh lệnh giữa chúng bằng K.

Gợi ý : Sort mảng A[], duyệt qua từng chỉ số i trong mảng, với mỗi chỉ số i tìm vị trí đầu tiên và vị trí cuối cùng của A[i] + K để đếm số cặp phần tử có thể kết hợp với A[i] để tạo thành cặp có chênh lệnh bằng K.

Chú ý : Trường hợp k = 0 bạn có thể đếm 1 cặp nhiều lần nếu tìm kiếm từ đầu dãy.

Đầu vào
• Dòng 1 gồm N và K

• Dòng 2 gồm N phần tử trong mảng A[]

Giới hạn
• 1<=N<=10^6

• 0<=K<=10^6

• 0<=A[i]<=10^9

Đầu ra
In ra số cặp thỏa mãn

Ví dụ :
Input 01
Copy
10 2
4 2 2 6 0 8 3 1 0 7
Output 01
Copy
9
Input 02
Copy
3 0
28 28 28
Output 02
Copy
3

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long ans=0;
    for(int i=0;i<n;i++){
        int *p1 = lower_bound(a+i+1,a+n,a[i]+k);
        int *p2 = upper_bound(a+i+1,a+n,a[i]+k);
        ans+=p2-p1;

    }
 cout<<ans;


}

