Cho mảng A[] gồm N phần tử, bạn hãy sắp xếp các phần tử trong mảng theo yêu cầu như sau :

• Sắp xếp số lượng chữ số chẵn xuất hiện trong số tăng dần, nếu 2 số còn cùng số lượng chữ số chẵn thì số nhỏ hơn in trước.

• Sắp xếp theo số lượng chữ số lẻ xuất hiện trong số ban đầu tăng dần, nếu 2 số có cùng số lượng chữ số lẻ thì số nào xuất hiện trước sẽ in ra trước. Ở yêu cầu thứ 2 này bạn cần dùng stable_sort và áp dụng trên mảng ban đầu.

Đầu vào
• Dòng 1 là N : số lượng phần tử trong mảng

• Dòng 2 là N số trong mảng

Giới hạn
• 1<=N<=10^5

• 0<=A[i]<=10^9

Đầu ra
• Dòng 1 in ra các phần tử sau khi sắp xếp theo yêu cầu 1

• Dòng 2 in ra các phần tử sau khi sắp xếp theo yêu cầu 2

Ví dụ :
Input 01
Copy
12
4 9 5 7 15 4 13 15 1 8 4 15
Output 01
Copy
1 5 7 9 13 15 15 15 4 4 4 8
4 4 8 4 9 5 7 1 15 13 15 15

#include<bits/stdc++.h>
using namespace std;
int demchusochan(int num) {
    int count = 0;
    while (num > 0) {
        if ((num % 10) % 2 == 0)
            count++;
        num /= 10;
    }
    return count;
}
int demchusole(int num) {
    int count = 0;
    while (num > 0) {
        if ((num % 10) % 2 != 0)
            count++;
        num /= 10;
    }
    return count;
}
bool check1(int a, int b) {
    int countA = demchusochan(a);
    int countB = demchusochan(b);
    if (countA == countB)
        return a < b;
    return countA < countB;
}
bool check2(const pair<int, int>& a, const pair<int, int>& b) {
    int countA = a.second;
    int countB = b.second;

    return countA < countB;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    cin >> A[i];
    vector<int>B(N);
    for(int i=0;i<N;i++){
        B[i] = A[i];
    }
    sort(B.begin(), B.end(), check1);
    for (const auto& num : B)
    cout << num << " ";
    cout << endl;

    vector<std::pair<int, int>> b;
    for (int i = 0; i < N; ++i){
        b.push_back({A[i], demchusole(A[i])});
    }
   stable_sort(b.begin(),b.end(), check2);
    for (const auto& pair : b)
      cout << pair.first << " ";
    return 0;
}

