#include<iostream>

using namespace std;


struct Point{
    int x, y;
    void Input(){
        cin>>x>>y;
    }
};
struct Rect{
    int a, b, c, d;

    void Input(){
        cin>>a>>b>>c>>d;
        ReEvaluate();
    }

    void ReEvaluate(){
        if(a > c){
            swap(a, c);
        }
        if(b > d){
            swap(b, d);
        }
    }

    void Output(){
        cout<<a<<b<<c<<d<<endl;
    }
};

bool Check(Rect rec, Point poi){
    return (poi.x > rec.a && poi.y > rec.b && poi.x < rec.c && poi.y < rec.d);
}

int main(){
    Rect rec;
    Point point;
    rec.Input();
    point.Input();
    // rec.Output();
    if(Check(rec, point)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}