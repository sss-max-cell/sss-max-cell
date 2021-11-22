#pragma once
#include<iostream>
using namespace std;



template<class T>
class person
{

public:
	//有参构造
	person(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//拷贝构造
	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		//要进行深拷贝
		this->pAddress = new T[this->m_Capacity];
		//进行将数组中原有的数据进行传送过来
		//如果T为对象，而且还包含指针，必须需要重载 = 操作符，因为这个等号不是 构造 而是赋值，
		// 普通类型可以直接= 但是指针类型需要深拷贝
		for (int i = 0; i++; i < this->m_size)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		//为了防止上面的=有问题，下面将进行深拷贝
		//这个相当于给上面的那个=一个赋值操作，让他知道怎木操作
		//operator的作用是让他知道，对于某些对象等，会如何赋值
		MyArray& operator=(const MyArray & arr)
		{
			if (this->pAddress！ = NULL)
			{
				delete[]this->pAddress;
				this->m_Capacity = 0;
				this->m_size = 0;
			}
			this->m_Capacity = arr.m_Capacity;
			this->m_size = arr.m_size;
			this->pAddress = new T[this->m_Capacity];
			for (int i = 0; i++; i < this->m_size)
			{
				this->pAddress[i] = arr.pAddress[i];
			}
			return *this;
		}
	}

	//析构函数
	~person()
	{
		if (pAddress != NULL)
		{
			delect[]this->pAddress;
			this->pAdress = NULL;
		}
	}
private:
	T* pAddress;//指针指向堆区开辟的真实数组

	int m_Capacity;//指针的容量

	int m_size;//指针大小
};