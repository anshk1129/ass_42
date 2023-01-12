#include<iostream>
#include<queue>
using namespace std;
void show(queue<char>w);
int main(){
   queue<char> q;
   q.push('a');
    q.push('b');
    q.push('g');
    
       show(q);

    return 0;
}
void show(queue<char>w){
    while(!w.empty()){
     cout<<w.front()<<endl;
     w.pop();
    }
}