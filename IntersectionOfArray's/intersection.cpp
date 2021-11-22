#include <iostream>
#include <vector> 

int main(); 

std::vector<int> intersect ( std::vector<int> nums1, std::vector<int> nums2); 


int main() {



   std::vector<int> nums1 = {4,9,5};
   std::vector<int> nums2 = {9,4,9,8,4}; //Set Sample Test Values
    
 intersect(nums1,nums2);

    return 0; 
}


std::vector<int> intersect ( std::vector<int> nums1, std::vector<int> nums2) {


    //Logic to Swap Vectors to ensure nums1 is larger than num2.
    if(nums1.size()< nums2.size()) {
        std::vector<int> temp = nums2;
        nums2 = nums1; 
        nums1 = temp; 
    }

std::vector<int> intersection;
std::vector<int>::iterator it; 



for(int i=0;i<nums1.size();i++)
{
    for(int y=0;y<nums2.size();y++)
    {
        if(nums1[i]== nums2[y]){

            intersection.push_back(nums2[y]);
            it = nums2.begin() + y;
            nums2.erase(it);
           

        }



    }


    
}

for(int i=0;i<intersection.size();i++){
    std::cout<< intersection[i] << std::endl;
//Prints Intersection Vector Answer
}
    return intersection;
}