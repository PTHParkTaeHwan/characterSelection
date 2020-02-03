#pragma once
#include"../gameNode.h"
#include"inven.h"

class playerClass: public gameNode
{
private:
	//�̹���
	image * _img;
	
	//�ɷ�ġ
	string _name;
	int _hp;
	int _atk;
	int _def;

	//�κ��丮
	inven _inv;

	//������
	int _gold;


public:
	playerClass();
	~playerClass();
	
	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();

	void showStatus();
	void pop_inven();

};

