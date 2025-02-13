#include <iostream>
using namespace std;

int main(){
    double u,v,t;
    cout<<"Enter the initial and final velocity and time:";
    cin>>u>>v>>t;
    double speed=0.5*u*t+0.5*v*t;
    cout<<"The value of s is:s= "<<speed<<endl;

return 0;
}
