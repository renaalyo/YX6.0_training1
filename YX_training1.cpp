#include <iostream>

std::string Swimmers(short x1, short y1, short x2, short y2, short x, short y) {
    bool NW = (x < x1) && (y2 < y) ;

    bool SW = (x < x1) && (y1 > y) ;

    bool SE = (x > x2) && (y1 > y) ;

    bool NE = (x > x2) && (y2 < y) ;

    bool N = (x > x1) && (x < x2) && (y > y2);

    bool E = (x > x2) && (y < y2) && (y > y1);

    bool W = (x < x1) && (y < y2) && (y > y1);

    bool S = (x > x1) && (x < x2) && (y < y1);
    
    std::string result = "";
    if (NW) {
        result = "NW";
    }else if (SW) {
        result = "SW";
    }else if (SE) {
        result = "SE";
    }else if (NE) {
        result = "NE";
    }else if (NE) {
        result = "NE";
    }else if (E) {
        result = "E";
    }else if (W) {
        result = "W";
    }else if (S) {
        result = "S";
    }else if (N) {
        result = "N";
    }
    return result;
}

int main()
{
    short x, y, x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    std::string result = Swimmers(x1, y1, x2, y2, x, y);
    std::cout << result << "\n";
    return 0;
}
