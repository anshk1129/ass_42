#include<iostream>
#include<queue>
using namespace std;
class applicant{
    public:
string name;
int ct;
};
void show(queue<applicant> a);
applicant entry(){
    applicant ap;
    cout<<"Enter the name "<<endl;
    cin>>ap.name;
    cout<<"Enter the current time "<<endl;
    cin>>ap.ct;
    return ap;
}

void show(queue<applicant> a){
while(!a.empty()){
    applicant temp=a.front();
    cout<<temp.name<<" " <<temp.ct<<endl;
    a.pop();
}
}
int main(){
    queue<applicant>q;
    q.push(entry());
     q.push(entry());
      q.push(entry());
       q.push(entry());
       show(q);
    return 0;
}