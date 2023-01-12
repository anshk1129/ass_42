#include<iostream>
#include<queue>
using namespace std;
void show(queue<int>w);
int main(){
   queue<int> q;
   q.push(10);
    q.push(20);
     q.push(30);
      q.push(40);
       q.push(50);
       show(q);
cout<<q.front();

    return 0;
}
void show(queue<int>w){
    while(!w.empty()){
     cout<<w.front()<<endl;
     w.pop();
    }
}