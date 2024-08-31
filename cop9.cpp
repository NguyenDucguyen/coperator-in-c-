Cho mảng pair A[] gồm N pair, sắp xếp mảng pair abs(first - second) tăng dần, nếu cùng abs(first - second) thì sắp theo first tăng dần, nếu first bằng nhau thì cho second giảm dần

Đầu vào
• Dòng 1 là N : số lượng phần tử trong mảng

• N dòng tiếp theo là N pair trong mảng

Giới hạn
• 1<=N<=10^6

• Các phần tử của pair là số int

Đầu ra
In ra các pair sau khi sắp xếp

Ví dụ :
Input 01
Copy
13
12 39
13 38
0 37
25 19
2 4
47 28
21 41
24 20
43 32
10 39
12 49
4 0
12 24
Output 01
Copy
2 4
4 0
24 20
25 19
43 32
12 24
47 28
21 41
13 38
12 39
10 39
0 37
12 49

#include<bits/stdc++.h>
using namespace std;
int tri(int a ,int b){
    return abs(a-b);
}
bool check(pair<int,int>a,pair<int,int>b){
    int cnt1 = tri(a.first,a.second);
    int cnt2 = tri(b.first,b.second);
    if(cnt1 != cnt2 ){
        return cnt1<cnt2;
    }
    if(a.first != b.first){
        return a.first <b.first;
    }
    return a.second>b.second;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>A(n);
    for(int i=0;i<n;i++){
     cin>>A[i].first>>A[i].second;
    }
    cout<<endl;
    sort(A.begin(),A.end(),check);
    for(auto it : A){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
