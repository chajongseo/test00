#include "stdafx.h"
#include "selectScene.h"


selectScene::selectScene()
{
}


selectScene::~selectScene()
{
}

HRESULT selectScene::init()
{

	return S_OK;
}

void selectScene::release()
{

}

void selectScene::update()
{

}

void selectScene::render()
{
	char str[128];

	sprintf(str, "����Ʈ ��");
	TextOut(getMemDC(), WINSIZEX / 2 - 200, WINSIZEY / 2, str, strlen(str));
}