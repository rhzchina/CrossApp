

#ifndef __CCSCENE_H__
#define __CCSCENE_H__

#include "CAView.h"
#include "controller/CAViewController.h"
NS_CC_BEGIN

enum
{
    CAWindowZOderBottom = 0,
    CAWindowZOderCenter = 1,
    CAWindowZOderTop = 0xffff
};

class CC_DLL CAWindow : public CAView
{

public:

    static CAWindow *create(void);
    
    CAWindow();

    virtual ~CAWindow();
    
    bool init();
    
    void presentModalViewController(CAViewController* controller, bool animated);
    
    void dismissModalViewController(bool animated);
    
protected:

    void presentEnd();
    
    void dismissEnd();
    
protected:
    
    CC_PROPERTY(CAViewController*, m_pRootViewController, RootViewController);
    
    CC_SYNTHESIZE_READONLY(CAViewController*, m_pModalViewController, ModalViewController);
    
    CAMap<std::string, CAViewController*> m_obViewControllerMap;
};

NS_CC_END

#endif // __CCSCENE_H__
