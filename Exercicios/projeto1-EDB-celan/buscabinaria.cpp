#include <iostream>



int *binary_search(int *first, int *last, int target){

    while (first < last) {
        int* middle = first + (last - first) / 2;
        if (*middle == target) {
            return middle;
        } else if (target < *middle) {
            last = middle; 
        } else {
            first = middle + 1; 
        }
    }
    return last; 

};

int main(){
    int V[]{ -2, 0, 1, 2, 4, 5, 9, 12 }; 
    size_t n = sizeof(V)/sizeof(V[0]);    
    int target{5};
    int* idx = binary_search(V, V + n, target);

    if (idx == V + n){
        std::cout << "Could not find target!\n";
    }else{
        std::cout << "Find target at " << (idx - V) << "\n";
    }
    return 0;
}
