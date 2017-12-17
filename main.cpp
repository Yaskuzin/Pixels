#include <iostream>
#include <cstdlib>
#include "MyClass.h"
#include <math.h>

int main() {
    MyClass ***array = new MyClass**[200];
    for(int i= 0;i<200;i++) {
             array[i] = new MyClass *[200];
        for (int j = 0; j < 200; j++) {
            array[i][j] = new MyClass(i-100,j-100,0,0,0);
        }
    }
    for (int i=0;i<10;i++){
       int x = rand() % 200 ;
        int y = rand() % 200 ;
      array[x][y] = new MyClass(x-100,y-100, rand() % 255,rand() % 255 ,rand() % 255 );
    }
    for (int i = 0;i<200;i++){
        for(int j= 0;j<200;j++){
            std::cout<<array[i][j]->getX()<<"  "<<array[i][j]->getY()<<" "<<array[i][j]->getR()<<" "<<array[i][j]->getG()<<"  "<<array[i][j]->getB()<<std::endl;
        }
    }


    return 0;
}