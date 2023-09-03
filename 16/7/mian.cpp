#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> Lotte(int a,int b){
    vector<int> temp;
    for(int i=1;i<=a;i++){
        temp.push_back(i);
    }
    random_shuffle(temp.begin(),temp.end());
    temp.end()=temp.begin()+1;
    return temp;
}

int main(){
    vector<int> winners;
    int x,y;
    cin>>x>>y;
    winners=Lotte(x,y);
    cout<<"this is your numbers:"<<endl;
    for(auto i : winners){
        cout<<i<<endl;
    }
    return 0;
}