#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Array{
private:
    T* Data = nullptr;
    size_t sz;
    size_t cap;
    void reAlloc(size_t newCap){
        if(sz > newCap){
            sz = newCap;
        }

        T* new_Data = new T[newCap];
        for(int i = 0; i < sz; ++i){
            new_Data[i] = Data[i];
        }
        delete[] Data;
        Data = new_Data;
        cap = newCap; 
    }

public:
    Array(){
        reAlloc(2);
    }
    
    

    void push_back(T value){

        if(sz >= cap){
            reAlloc(cap + cap / 2);
        }

        Data[sz] = value;
        sz++;
    }

    size_t size() const{
        return sz;
    }
    
    T& operator[](size_t index){
        return Data[index];
    }

};



int main(){
    Array<string>data;
    data.push_back("Mohamed");
    data.push_back("sd");
    cout << data.size() << endl;
    for(int i = 0; i < data.size(); ++i){
        cout << data[i] << endl;
    }
    data.push_back("ali");
    cout << data.size() << data[2] << endl;
}

// class array1{
//     private:
//         int sz;
//         int* ptr;
//     public:
//     array1(int sz){
//         this->sz = sz;
//         ptr = (int*)alloca(sz * sizeof(int));
//     };
//     ~array1(){
//         for(int i = 0; i < sz; ++i){
//             delete (ptr+i);
//             ptr = NULL;
//         }
//     }
//     int size(){
//         return sz;
//     }
//     int& operator[](int k){
//         return *(ptr+k);
//     }
//     array1& operator = (const array1& b){
//         if(this->ptr != b.ptr){
//             for(int i = 0; i < sz; ++i){
//                 *(this->ptr + i) = *(b.ptr + i);
//             }
//         }
//         return *this;
//     }

// };

    // array1 a1(5);
    // for(int i = 0; i < a1.size(); ++i){
    //     a1[i] = 4;
    // }
    // for(int i = 0; i < a1.size(); ++i){
    //     cout << a1[i] << endl;
    // }