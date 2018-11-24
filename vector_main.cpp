#include<iostream>
#include "vector3D.h"
/*
#define char matX = { 1, 0 ,       0,         0,
                   0, cos(phi), -sin(phi), 0,
                   0, sin(phi),  cos(phi), 0,
                   0, 0,         0,        1} */

using namespace std;
using namespace vector3DClass;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector3D A(3,-3,1);
    vector3D B(4,9,2);
    vector3D S(3,4,0);
    //S.normalize();

    S = S/2;
    cout<<S.x<<" "<<S.y<<" "<<S.z<<" "<<endl;
    S*=2;
    cout<<S.x<<" "<<S.y<<" "<<S.z<<" "<<endl;
    //A*=2;
    //cout<<A.x<<" "<<A.y<<" "<<A.z<<" "<<endl;
    //cout<<f<<endl;
    return 0;
}
