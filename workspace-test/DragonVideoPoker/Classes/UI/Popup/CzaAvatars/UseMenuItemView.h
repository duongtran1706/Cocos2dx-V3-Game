/**
* This file is auto generated by Twin Dragons Tools
* UseMenuItemView.h
* DragonVideoPoker
*
* Created by apple on Mon Sep 22 23:42:59 GMT+07:00 2014
*
**/
#ifndef __DragonVideoPoker__UseMenuItemView__
#define __DragonVideoPoker__UseMenuItemView__
#include "cocos-ext.h"
#include "cocos2d.h"
#include "Defines.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

class UseMenuItemView : public CCMenuItemSprite {
public:
	static UseMenuItemView* create(const int& pIndex, 
							const string& pString,
							CCObject *target,
							SEL_MenuHandler selector);
	virtual bool init(const int& pIndex, 
							const string& pString,
					CCObject *target,
					SEL_MenuHandler selector);
protected:
	virtual void addSprites();
    virtual void addLabels();
    virtual void addMenus();
    virtual void addMenuItems();
private:
	enum ElementTag {
		
		dunglabelTag = 1,

		useActivespriteTag = 1,
		useNormalspriteTag = 2,

	};
	void useMenuItemCallback(CCObject *pSender);
	
	CCLabelTTF* mDungLabel;

	CCSprite* mUseActiveSprite;
	CCSprite* mUseNormalSprite;

	int mIndex;
	string mString;

	//{extend_functions_declaring}
};

#endif /* defined(__DragonVideoPoker__UseMenuItemView__) */