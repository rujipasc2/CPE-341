#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

#include <cmath>

int main() {
    
    int i=0,a;
    
    srand (time(NULL));
     
    for(i=0;i<100;i++){
        a=rand();
        std::cout << a << std::endl;
    }
}
