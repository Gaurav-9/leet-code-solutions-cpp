#include <iostream>
#include <string>
#include <vector>

int main();
void rotateArray( std::vector<int> vector, int k );


int main()
{

std::vector<int> sampleVector = {1,2,3,4,5,6,7};
int k = 3; 

rotateArray(sampleVector,k);






    
}

void rotateArray( std::vector<int> vector, int k ){
    int size = vector.size() ;

    std::vector<int> answerVector = {0,0,0,0,0,0,0};
   
    for(int i=0;i<size;i++){

        int element = vector[i]; 
        int newIndex = i + k ;

        if(newIndex >= (size)){
            newIndex = newIndex - (size);
        }

       
         
        answerVector[newIndex] = element;
        // std::cout << answerVector[i] << std::endl;
    }

    for(int i=0;i<size;i++){

        std::cout << answerVector[i] << std::endl;
    }
}

