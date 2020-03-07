#include <iostream>
#include <cmath>
#include<vector>
#include<array>
#include<numeric>

std::array<double,2> egyilleszt(std::vector<double> v , std::vector<double> w){
   double xsum=std::accumulate(v.begin(), v.end(), 0);
   double ysum=std::accumulate(w.begin() , w.end() , 0);
   double x2sum=std::inner_product(v.begin() , v.end() , v.begin() , 0);
   std::vector<double> mul;
   std::transform(v.begin() , v. end() , w.begin(), std::back_inserter(mul) , std::multiplies<double>());
   double xysum=std::accumulate(mul.begin() , mul.end() , 0);
   double slope = (size(v)*xysum-xsum*ysum)/(size(v)*x2sum-xsum*xsum);
   double intercept = (x2sum*ysum-xsum*xysum)/(x2sum*size(v)-xsum*xsum);
   std::array<double , 2> res{{slope , intercept}};
   return  res;

}

int main(){
    std::vector<double> xek = {2.0 , 4.0 , 6.0 , 8.0};
    std::vector<double> yok = {1.0 , 2.0 , 3.0 , 4.0};
    std::array<double , 2> eredm = egyilleszt(xek , yok);
    std::cout<<"Az illesztett egyenes meredeksége:"<<eredm[0]<<"\n Az illesztett egyenes tengelymetszete:"<<eredm[1]<<std::endl;
}
