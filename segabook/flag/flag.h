#ifndef _FLAG_H_
#define _FLAG_H_

class Flag {
    private:
        unsigned char mFlags;

    public:
        unsigned char get() const;
        void set(unsigned char f);
        void reset(unsigned char f);
        bool check(unsigned char f) const;
};

#endif