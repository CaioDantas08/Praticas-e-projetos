#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <algorithm>
#include <string>
#include <iomanip>
#include <iostream>

namespace sc {

    template<typename T>
    class array{

        public:
        using value_type = T;
        using pointer = T*;
        using reference = T&;
        using const_reference = const T&;
        using size_type = size_t;

        private:
        pointer m_data{nullptr};
        size_t m_capacity{0};
        size_t m_end{0};

        public:
        array(sizet sz = 0){
            m_capacity = sz;
            m_end = 0;
            m_data = new value_type{m_capacity};

            std::fill(m_data+0, m_data+m_capacity, value_type{});

        }

        array(const array& other){
            this->m_end = other.m_end;
            this->m_capacity = other.capacity;

            m_data = new value_type[other.m_capacity];
            std::copy(other.m_data,other.m_data+m_end,m_data);
        }

        ~array(){delete [] m_data;}

        std::string to_string(){
            std::ostringstream oss;
            oss << "[ ";
            for (size_t i{m_end}; i < m_end; ++i){
               oss << *(m_data+i);
               if(i+1<m_end){
                oss << ',';
               }
               oss << ' ';
            }

            oss << "], cap=" << m_capacity << "end=" << m_end;

        

            return oss.str();
            
            //[3,8,2 | 0,0,0,0], cap=7, end=3
        }

        viod clear(){
            m_end = 0;
        }

           [[nodiscard]]bool full() const {return m_end = m_capacity;}
           [[nodiscard]]bool empty() const {return m_end = 0;}
           [[nodiscard]]size_type capacity() const {return m_capacity;}
           [[nodiscard]]size_type size() const {return m_end = m_end;}

        void push_back(const_reference value){
            full();
            if(full()){
                throw std::length_error("Sorry, array is full!");
            }
            m_data[m_end++] = value;
        }

    }

}