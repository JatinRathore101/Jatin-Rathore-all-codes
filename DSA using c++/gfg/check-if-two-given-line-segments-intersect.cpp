#include<bits/stdc++.h>
using namespace std;

// CHECK IF SEGMENTS INTERSECT

// https://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/
// geeks for geeks => How to check if two given line segments intersect.

/*
Orientation of an ordered triplet of points in the plane can be
–counterclockwise
–clockwise
–collinear

Two segments (p1,q1) and (p2,q2) intersect if and only if one of the following two conditions is verified

1. General Case:
– (p1, q1, p2) and (p1, q1, q2) have different orientations and
– (p2, q2, p1) and (p2, q2, q1) have different orientations.

2. Special Case
– (p1, q1, p2), (p1, q1, q2), (p2, q2, p1), and (p2, q2, q1) are all collinear and
– the x-projections of (p1, q1) and (p2, q2) intersect
– the y-projections of (p1, q1) and (p2, q2) intersect
*/

class point
{
    private:
        double x;
        double y;
    public:
        point()
        {
            x=y=0;
        }
        void setPoint(double X,double Y)
        {
            x=X;y=Y;
        }
        double getx()
        {
            return x;
        }
        double gety()
        {
            return y;
        }
};

int orientation(point p1,point p2,point p3)
{
    double x1=p1.getx(),y1=p1.gety(),x2=p2.getx(),y2=p2.gety(),x3=p3.getx(),y3=p3.gety();
    double val=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
        if(val==0)
        {
            return 0;
        }
        else if(val>0)
        {
            return 1;
        }
        else
        {
            return 2;
        }
}

bool onSegment(point A,point C,point B)
{
    // to check if C lies on AB
    double x1=A.getx(),y1=A.gety(),x2=B.getx(),y2=B.gety(),x3=C.getx(),y3=C.gety();
    if((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))==0)
    {
        if((((x3-x1)*(x3-x2))<=0)&&(((y3-y1)*(y3-y2))<=0))
        {
            return true;
        }
    }
    return false;
}

bool segmentIntersect(point p1,point p2,point p3,point p4)
{
    // general case.
    int o1,o2,o3,o4;
    o1=orientation(p1,p2,p3);
    o2=orientation(p1,p2,p4);
    o3=orientation(p3,p4,p1);
    o4=orientation(p3,p4,p2);
    if((o1!=o2)&&(o3!=o4))
    {
        return true;
    }

    // special case
    if((onSegment(p1,p3,p2)==true)||(onSegment(p1,p4,p2)==true)||(onSegment(p3,p1,p4)==true)||(onSegment(p3,p2,p4)==true))
    {
        return true;
    }
    return false;
}

int main()
{
    point v1,v2,v3,v4,v5,v6;
    v1.setPoint(0,0);
    v2.setPoint(1,2);
    v3.setPoint(3,6);
    v4.setPoint(-2,-1);
    v5.setPoint(5,7);
    v6.setPoint(9,9);

    cout<<"v1 (0,0)\nv2 (1,2)\nv3 (3,6)\nv4 (-2,-1)\nv5 (5,7)\nv6 (9,9)\n"<<std::boolalpha;

    cout<<"if v1v2 and v3v4 intersect "<<segmentIntersect(v1,v2,v3,v4)<<endl;
    cout<<"if v2v3 and v4v5 intersect "<<segmentIntersect(v2,v3,v4,v5)<<endl;
    cout<<"if v3v4 and v5v6 intersect "<<segmentIntersect(v3,v4,v5,v6)<<endl;
    cout<<"if v1v3 and v2v4 intersect "<<segmentIntersect(v1,v3,v2,v4)<<endl;
    cout<<"if v2v4 and v3v5 intersect "<<segmentIntersect(v2,v4,v3,v5)<<endl;
    cout<<"if v1v5 and v2v6 intersect "<<segmentIntersect(v1,v5,v2,v6)<<endl;
    return 0;
}

