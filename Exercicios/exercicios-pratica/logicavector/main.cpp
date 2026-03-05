#include <iostream>
#include "array.hpp"
int main(){
    std::cout << "====[construtor]\n";
    sc::array<int> vec{7};
    std::cout<<"vec: " << vec.to_string() << std::endl;
    std::cout << "\n\n";

    std::cout << "========[push_back]\n";
    sc::array<int> vec{7};
    vec.push_back(3);
    vec.push_back(8);
    vec.push_back(2);
    std::cout<<"vec: " << vec.to_string() << std::endl;


    std::cout << "========[size,capacity]\n";
    sc::array<int> vec{7};
    vec.push_back(3);
    vec.push_back(8);
    vec.push_back(2);
    std::cout<<"vec: " << vec.to_string() << '\n';
    std::cout<<"capacity: " << vec.capacity() << '\n';
    std::cout<<"size: " << vec.size() << '\n';


    std::cout << "========[copy,ctro]\n";



    return 0;
}