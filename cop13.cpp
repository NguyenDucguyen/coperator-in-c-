Cho mảng A[] gồm N ký tự là chữ cái in hoa, in thường hoặc chữ số. Hãy sắp xếp các ký tự trong mảng A[] tăng dần và giảm dần về từ điển sau đó in ra màn hình.

Đầu vào
• Dòng 1 gồm N

• Dòng 2 gồm N phần tử trong mảng A[]

Giới hạn
• 1<=N<=10^6

Đầu ra
Dòng 1 in ra các ký tự theo thứ tự tăng dần về từ điển

Dòng 1 in ra các ký tự theo thứ tự giảm dần về từ điển

Ví dụ :
Input 01
Copy
6
2 8 t e c h
Output 01
Copy
2 8 c e h t
t h e c 8 2

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<char> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a.begin(),a.end(),greater<char>());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

