#include<iostream>
#include<queue>
using namespace std;
int main(){
   queue<int> q;
   q.push(10);
    q.push(20);
     q.push(30);
      q.push(40);
       q.push(50);
       cout<<q.front();
       cout<<"\n "<<q.back();
       q.pop();

    return 0;
}
