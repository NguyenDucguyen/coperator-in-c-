Cho mảng A[] gồm N phần tử. Sắp xếp sao cho số có nhiều chữ số nguyên tố hơn sẽ đứng trước, trong trường hợp các số có cùng số lượng chữ số nguyên tố thì số nào xuất hiện trước in ra trước

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
18
16501 5898 7388 26663 17330 15803 6865 3695 3495 20918 4244 580 29707 5410 11716 4765 12423 10073
Output 01
Copy
17330 29707 12423 7388 26663 15803 3695 3495 4765 10073 16501 5898 6865 20918 4244 580 5410 11716

#include<bits/stdc++.h>
using namespace std;
bool nt(int n){
   if(n<=1) return false;
   for(int i=2;i<=sqrt(n);i++){
       if(n%i == 0) return false;
   }
   return true;
}
int chuso(const string &s){
    int cnt=0;
   for(int i=0;i<s.size();i++){
     if(nt((s[i]-'0'))) cnt++;
   }
   return cnt;
}
bool check(const string &s,const string &d){
     int cnt1 =chuso(s);
     int cnt2 =chuso(d);
     return cnt1>cnt2;
}
int main(){
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stable_sort(a.begin(),a.end(),check);
    for(auto it :a){
        cout<<it<<" ";
    }
}

