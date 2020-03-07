#include <iostream>
#include <cmath>
#include<vector>
#include<array>
#include<numeric>

std::array<double,3> egyilleszt(std::vector<double> v , std::vector<double> w){
   double xsum=std::accumulate(v.begin(), v.end(), 0);
   double avgx=xsum/size(v);
   double ysum=std::accumulate(w.begin() , w.end() , 0);
   double avgy=ysum/size(w);
   double x2sum=std::inner_product(v.begin() , v.end() , v.begin() , 0);
   double avgx2=x2sum/size(v);
   double y2sum=std::inner_product(w.begin() , w.end() , w.begin() , 0);
   double avgy2=y2sum/size(w);
   std::vector<double> mul;
   std::transform(v.begin() , v. end() , w.begin(), std::back_inserter(mul) , std::multiplies<double>());
   double xysum=std::accumulate(mul.begin() , mul.end() , 0);
   double avgxy=xysum/size(mul);
   double slope = (size(v)*xysum-xsum*ysum)/(size(v)*x2sum-xsum*xsum);
   double intercept = (x2sum*ysum-xsum*xysum)/(x2sum*size(v)-xsum*xsum);
   double r = (avgxy-avgx*avgy)/sqrt((avgx2-avgx*avgx)*(avgy2-avgy*avgy));
   std::array<double , 3> res{{slope , intercept , r*r}};
   return  res;
}


int main(){
    std::vector<double> xek = {-1.0 , -4.0 , -6.0 , -8.0};
    std::vector<double> yok = {2.0 , 4.0 , 6.0 , 8.0};
    std::array<double , 3> eredm = egyilleszt(xek , yok);
    std::cout<<"Az illesztett egyenes meredeksége: "<<eredm[0]<<"\nAz illesztett egyenes tengelymetszete: "<<eredm[1]<<"\nAz illesztés r négyzete: "<<eredm[2]<<std::endl;
}
