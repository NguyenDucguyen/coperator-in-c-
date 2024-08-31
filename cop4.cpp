Cho các điểm trong hệ tọa độ OXYZ, nhiệm vụ của bạn là sắp xếp các điểm này theo hoành độ tăng dần, nếu có cùng hoành độ thì sắp theo tung độ tăng dần, nếu có cùng tùng độ tiếp tục sắp xếp theo cao độ tăng dần. Sử dụng pair như sau để lưu các tọa độ này :

Copy
pair<int, pair<int, int>>
Đầu vào
• Dòng đầu tiên là N : số lượng điểm.

• N dòng tiếp theo mỗi dòng là 3 số nguyên x, y, z tương ứng với 1 điểm

Giới hạn
• 1<=N<=10^5

• x, y, z là số nguyên dương không quá 1000

Đầu ra
In ra các điểm sau khi sắp xếp

Ví dụ :
Input 01
Copy
12
37 4 54
37 25 75
88 46 30
40 40 90
87 99 80
73 76 49
20 95 25
52 3 8
65 79 56
88 65 87
51 50 12
87 29 44
Output 01
Copy
20 95 25
37 4 54
37 25 75
40 40 90
51 50 12
52 3 8
65 79 56
73 76 49
87 29 44
87 99 80
88 46 30
88 65 87

#include<bits/stdc++.h>
using namespace std;

bool check(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b){
    if(a.first != b.first)
        return a.first<b.first;
    if(a.second.first != b.second.first)
        return a.second.first<b.second.first;


return a.second.second<b.second.second;
}
int main(){
    int n;
    cin>>n;

    vector<pair<int,pair<int,int>>>A(n);
    for(int i=0;i<n;i++){
     cin>>A[i].first>>A[i].second.first>>A[i].second.second;
    }
    cout<<endl;
    sort(A.begin(),A.end(),check);
    for(auto it : A){
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    }
}
