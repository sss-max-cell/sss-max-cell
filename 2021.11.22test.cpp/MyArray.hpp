#pragma once
#include<iostream>
using namespace std;



template<class T>
class person
{

public:
	//�вι���
	person(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//��������
	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		//Ҫ�������
		this->pAddress = new T[this->m_Capacity];
		//���н�������ԭ�е����ݽ��д��͹���
		//���TΪ���󣬶��һ�����ָ�룬������Ҫ���� = ����������Ϊ����ȺŲ��� ���� ���Ǹ�ֵ��
		// ��ͨ���Ϳ���ֱ��= ����ָ��������Ҫ���
		for (int i = 0; i++; i < this->m_size)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		//Ϊ�˷�ֹ�����=�����⣬���潫�������
		//����൱�ڸ�������Ǹ�=һ����ֵ����������֪����ľ����
		//operator������������֪��������ĳЩ����ȣ�����θ�ֵ
		MyArray& operator=(const MyArray & arr)
		{
			if (this->pAddress�� = NULL)
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

	//��������
	~person()
	{
		if (pAddress != NULL)
		{
			delect[]this->pAddress;
			this->pAdress = NULL;
		}
	}
private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����

	int m_Capacity;//ָ�������

	int m_size;//ָ���С
};