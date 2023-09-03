#include"cd.h"
#include<iostream>
using namespace std;

void bravo(const Cd &disk){
    disk.Report();
}
int main(){
    Cd c1("Beatles","Capital",14,35.5);
    Classic c2=Classic("piano sonata in B flat, Fantasia in C",
                        "Alfred Brendel","philips",2,57.17);
    Cd *pcd=&c1;
    c1.Report();
    c2.Report();
    pcd->Report();
    pcd=&c2;
    pcd->Report();
    bravo(c1);
    bravo(c2);
    Classic copy;
    copy=c2;
    copy.Report();
    return 0;
}