#include "flag.h"
#include <iostream>

unsigned char Flag::get() const{
    return mFlags;
}

void Flag::set(unsigned char f) {
    printf("%hhu\n", f);
    mFlags |= f;
}

void Flag::reset(unsigned char f) {
    // mFlags &= (f ^ 255);
    /*
        fがオフにしたい部分(01000000), ^ 255( = ^ 11111111)することで10111111になるので(反転)，それをmFlagsにかけると(&=)，64の桁だけが0になる
    */
    mFlags &= ~f;   // ~fでfを反転したものになる
}

bool Flag::check(unsigned char f) const{
    printf("%hhu\n", f);
    return ( (mFlags & f) != 0 );
}


/*
    bitにおける足し算では，記号^を使うものと，記号|を使うものがある

    ^ の場合：
        1 + 0 = 1
        1 + 1 = 0
    | の場合：
        1 + 0 = 1
        1 + 1 = 1

    フラグをオンにするにあたって既にオンだったフラグを再度オンにしてしまう場合，前者の^だとフラグがオフになってしまう
    それを防ぐために後者の|を使う
*/