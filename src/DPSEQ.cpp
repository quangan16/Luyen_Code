#include <iostream>
#include <string>
#include <vector>
#include <cstdint>


void InputArray(std::vector<int> &vector, int n){
    int buffer;
    while(n--){
        std::cin>>buffer;
        vector.push_back(buffer);
    }
}

void OutputArray(std::vector<int> &vector){
    for(int i:vector){
        std::cout<< i;
    }
}

int32_t Process(std::vector<int> &vector, int maxStep){
    int32_t sum = 0;
    int32_t subMaxValue;
    
    for(int i = 1; i< vector.size() - maxStep; i++){
        subMaxValue = vector[std::max(0, i - maxStep)];
        for(int j = i - maxStep; j< i;j++ ){
            
        }
    }
   

}

int main()
{

    int N, K;
    std::cin>>N>>K;
    std::vector<int> v;
    InputArray(v, N);
    OutputArray(v);
    std::cout<<std::endl;
    return 0;
}