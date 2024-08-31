Cho mảng A[] gồm N phần tử. Sắp xếp sao cho số nào có nhiều số lẻ hơn thì đứng trước, trong trường hợp nhiều số có cùng chữ số lẻ thì số nào nhỏ hơn sẽ đứng trước

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
11
4456 10493 23600 32757 6911 15236 14074 22458 32132 28596 15209
Output 01
Copy
32757 6911 10493 15209 15236 32132 14074 28596 4456 22458 23600

#include<bits/stdc++.h>
using namespace std;
int chuso(string s){
    int cnt=0;
   for(int i=0;i<s.size();i++){
     if((s[i]-'0')%2 ==1) cnt++;
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
