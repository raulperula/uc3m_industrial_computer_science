////////////////////////////////////////////////////
// point.h
////////////////////////////////////////////////////

#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

using namespace std;

namespace space {
    /**\brief This class represents a point
    */
    class Point {
        public:
            /** Empty constructor
            */
            Point();
            /** Parametrized constructor
            */
            Point(int x, int y);

            /** Copy constructor
            */
            Point(const Point & P);

            /** Destructor
            */
            ~Point();

            /** Assign operator
            */
            Point & operator=(const Point & P);

            int getX();
            int getY();
            void set(int x, int y);
            void display();
        private:
            int _x, _y;
    };
}

#endif
