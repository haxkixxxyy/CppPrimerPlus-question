#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    vector<string> Mat,Pat;
    string name;
    cout<<"please cin Mat friend's name:(q to quit)"<<endl;
    while(cin>>name&&name!="q"){
        Mat.push_back(name);
    }
    sort(Mat.rbegin(),Mat.rend());
    for(auto i : Mat) cout<<i<<" ";
    cout<<endl;
    cout<<"please cin Pat friend's name:(q to quit)"<<endl;
    while(cin>>name&&name!="q"){
        Pat.push_back(name);
    }
    sort(Pat.rbegin(),Pat.rend());
    for(auto i : Pat) cout<<i<<" ";
    cout<<endl;
    copy(Pat.begin(),Pat.end(),insert_iterator<vector<string> >(Mat,Mat.end()));
    sort(Mat.rbegin(),Mat.rend());
    for(auto i : Mat) cout<<i<<" "; 
}