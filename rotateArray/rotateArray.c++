#include <iostream>
#include <string>
#include <vector>

int main();
void rotateArray( std::vector<int> vector, int k );


int main()
{

std::vector<int> sampleVector = {1,2,3,4,5,6,7}; // Here you can input any array of numbers and rotate them k units!
int k = 4; 

rotateArray(sampleVector,k);

}

void rotateArray( std::vector<int> vector, int k ){
    int size = vector.size() ;
     std::vector<int> answerVector;


    for(int i=0;i<size;i++)
    {
        answerVector.push_back(0);
    }
   
   
    for(int i=0;i<size;i++){

        int element = vector[i]; 
        int newIndex = i + k ;

        if(newIndex >= (size)){
            newIndex = newIndex - (size);
        }

       
         
        answerVector[newIndex] = element;
       
    }

    for(int i=0;i<size;i++){

        std::cout << answerVector[i]; // Outputs the Completed Vector
    }
}

