class DynamicArray {
    int * data;
    int nextIndex;
    int capacity;

    public:

    DynamicArray() {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    DynamicArray(DynamicArray const &arr) {
        /*
        By default, both the default copy constructor and the default copy assignment operator in C++ perform a shallow copy.
        This means that when you create a new object by copying an existing object, the values of the non-static data members are copied directly from the source object to the destination object.
        For pointers or references within the class, only the memory addresses are copied, not the data they point to.
        */
        /* 
        //Shallow Copy
        this->data = arr.data;
        this->nextIndex = arr.nextIndex;
        this->capacity = arr.capacity;
        */

        //Deep Copy
        this->data = new int[arr.capacity];
        for(int i=0; i<arr.nextIndex; i++) {
            this->data[i] = arr.data[i];
        }
        this->nextIndex = arr.nextIndex;
        this->capacity = arr.capacity;
    }

    void operator=(DynamicArray const &arr) {
        this->data = new int[arr.capacity];
        for(int i=0; i<arr.nextIndex; i++) {
            this->data[i] = arr.data[i];
        }
        this->nextIndex = arr.nextIndex;
        this->capacity = arr.capacity;
    }

    void add(int element) {
        if(nextIndex == capacity) {
            int * newData = new int[2*capacity];
            for(int i = 0; i<capacity; i++) {
                newData[i] = data[i];
            }
            delete [] data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int i) const {
        if(i>=0 && i<nextIndex) {
            return data[i];
        }
        else {
            return -1;
        }
    }

    void add(int i, int element) {
        if(i>=0 && i<nextIndex) {
            data[i] = element;
        }
        else if (i == nextIndex) {
            add(element);
        }
        else {
            return;
        }
    }

    void print() const {
        for(int i = 0; i<nextIndex; i++) {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};
