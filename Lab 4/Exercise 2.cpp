#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr; //pointer to dynamically allocated array in heap
    int capacity; // total memory allocated
    int currentSize; // number of elements actually stored
public:
    DynamicArray(int size) { // parametrized constructor
        capacity = size; // size is initial capacity
        currentSize = 0; // initially, array has no elements stored.
        arr = new int[capacity]; //dynamically allocate memory in heap for capacity integers

        for (int i = 0; i < capacity; i++) 
		{
            arr[i] = 0; // initialize all elements to 0
        }
    }

    // push function to add elements at the end of array
    void push(int value) {

        // if array is full, double the capacity
        if (currentSize == capacity) 
		{
            int newCapacity = capacity * 2;
            int* newArr = new int[newCapacity]; //create a new larger array.

            // copy old elements
            for (int i = 0; i < capacity; i++) 
			{
                newArr[i] = arr[i];
            }

            delete[] arr; // delete old memory to prevent memory leak
            arr = newArr; // point arr to new bigger array.
            capacity = newCapacity; //update capacity
        }

        // add new element at next available index
        arr[currentSize] = value;
        currentSize++; //inc number os stored elements
    }

    // returns number of elements stored
    int size() const {
        return currentSize;
    }

    // display stored elements
    void display() const {
        for (int i = 0; i < currentSize; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // destructor runs automatically when object is destroyed, frees dynamically allocated memory to prevent memory leak
    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {

    DynamicArray obj(3); //creates object with initial capacity = 3.

    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);  // This will trigger resizing
    //When pushing 40: currentSize = 3.capacity = 3. Array is full. Capacity doubles to 6. Elements copied. 40 inserted.
    
    cout << "Elements: ";
    obj.display(); //prints stored elements

    cout << "Size: " << obj.size() << endl; //returns number of elements stored.

    return 0;
}

