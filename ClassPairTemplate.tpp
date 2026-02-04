// Implement  ClassPairTemplate class constructor and print methods
template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 one, T2 two) {
    first = one;
    second = two;
}

template <typename T1, typename T2>
void Pair<T1, T2>::print() const {
    std::cout << "(" << first << ", " << second << ")" << std::endl;
}