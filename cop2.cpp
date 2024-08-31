Cho mảng A[] gồm N phần tử và số nguyên dương X, bạn hãy sắp xếp các phần tử trong mảng theo yêu cầu như sau : • Sắp xếp các phần tử trong mảng theo abs của hiệu của các phần tử này với X tăng dần(tính trị tuyệt đối của A[i] với X rồi sắp tăng dần). Nếu có 2 phần tử có cùng giá trị sắp xếp này thì số nào nhỏ hơn sẽ in trước.

• Sắp xếp so cho các phần tử là số chẵn đứng trước, các phần tử là số lẻ đứng sau, trong đó chẵn tăng dần, lẻ giảm dần với 1 comparator duy nhất, không tách mảng.

Gợi ý : Khai báo X toàn cục vì hàm comparison function chỉ chấp nhận 2 tham số

Đầu vào
• Dòng 1 là N và X : số lượng phần tử trong mảng và số X

• Dòng 2 là N số trong mảng

Giới hạn
• 1<=N<=10^5

• 0<=A[i], X<=10^9

Đầu ra
• Dòng 1 in ra các phần tử sau khi sắp xếp theo yêu cầu 1

• Dòng 2 in ra các phần tử sau khi sắp xếp theo yêu cầu 2

Ví dụ :
Input 01
Copy
14 26
83 86 49 15 31 81 33 10 77 38 49 86 71 28
Output 01
Copy
28 31 33 15 38 10 49 49 71 77 81 83 86 86
10 28 38 86 86 83 81 77 71 49 49 33 31 15

#include<bits/stdc++.h>
using namespace std;
int  x;
int tri(int num){
 int c = abs(num-x);
 return c;
}
bool check1(int a,int b){
  int tmp1=tri(a);
  int tmp2=tri(b);
  if(tmp1==tmp2) return a<b;
return tmp1<tmp2;
}
int main(){
    int n;
    cin>>n;
    cin>>x;
    vector<int>a(n);
    for(int i=0; i<n;i++){
          cin>>a[i];
    }
    vector<int>b;
    vector<int>c;
    for(int i=0;i<n;i++){
        if(a[i] % 2==0) b.push_back(a[i]);
        else c.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    sort(c.begin(),c.end(),greater<int>());
    sort(a.begin(),a.end(),check1);
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it :b){
        cout<<it<<" ";
    }
    for(auto it :c){
        cout<<it<<" ";
    }
}

