#pragma once
#include "gameNode.h"
#include "bullets.h"

//�� == ������ == �θ�Ŭ��
class ship : public gameNode
{
protected:
	bullet* _bullet;

	image* _image;		//�̹��� 
	RECT _rc;			//�� ��Ʈ
	float _x, _y;		//��ǥ
	float _angle;		//����
	float _speed;		//���ǵ�
	float _radius;		//������

public:
	virtual HRESULT init(const char* imageName, int x, int y);
	virtual void release();
	virtual void update();
	virtual void render();
	
	virtual void draw();
	virtual void keyControl();
	virtual void move();

	virtual void bulletFire(void);
	virtual void bulletMove(void);
	virtual void bulletDraw(void);

	ship();
	virtual ~ship();
};

