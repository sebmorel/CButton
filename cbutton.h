#ifndef CBUTTON_H
#define CBUTTON_H

#include "CButton_global.h"
#include <QPushButton>

//class CBUTTONSHARED_EXPORT CButton {
//public:
//    CButton();
//};

class CBUTTONSHARED_EXPORT CLockButton : public QPushButton
{
    Q_OBJECT
public:
    CLockButton(QWidget *parent, QString mdp="vincentestdieu");
    ~CLockButton();

private slots:
    void _clicked(bool checked);

private:
    QString     _mdp;


};


class CBUTTONSHARED_EXPORT CIconButton : public QPushButton
{
    Q_OBJECT
public:
    CIconButton(QWidget *parent);
    ~CIconButton();

    void resize(QSize);
    void resize(int, int);
    virtual void	resizeEvent ( QResizeEvent * event );
    void setText(QString text);
    void setIcon1(QString path);
    void setIcon2(QString path);

private:
    QString _icon1;
    QString _icon2;
    void _monresize(int, int);
    void _monresize(QSize);

};

class CBUTTONSHARED_EXPORT CNotification : public CIconButton
{
    Q_OBJECT
public:
    CNotification(QWidget *parent);
    ~CNotification();
};

class CBUTTONSHARED_EXPORT CBulleChat : public CIconButton
{
    Q_OBJECT
public:
    CBulleChat(QWidget *parent);
    ~CBulleChat();
};



/************************************************************************************************/
/************************************************************************************************/
/************************************************************************************************/
class CBUTTONSHARED_EXPORT CButton : public QPushButton
{
public:
    explicit CButton(const QString text, QWidget *parent);
    ~CButton();


protected:
//    virtual void resizeEvent(QResizeEvent *evt);
};

#endif // CBUTTON_H
