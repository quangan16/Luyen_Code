#include <iostream>

struct Point {
    long long x, y;
};

struct Rectangle {
    Point topLeft;     // Top-left point of the rectangle
    Point bottomRight;
	 
	 void Input(){
		std::cin>>topLeft.x>>topLeft.y>>bottomRight.x>>bottomRight.y;
		if(topLeft.x > bottomRight.x){
			std::swap(topLeft.x, bottomRight.x);
		}
		if(topLeft.y > bottomRight.y){
			std::swap(topLeft.y, bottomRight.y);
		}
	 } // Bottom-right point of the rectangle
};

long long calculateOverlap(long long start1, long long end1, long long start2, long long end2) {
    long long overlap = std::min(end1, end2) - std::max(start1, start2);
    return overlap > 0 ? overlap : 0;
}

long long calculateCollisionArea(const Rectangle& rect1, const Rectangle& rect2) {
    long long overlapX = calculateOverlap(rect1.topLeft.x, rect1.bottomRight.x, rect2.topLeft.x, rect2.bottomRight.x);
    long long overlapY = calculateOverlap(rect1.topLeft.y, rect1.bottomRight.y, rect2.topLeft.y, rect2.bottomRight.y);
    
    // Calculate the area of overlap
    return overlapX * overlapY;
}

int main() {
    // Define two rectangles
    Rectangle rect1;
	 Rectangle rect2;

	 rect1.Input();
	 rect2.Input();
    
    // Calculate the collision area between the rectangles
    long long collisionArea = calculateCollisionArea(rect1, rect2);
    
    std::cout << collisionArea << std::endl;
    
    return 0;
}