class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int n1=max(x1,min(xCenter,x2));
        int n2=max(y1,min(yCenter,y2));
        int a=xCenter-n1;
        int b=yCenter-n2;
        return a * a+ b * b <= radius * radius;
        
    }
};