#include <iostream>
#include <stack>
#include <queue>

template<typename T, std::size_t S>
std::size_t array_length(const T (&)[S]){
    return S;
}

int main() {
    std::stack<int> stk;
    std::queue<int> que;

    int data[] = {1, 2, 3};
    for (int i = 0; i < array_length(data); i++) {
        stk.push(data[i]);
        que.push(data[i]);
    }

    std::cout << "stack：";
    while (!stk.empty()) {
        std::cout << stk.top() << " ";
        stk.pop();
    }
    std::cout << std::endl;

    std::cout << "queue：";
    while (!que.empty()) {
        std::cout << que.front() << " ";
        que.pop();
    }
    std::cout << std::endl;

    return 0;
}