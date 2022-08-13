#include <bits/stdc++.h>

using namespace std;

typedef double db;

int main()
{
    
    int a , b, c, d , e, f;
    cin>>a>>b>>c>>d>>e>>f;
    db D, Dx, Dy;
    D = a * e - d * b;
    Dx = c*e - b*f;
    Dy = a*f - d *c;
    if (D == 0) {
        if (Dx == 0 && Dy == 0)
            printf("VOSONGHIEM");
        else if (Dy = !0)
            printf("VONGHIEM");
        else if (Dx != 0)
            printf("VONGHIEM");
    }
    else {
        db x = (double)Dx / D;
        db y = (double)Dy / D;
        if(x == -0.0 ) x = fabs(x);
		if(y == -0.0 ) y = fabs(y);
        printf("%.2lf %.2lf", x, y);
    }
   
    return 0;
}