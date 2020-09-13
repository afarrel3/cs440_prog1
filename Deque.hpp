#include <dlfcn.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <random>
#include <unistd.h>
#include <string.h>
#include <algorithm>
#include <typeinfo>

//~ #define Deque_DEFINE(data_type)			\
	//~ Deque_##data_type:{					\
		//~ Deque_##data_type_ctor() 		\
		//~ { 								\
		//~ };								\
	//~ };									\
	
//~ #define Deque_DEFINE(data_type) 

struct MyClass {
    int id;
    char name[10];
};


class Deque_MyClass
{
private:
	char* type_name;
	size_t m_size;
	
	
public:
	Deque_MyClass(bool(*cmp)(const MyClass &o1, const MyClass &o2))
	{
		//Initially this deque contains no elements
		m_size = 0;
	};
	
	//Returns the number of elements contained within this deque object
	size_t size(void) { return m_size; };
	
	//Returns true if the number of elements equals 0
	bool empty(void) { return m_size == 0; };
	
	
};

//~ void Deque_MyClass_ctor(const Deque_MyClass &deq,
	//~ bool(*cmp)(const void *, const void *))
//~ {
	
	
//~ }
