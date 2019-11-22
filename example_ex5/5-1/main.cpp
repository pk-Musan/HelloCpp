#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, int> score;
    std::string names[] = {"Tom", "Bob", "Mike"};
    
    score[names[0]] = 100;
    score[names[1]] = 80;
    score[names[2]] = 120;

    //std::map<std::string, int>::iterator itr = score.find(names[0]);
    //std::cout << itr->second << std::endl;
    //score.erase(names[0]);

    for (int i=0; i<score.size(); i++) {
        std::cout << names[i] << "；" << score[names[i]] << std::endl;
    }

    return 0;
}

/*
    mapにおけるiterator(itr)は，
        itr->first　がkeyを
        itr->second　がvalueを
    示している
*/