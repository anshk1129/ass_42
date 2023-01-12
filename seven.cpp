#include<iostream>
#include<queue>
using namespace std;
int main(){
   queue<int> q,q1;
   q.push(10);
    q.push(20);
     q.push(30);
      q.push(40);
       q.push(50);
       q1.push(100);
    q1.push(200);
     q1.push(300);
      q1.push(400);
       q1.push(500);
       q.swap(q1);
       while(!q.empty()){
        cout<<q.front();
        q.pop();
cout<<endl;
       }
       while(!q1.empty()){
        cout<<q1.front();
        q1.pop();
        cout<<endl;
       }
    return 0;
}
