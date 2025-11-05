#include<bits/stdc++.h>

class marks{
    int mark;
    public:
        marks(int m)
        {
            this->mark=m;
        }
        marks operator+=(int in)
        {
            mark+=in;
        }
};
