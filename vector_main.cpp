#include<iostream>
#include "vector3D.h"

using namespace std;
using namespace vector3DClass;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float aX1, aY1, aZ1;
    float aX2, aY2, aZ2;
    //cout<<"Enter the x, y, z coordinates of the head of the first vector\n";
    cin>>aX2>>aY2>>aZ2;
    //cout<<"Enter the x, y, z coordinates of the tail of the first vector\n";
    cin>>aX1>>aY1>>aZ1;

    float aX, aY, aZ;
    aX = aX2 - aX1;
    aY = aY2 - aY1;
    aZ = aZ2 - aZ1;
    //----------CONSTRUCTOR CALL----------
    vector3D A(aX, aY, aZ);

    //cout<<"Enter the x, y, z coordinates of the head of the second vector\n";
    cin>>aX2>>aY2>>aZ2;
    //cout<<"Enter the x, y, z coordinates of the tail of the second vector\n";
    cin>>aX1>>aY1>>aZ1;

    aX = aX2 - aX1;
    aY = aY2 - aY1;
    aZ = aZ2 - aZ1;
    //----------CONSTRUCTOR CALLS----------
    vector3D B(aX, aY, aZ);
    //vector3D S();//3,4,0);

    float k;
    //cout<<"Enter the constant k to perform scalar multiplication\n";
    cin>>k;




    //----------DESTRUCTORS----------
    //~vector3D();

    //----------COPY CONSTRUCTORS----------
    //vector3D(const vector3D& v);
    //void operator=(const vector3D& v);


    //----------ADDITION AND SUBTRACTION----------
    cout<<"\n----------ADDITION AND SUBTRACTION----------\n\n";
    vector3D S(0,0,0);
    S = A + B;
    cout<<"S = A + B    ->   "<<S.x<<" "<<S.y<<" "<<S.z<<" "<<endl;
    vector3D tempA = A;
    A += B;
    cout<<"A += B       ->   "<<A.x<<" "<<A.y<<" "<<A.z<<" "<<endl;
    A = tempA;

    S = A - B;
    cout<<"S = A - B    ->   "<<S.x<<" "<<S.y<<" "<<S.z<<" "<<endl;
    tempA = A;
    A -= B;
    cout<<"A -= B       ->   "<<A.x<<" "<<A.y<<" "<<A.z<<" "<<"\n\n";
    A = tempA;


    //----------SCALAR MULTIPLICATION----------
    cout<<"----------SCALAR MULTIPLICATION----------\n\n";
    vector3D P(1,1,1);
    tempA = A;
    A *= k;
    cout<<"A *= k       ->   "<<A.x<<" "<<A.y<<" "<<A.z<<" "<<endl;
    A = tempA;
    P = A * k;
    cout<<"P = A * k    ->   "<<P.x<<" "<<P.y<<" "<<P.z<<" "<<endl;

    vector3D D(1,1,1);
    tempA = A;
    A /= k;
    cout<<"A /= k       ->   "<<A.x<<" "<<A.y<<" "<<A.z<<" "<<endl;
    A = tempA;
    D = A / k;
    cout<<"D = A / k    ->   "<<D.x<<" "<<D.y<<" "<<D.z<<" "<<"\n\n";


    //----------DOT PRODUCT----------
    cout<<"----------DOT PRODUCT----------\n\n";
    float dotP;
    dotP = A.dot(B);
    cout<<"P = A.dot(B) ->   "<<dotP<<endl;
    dotP = A * B;
    cout<<"P = A * B    ->   "<<dotP<<"\n\n";


    //----------CROSS PRODUCT----------
    cout<<"----------CROSS PRODUCT----------\n\n";
    P = A.cross(B);
    cout<<"P = A.cross(B)->   "<<P.x<<" "<<P.y<<" "<<P.z<<" "<<endl;
    P = A ^ B;
    cout<<"P = A ^ B    ->   "<<P.x<<" "<<P.y<<" "<<P.z<<" "<<endl;
    tempA = A;
    A ^= B;
    cout<<"A ^= B       ->   "<<A.x<<" "<<A.y<<" "<<A.z<<" "<<"\n\n";
    A = tempA;

    //----------MAGNITUDE----------
    cout<<"----------MAGNITUDE----------\n\n";
    float mag = A.magnitude();
    cout<<"A.magnitude()-> "<<mag<<"\n\n";

    //----------UNIT VECTOR----------
    cout<<"----------UNIT VECTOR----------\n\n";
    A.normalize();
    //cout<<"Unit vector(A)-> "<<U.x<<" "<<U.y<<" "<<U.z<<" "<<endl;
    cout<<"A.normalize()-> "<<A.x<<" "<<A.y<<" "<<A.z<<" "<<"\n\n";

    return 0;
}
