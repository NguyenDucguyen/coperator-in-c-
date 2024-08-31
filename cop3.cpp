Cho mảng A[] gồm N điểm trong hệ tọa độ Oxy, hãy sắp xếp các điểm này theo khoảng cách về gốc tọa độ tăng dần, nếu 2 điểm có cùng khoảng cách tới gốc tọa độ thì in ra theo hoành độ tăng dần, nếu tiếp tục 2 điểm này có cùng hoành độ thì in ra theo thứ tự tung độ tăng dần.

Đầu vào
• Dòng đầu tiên là N : số lượng điểm

• N dòng tiếp theo mỗi dòng là 2 số nguyên x, y tương ứng với hoành độ và tung độ

Giới hạn
• 1<=N<=10^5

• -1000<=x,y<=1000

Đầu ra
In ra các điểm sau khi sắp xếp

Ví dụ :
Input 01
Copy
13
-42 -76
47 43
12 7
-62 31
7 64
42 -92
-89 60
45 41
3 54
-41 40
20 -24
88 42
0 12
Output 01
Copy
0 12
12 7
20 -24
3 54
-41 40
45 41
47 43
7 64
-62 31
-42 -76
88 42
42 -92
-89 60

#include<bits/stdc++.h>
using namespace std;
double khoangcach(int a,int b){
  return sqrt((double)a*a+b*b);
}
bool check(pair<int,int>a,pair<int,int>b){
    double cnt1=khoangcach(a.first,a.second);
    double cnt2=khoangcach(b.first,b.second);
      if (cnt1 != cnt2)
        return cnt1 < cnt2;


    if (a.first != b.first)
        return a.first < b.first;


    return a.second < b.second;


}
int main(){
    int n;
    cin>>n;

    vector<pair<int,int>>A(n);
    for(int i=0;i<n;i++){
     cin>>A[i].first>>A[i].second;
    }
    sort(A.begin(),A.end(),check);
    for(auto it : A){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

