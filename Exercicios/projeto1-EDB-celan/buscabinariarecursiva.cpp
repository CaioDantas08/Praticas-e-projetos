#include <iostream>
int *binary_search(int *first, int *last, int target){
    int* middle = first + (last - first) / 2;
    if(*middle == target) return middle;
    if(target < *first || target > *last) return last;
    if(last == first) return last;
    else if(*middle > target) return binary_search(first, (middle-1), target);
    else return binary_search((middle+1), last, target);
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
