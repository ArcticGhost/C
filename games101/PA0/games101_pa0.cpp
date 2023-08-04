#include<iostream>
#include<cmath>
#include<Eigen/Core>
using namespace std;
using namespace Eigen;
//Hello Linear algebra
void Example_for_LinearAlgebra () {
    float a = 1.0,b = 2.0;
    std::cout<< a <<std::endl;
    std::cout<< a/b <<std::endl;
    std::cout<< std::sqrt(a) <<std::endl; //square root of a
    std::cout << std::acos(-1) << std::endl; //arccos(-1)
    std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl;//sin(30)
}

//Example for eigen
void Example_for_eigen() {
    // Example of vector
    cout << "Example of vector \n";
    //Vector definition
    Vector3f v(1.0, 2.0f, 3.0f);
    Vector3f w(1.0f, 0.0f, 0.0f);
    //Vector ouput
    cout<<"Example of output \n";
    cout<< v <<endl;
    //Vector add
    cout<< "Example of add \n";
    cout<< v + w <<endl;
    //Vector scalar multiply
    cout << "Example of scalar mutiply \n";
    cout << v * 3.0f <<endl;
    cout << 2.0f * v <<endl;
    //Try dot product
    cout << "Try dot product \n";
    cout << v.dot(w) <<endl<<endl;
    // Example of matrix
    cout << "Example of matrix \n";
    //Matrix definition
    Matrix3f i,j;
    i<< 1.0, 2.0, 3.0,
        4.0, 5.0, 6.0,
        7.0, 8.0, 9.0;
    j<< 9.0, 8.0, 7.0, 
        6.0, 5.0, 4.0,
        3.0, 2.0, 1.0;
    // Matrix output
    cout<< "Example of output \n";
    cout<< "i \n";
    cout<< i <<endl<<endl;
    cout<< "j \n";
    cout<< j <<endl<<endl;
    // Matrix add i + j
    cout<< i + j <<endl<<endl;
    // Matrix scalar mutiply i * 2.0
    cout<< i * 2.0f <<endl<<endl;
    // Martix mutiply i * j
    cout<< i * j <<endl<<endl;
    // Matrix mutiply vector
    cout<< i * v <<endl<<endl;
}
// Homework pa0
void Pa0 () {
    //Define point p
    Vector3f p(2.0f, 1.0f, 1.0f);
    //Define rotation martix 45 degree
    Matrix3f rotationMartix;
    float Degree_45 = 45.0/180.0 * acos(-1),
        cos45 = cos(Degree_45),
        sin45 = sin(Degree_45);
    rotationMartix<< cos45, -sin45,  0,
                     sin45, cos45,   0,
                     0,     0,       1;
    // Define translation martix (1,2)
    Matrix3f translationMartix;
    translationMartix<< 1,  0,  1,
                        0,  1,  2,
                        0,  0,  1;
    // point after transformations
    cout<< "point after tranformations \n";
    cout<< rotationMartix <<endl<<endl<< translationMartix <<endl<<endl;
    cout<< translationMartix * rotationMartix * p <<endl;

}
int main(){
    // Example_for_eigen();
    Pa0();
    return 0;
}