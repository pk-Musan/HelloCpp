#ifndef _RAT_H_
#define _RAT_H_

class Rat {
    private:
        int m_id;
        static int m_count;
    
    public:
        Rat();
        ~Rat();
        static void showNum();
        void squeak();
};

#endif