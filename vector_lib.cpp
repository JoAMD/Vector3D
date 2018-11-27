#include "vector3D.h"
#include<cmath>

namespace vector3DClass{

    //----------CONSTRUCTORS----------
    vector3D::vector3D():x(0.0),y(0.0),z(0.0){}
    vector3D::vector3D( float aX, float aY, float aZ ):x(aX),y(aY),z(aZ){}

    //----------DESTRUCTORS----------
    vector3D::~vector3D(){
      //Destructor code can be added here
    }

    //----------COPY CONSTRUCTORS----------
    vector3D::vector3D( const vector3D& v ):x(v.x),y(v.y),z(v.z){}
    void vector3D::operator=( const vector3D& v ){
        x=v.x;
        y=v.y;
        z=v.z;
   	}

    //----------ADDITION AND SUBTRACTION----------
    vector3D vector3D::operator+( const vector3D& v ){
        return vector3D( x + v.x, y + v.y, z + v.z);
    }
    void vector3D::operator+=( const vector3D& v ){
        x+=v.x;
        y+=v.y;
        z+=v.z;
    }
    vector3D vector3D::operator-( const vector3D& v ){
        return vector3D( x - v.x, y - v.y, z - v.z);
    }
    void vector3D::operator-=( const vector3D& v ){
        x-=v.x;
        y-=v.y;
        z-=v.z;
    }


    //----------SCALAR MULTIPLICATION----------
    void vector3D::operator*=( float k ){
        x*=k;
        y*=k;
        z*=k;
    }
    vector3D vector3D::operator*( float k ){
        return vector3D( x * k, y * k, z * k);
    }
    void vector3D::operator/=( float k ){
        x/=k;
        y/=k;
        z/=k;
    }
    vector3D vector3D::operator/( float k ){
        return vector3D( x / k, y / k, z / k);
    }


    //----------DOT PRODUCT----------
    float vector3D::dot( const vector3D& v ){
        float dotProd = x * v.x + y * v.y + z * v.z;
        return dotProd;
    }
    float vector3D::operator*( const vector3D& v ){
        float dotProd = x * v.x + y * v.y + z * v.z;
        return dotProd;
    }
    //void vector3D::operator*=( const vector3D& v ){
    //    *this = *this^v;
    //}


    //----------CROSS PRODUCT----------
    vector3D vector3D::cross( const vector3D& v ){
        return vector3D(y*v.z - z*v.y,
                        z*v.x - x*v.z,
                        x*v.y - y*v.x);
    }
    vector3D vector3D::operator^( const vector3D& v ){
        return vector3D(y*v.z - z*v.y,
                        z*v.x - x*v.z,
                        x*v.y - y*v.x);
    }
    void vector3D::operator^=( const vector3D& v ){
        *this = *this^v;
    }

    //----------MAGNITUDE----------
    float vector3D::magnitude(){
        return std::sqrt(x*x + y*y + z*z);
    }

    //----------NORMALIZE---------- 
    vector3D vector3D::normalize(){
        *this/=magnitude();
        return *this;
    }
}
