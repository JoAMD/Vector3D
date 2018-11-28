#include<iostream>
#include<cmath>
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
    vector3D vector1(aX, aY, aZ);

    //cout<<"Enter the x, y, z coordinates of the head of the second vector\n";
    cin>>aX2>>aY2>>aZ2;
    //cout<<"Enter the x, y, z coordinates of the tail of the second vector\n";
    cin>>aX1>>aY1>>aZ1;

    aX = aX2 - aX1;
    aY = aY2 - aY1;
    aZ = aZ2 - aZ1;
    //----------CONSTRUCTOR CALLS----------
    vector3D vector2(aX, aY, aZ);
    //vector3D S();//3,4,0);

    float k;
    //cout<<"Enter the constant k to perform scalar multiplication\n";
    cin>>k;


    //----------ADDITION AND SUBTRACTION----------
    cout<<"\n----------ADDITION AND SUBTRACTION----------\n\n";
    vector3D sum(0,0,0);
    sum = vector1 + vector2;
    cout<<"sum        = vector1 + vector2    ->   "<<sum.x<<"i + "<<sum.y<<"j + "<<sum.z<<"k "<<endl;
    vector3D tempA = vector1;
    vector1 += vector2;
    cout<<"vector1   += vector2              ->   "<<vector1.x<<"i + "<<vector1.y<<"j + "<<vector1.z<<"k "<<endl;
    vector1 = tempA;

    vector3D difference = vector1 - vector2;
    cout<<"difference = vector1 - vector2    ->   "<<difference.x<<"i + "<<difference.y<<"j + "<<difference.z<<"k "<<endl;
    tempA = vector1;
    vector1 -= vector2;
    cout<<"vector1   -= vector2              ->   "<<vector1.x<<"i + "<<vector1.y<<"j + "<<vector1.z<<"k "<<"\n\n";
    vector1 = tempA;


    //----------SCALAR MULTIPLICATION----------
    cout<<"----------SCALAR MULTIPLICATION----------\n\n";
    vector3D scalarProd(1,1,1);
    tempA = vector1;
    vector1 *= k;
    cout<<"vector1   *= k                    ->   "<<vector1.x<<"i + "<<vector1.y<<"j + "<<vector1.z<<"k "<<endl;
    vector1 = tempA;
    scalarProd = vector1 * k;
    cout<<"scalarProd = vector1 * k          ->   "<<scalarProd.x<<"i + "<<scalarProd.y<<"j + "<<scalarProd.z<<"k "<<endl;

    vector3D quotient(1,1,1);
    tempA = vector1;
    vector1 /= k;
    cout<<"vector1   /= k                    ->   "<<vector1.x<<"i + "<<vector1.y<<"j + "<<vector1.z<<"k "<<endl;
    vector1 = tempA;
    quotient = vector1 / k;
    cout<<"quotient   = vector1 / k          ->   "<<quotient.x<<"i + "<<quotient.y<<"j + "<<quotient.z<<"k "<<"\n\n";


    //----------MAGNITUDE----------
    cout<<"----------MAGNITUDE----------\n\n";
    float mag1 = vector1.magnitude();
    cout<<"vector1.magnitude()               -> "<<mag1<<"\n\n";
    float mag2 = vector2.magnitude();
    cout<<"vector2.magnitude()               -> "<<mag2<<"\n\n";

    //----------UNIT VECTOR----------
    cout<<"----------UNIT VECTOR----------\n\n";
    tempA = vector1;
    vector1.normalize();
    //cout<<"Unit vector(vector1)-> "<<U.x<<"i + "<<U.y<<"j + "<<U.z<<"k "<<endl;
    cout<<"vector1.normalize()               -> "<<vector1.x<<"i + "<<vector1.y<<"j + "<<vector1.z<<"k "<<"\n\n";
    vector1 = tempA;


    //----------DOT PRODUCT----------
    cout<<"----------DOT PRODUCT----------\n\n";
    float dotProd;
    dotProd = vector1.dot(vector2);
    cout<<"Prod = vector1.dot(vector2)       ->   "<<dotProd<<endl;
    dotProd = vector1 * vector2;
    cout<<"Prod = vector1 * vector2          ->   "<<dotProd<<"\n\n";


    //----------CROSS PRODUCT----------
    cout<<"----------CROSS PRODUCT----------\n\n";
    vector3D crossProd = vector1.cross(vector2);
    cout<<"crossProd = vector1.cross(vector2)->   "<<crossProd.x<<"i + "<<crossProd.y<<"j + "<<crossProd.z<<"k "<<endl;
    crossProd = vector1 ^ vector2;
    cout<<"crossProd = vector1 ^ vector2     ->   "<<crossProd.x<<"i + "<<crossProd.y<<"j + "<<crossProd.z<<"k "<<endl;
    tempA = vector1;
    vector1 ^= vector2;
    cout<<"vector1  ^= vector2               ->   "<<vector1.x<<"i + "<<vector1.y<<"j + "<<vector1.z<<"k "<<"\n\n";
    vector1 = tempA;


    //----------PROJECTION----------
    cout<<"----------PROJECTION----------\n\n";
    float projection2on1 = dotProd / mag1;
    cout<<"Projection of vector 2 on vector 1 -> "<<projection2on1<<"\n\n";


    //----------ANGLE----------
    cout<<"----------ANGLE----------\n\n";
    float angle = acos(projection2on1 / mag2);
    cout<<"Angle between vector1 and vector 2 using dot product -> "<<180 * angle / M_PI<<" degrees"<<"\n\n";


    return 0;
}
