#include"wine.h"

Wine::Wine(const char* l,const int y,const int yr[],const int bot[]):string(l) //先用默认的创建,然后才能赋值
{
    years=y;
    valarray<int> temp1(years);
    valarray<int> temp2(years);
    for(int i=0;i<years;i++){
        temp1[i]=yr[i];
        temp2[i]=bot[i];
    }
    PairInt::operator=(PairInt(temp1,temp2));
}
Wine::Wine(const char* l,int y):string(l)
{
    years=y;   
}
void Wine::GetBottles(){
    cout<<"enter gully wash data for "<<years<<" year(s);\n";
    valarray<int> temp1(years);
    valarray<int> temp2(years);
    for(int i=0;i<years;i++){
        cout<<"enter year: ";
        cin>>temp1[i];
        cout<<"enter bottles for that year: ";
        cin>>temp2[i];
    }
    PairInt::operator=(PairInt(temp1,temp2));
}
string & Wine::Label()
{
    return (string &)*this;
}
void Wine::show() const
{
    cout<<"Wine: "<<(string &)*this<<endl;
    cout<<"\t year    bottles\n";
    for(int i=0;i<years;i++){
        cout<<"\t "<<(PairInt &)*this.first[i]<<"    "<<wines.second[i]<<endl;
    }
}
int Wine::sum() const
{
    int total=0;
    for(int i=0;i<years;i++){
        total+=wines.second[i];
    }
    return total;
}