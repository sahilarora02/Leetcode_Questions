class Solution {
public:
    int Area(int x1 , int y1 , int x2  , int y2){
        int Length = abs(x2 - x1);
        int Breadth = abs(y2 - y1);
        return Length*Breadth;
    }
    int Common(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
        int commonBreadth = 0 , commonLength = 0;
       
            for(int j = ay1 ; j<=ay2 ; j++){
                if(j>=by1 && j<=by2){
                    commonBreadth++;
                }
            }
         for(int j = ax1 ; j<=ax2 ; j++){
                if(j>=bx1 && j<=bx2){
                    commonLength++;
                }
            }
        if(commonBreadth == 0&&commonLength == 0){
            return 0;
        }
        if(commonBreadth!=0&&commonLength==0||commonBreadth==0&&commonLength!=0 ){
            return 0;
        }
        return (commonLength-1)*(commonBreadth-1);
    }
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int FirstArea = Area(ax1 , ay1 , ax2 , ay2);
        int SecondArea = Area(bx1 , by1 , bx2 , by2);
       int CommonArea = Common( ax1,  ay1,  ax2,  ay2,  bx1,  by1,  bx2,  by2);
        return (FirstArea+SecondArea)-CommonArea;
    }
};