#pragma once
#include"../gameNode.h"
#include"inven.h"

class playerClass: public gameNode
{
private:
	//이미지
	image * _img;
	
	//능력치
	string _name;
	int _hp;
	int _atk;
	int _def;

	//인벤토리
	inven _inv;

	//소지금
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

