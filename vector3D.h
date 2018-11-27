#ifndef vec
#define vec

namespace vector3DClass{
    class vector3D{
        public :
            float x, y, z;

        //----------CONSTRUCTORS----------
        vector3D();
        vector3D(float aX, float aY, float aZ);

        //----------DESTRUCTORS----------
        ~vector3D();

        //----------COPY CONSTRUCTORS----------
        vector3D(const vector3D& v);
        void operator=(const vector3D& v);

        //----------ADDITION AND SUBTRACTION----------
        vector3D operator+(const vector3D& v);
        void operator+=(const vector3D& v);
        vector3D operator-(const vector3D& v);
        void operator-=(const vector3D& v);

        //----------SCALAR MULTIPLICATION----------
        void operator*=(float k);
        vector3D operator*(float k);
        void operator/=(float k);
        vector3D operator/(float k);

        //----------DOT PRODUCT----------
        float dot(const vector3D& v);
        float operator*(const vector3D& v);

        //----------CROSS PRODUCT----------
        vector3D cross(const vector3D& v);
        vector3D operator^(const vector3D& v);
        void operator^=(const vector3D& v);

        //----------MAGNITUDE----------
        float magnitude();

        //----------UNIT VECTOR----------
        vector3D normalize();

    };
}
#endif
