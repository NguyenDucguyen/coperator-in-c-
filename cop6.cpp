Cho mảng A[] gồm N phần tử. Sắp xếp sao cho số có nhiều chữ số 0, 6 hoặc 8 hơn đứng trước, nếu có cùng số lượng chữ số 0 6 8 thì số nào nhỏ hơn sẽ đứng trước

Đầu vào
• Dòng 1 là N : số lượng phần tử trong mảng

• Dòng 2 là N số trong mảng

Giới hạn
• 1<=N<=10^6

• 0<=A[i]<=10^9

Đầu ra
In ra các số sau khi sắp xếp

Ví dụ :
Input 01
Copy
14
25556 11105 32129 8765 25187 22479 21283 5842 4471 23648 26441 28433 23517 20475
Output 01
Copy
8765 23648 5842 11105 20475 21283 25187 25556 26441 28433 4471 22479 23517 32129

#include<bits/stdc++.h>
using namespace std;
int chuso(string s){
    int cnt=0;
   for(int i=0;i<s.size();i++){
     if((s[i]-'0') ==0 ||(s[i]-'0') ==6||(s[i]-'0') ==8 ) cnt++;
   }
   return cnt;
}
bool check(string s,string d){
     int cnt1 =chuso(s);
     int cnt2 =chuso(d);
     if(cnt1== cnt2){
        return stoi(s)<stoi(d);
     }
     return cnt1>cnt2;


}
int main(){
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),check);
    for(auto it :a){
        cout<<it<<" ";
    }
}

