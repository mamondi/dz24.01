#include <iostream>

template <typename T>
class Stack {
public:
    Stack() {
        capacity = 1;
        data = new T[capacity];
        top = data;
    }

    ~Stack() {
        delete[] data;
    }

    void push(T item) {
        if (top == data + capacity) {
            // збільшуємо розмір масиву
            int new_capacity = capacity + (top - data);
            T* new_data = new T[new_capacity];
            for (int i = 0; i < capacity; i++) {
                new_data[i] = data[i];
            }
            delete[] data;
            data = new_data;
            top = data + capacity;
            capacity = new_capacity;
        }

        *top++ = item;
    }

    T pop() {
        if (top == data) {
            throw std::runtime_error("Stack underflow");
        }

        return *--top;
    }

    int size() const {
        return top - data;
    }

    bool empty() const {
        return top == data;
    }

    bool full() const {
        return top == data + capacity;
    }

    void clear() {
        top = data;
    }

private:
    int capacity;
    T* data;
    T* top;
};
