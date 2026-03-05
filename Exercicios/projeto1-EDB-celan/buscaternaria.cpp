#include <iostream>

int *ternary_search(int *first, int *last, int value){
    while(first < last){
        int *middle1 = first + (last - first)/3;
        int *middle2 = middle1 + (last - first)/3;

        if(value == *middle1) return middle1;
        if(value == *middle2) return middle2;

        if(value < *middle1) last = middle1;
        else if(value > *middle2) first = middle2+1;
        else {first = middle1+1; last = middle2;}
    }
    return last;
}
int main(){
    int V[]{ -2, 0, 1, 2, 4, 5, 9, 12 }; 
    size_t n = sizeof(V)/sizeof(V[0]);    
    int target{5};

    int* idx = ternary_search(V, V + n, target);

    if (idx == V + n){
        std::cout << "Could not find target!\n";
    }else{
        std::cout << "Find target at " << (idx - V) << "\n";
    }
    return 0;
}