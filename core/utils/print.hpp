#ifndef debug_print
#define debug_print

#include "./auto-header.hpp"

template<typename T>
void print_vector(vector<T>& vec) {
    for (auto& i : vec) {
        cout << i << ' ';
    }
    cout << endl;
}

template<typename T, typename L>
void print_vector_mapper(vector<T>& vec, L&& mapper) {
    for (T& i : vec) {
        cout << mapper(i) << ' ';
    }
    cout << endl;
}

template<typename T>
void print_unordered_set(unordered_set<T>& set) {
    for (auto& i : set) {
        cout << i << ' ';
    }
    cout << endl;
}

/**
 * For the priority_queue, traversing all elements will eventually empty all elements
 * Here the function parameter type is passed by value rather than by reference
 * There is a performance impact, please make sure that this function is not called before submitting the code
*/
template<class T, class Container, class Compare>
void print_pq(priority_queue<T, Container, Compare> pq) {
	while (!pq.empty()) {
		cout << pq.top() << ' ';
		pq.pop();
	}
	cout << endl;
}

/**
 * For the priority_queue, traversing all elements will eventually empty all elements
 * Here the function parameter type is passed by value rather than by reference
 * There is a performance impact, please make sure that this function is not called before submitting the code
*/
template<class T, class Container, class Compare, typename L>
void print_pq_mapper(priority_queue<T, Container, Compare>& pq, L&& mapper) {
	while (!pq.empty()) {
        auto i = pq.top();
		cout << mapper(i) << ' ';
		pq.pop();
	}
	cout << endl;
}

#endif
