typedef struct listElementStruct listElement;
typedef void(*printData) (void *data);

typedef struct listElementStruct{
    printData printData1;
    void data;
    size_t size;
    struct listElementStruct* next;
} listElement;

int length(listElement* list) ;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size);



//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, char* data, size_t size);

//Delete the element after the given el
void deleteAfter(listElement* after);
