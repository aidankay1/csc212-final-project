#include "SegmentTreeMax.hpp"

SegmentTreeMax::SegmentTreeMax(int *array, int size) {
    tree.resize(2 * size);
    
    for (int i = 0; i < size; i++) {
        tree[size + i] = array[i];
    }

    for (int i = size - 1; i > 0; i--) {
        tree[i] = std::max(tree[2 * i], tree[2 * i + 1]);
    }
}

SegmentTreeMax::SegmentTreeMax(std::vector<int> vector) {
    int size = vector.size();
    tree.resize(2 * size);

    std::copy(vector.begin(), vector.end(), tree.begin() + size);

    for (int i = size - 1; i > 0; i--) {
        tree[i] = std::max(tree[2 * i], tree[2 * i + 1]);
    }
}

void SegmentTreeMax::Insert(int value) {

}

void SegmentTreeMax::Update(int index, int value) {
    
}

unsigned int SegmentTreeMax::Search(int value) {

}

void SegmentTreeMax::Print() {

}
