#include <iostream>
#include<ctime>
 #include<cstring>
 #include"hero.cpp"
 
 
int main() {
    clock_t start_time=clock();
     class hero sayan;
    sayan.health=10;
     
     std::cout << sizeof(sayan)<< std::endl;
    
    std::cout << sizeof(sayan)<< std::endl;
    std::cout << sizeof(sayan.name)<< std::endl;
   std::cout << sizeof(sayan.health)<< std::endl;
  std::cout << sizeof(sayan.level)<< std::endl;
        
        
       
       
       
    clock_t end_time=clock();

double long timespend=((double long )(end_time-start_time))/
CLOCKS_PER_SEC*1e6;
    std:: cout<<"time to run the code:"<<( timespend)<<"microsecond"<<std::endl;
    return 0;
}