#include <bits/stdc++.h>

using namespace std;

void input(vector<int> &v){
    int temp;
    while(temp!=0){
        cin>> temp;
        v.push_back(temp);
    }
        

}

void process(vector<int> &v){
    bool check = 0;
    for(int i= 0; v[i] != 0;i++){
        if(v[i]<0){
            check = 1;
            cout<<v[i]<<" ";
        }
        
    }
    if(check == 0){
        cout<<"NOT FOUND";
    }
}

int main()
{
    vector<int> v;
    input(v);
    process(v);
    
    cout<<endl;
    
    return 0;
}