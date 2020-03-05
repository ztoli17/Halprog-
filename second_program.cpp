#include <iostream>
#include <cmath>
#include "vector.h"

int main() {
    Vector2<double> v {1.0 , 2.0};
    Vector2<double> w {3.0 , 4.0};
    std::cout<<"A két vektor összege: "<< v+w <<std::endl;
    std::cout<<"A két vektor skalárszorzata: "<< dot(v,w) <<std::endl;
    std::cout<<"A vektor hossza: "<< length(v)<<std::endl;
    std::cout<<"A vektor hossznégyzete: "<< sqlength(v)<<std::endl;
    std::cout<<"A normált vektor elemei: "<< normalize(v) <<std::endl;
    std::cout<<"A vektor balról szorozva 2-vel: "<< 2.0*v <<std::endl;
    std::cout<<"A vektor jobbról szorozva 2-vel: "<< v*2.0 <<std::endl;
    std::cout<<"A vektor osztva 2-vel: "<< v/2.0 <<std::endl;





}