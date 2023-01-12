#include<iostream>
#include<queue>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
queue<string>q;
string n;
int ch=3;
while(ch--){
    
    cout<<"Enter three names "<<endl;
    cin>>n;
     q.push(n);

}
int sz=q.size();
string temp[sz];
for(int i=0;i<sz;i++){
temp[i]=q.front();
q.pop();
}
sort(temp,temp+sz);
for(int i=0;i<sz;i++){
q.push(temp[i]);
}
while(!q.empty()){
    cout<<q.front();
    q.pop();
}

    return 0;
}