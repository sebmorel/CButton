#include "cbutton.h"
#include "cmdpdlg.h"

#include <math.h>

#include <QLabel>
#include <QResizeEvent>

CLockButton::CLockButton(QWidget *parent, QString mdp) :
    QPushButton(parent)
{
    _mdp = mdp;
    QIcon icon;
    setCheckable(true);
    setIconSize(QSize(40, 40));
    icon.addFile(QString::fromUtf8(":/icones/lock_unlocked"), QSize(), QIcon::Normal, QIcon::Off);
    icon.addFile(QString::fromUtf8(":/icones/lock_locked"), QSize(), QIcon::Normal, QIcon::On);
    setIcon(icon);
    connect(this, SIGNAL(clicked(bool)), this, SLOT(_clicked(bool)));
}
CLockButton::~CLockButton(){}

void CLockButton::_clicked(bool checked){
    if (!checked){
        CMdpDlg *dlgMdp = new CMdpDlg(parentWidget(), _mdp);
        if (QDialog::Accepted != dlgMdp->exec()){
            click();
        }
    }
}

/************************************************************************************************/
/************************************************************************************************/
/************************************************************************************************/
CIconButton::CIconButton(QWidget *parent=0) :
        QPushButton(parent)
{
    QLabel * labPix = new QLabel(this);
    QLabel * labNo = new QLabel("0", labPix);
    labNo->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    labNo->setStyleSheet("QLabel {color: white}");
    setToolTip("Relance");
    setFlat(true);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    setMinimumSize(64,64);
    setMaximumSize(64,64);
}

void CIconButton::setIcon1(QString path)
{
    _icon1 = path;
}
void CIconButton::setIcon2(QString path)
{
    _icon2 = path;
}
/************************************************************************************************/
void CIconButton::resizeEvent ( QResizeEvent * event )
{
//    QLabel * m_labNo = (QLabel*)children().at(0);
    _monresize(event->size());
}
/************************************************************************************************/
void CIconButton::_monresize(int w, int h)
{
    QLabel * labPix = (QLabel*)children().at(0);
    QLabel * labNo = (QLabel*)(labPix->children()).at(0);
    labPix->resize(w, h);
    labPix->setPixmap(QPixmap((labNo->text().toInt()==0) ? (_icon1.toAscii().data()) : (_icon2.toAscii().data())).scaled(QSize(w,h), Qt::KeepAspectRatio));
    QFont font = labNo->font();
    font.setPixelSize((sqrt(2.0)/2.0)*(((h < w) ? h : w)/labNo->text().size()));
    font.setBold(true);

    labNo->setAlignment(Qt::AlignCenter);
    labNo->resize(size());
    labNo->setFont(font);

    labNo->setMargin((sqrt(2.0)/2.0));
    (labNo->text().toInt()==0) ? labNo->hide() : labNo->show();
}
/************************************************************************************************/
void CIconButton::_monresize(QSize size)
{
    _monresize(size.width(), size.height());
}
/************************************************************************************************/
void CIconButton::resize(int w, int h)
{
    QPushButton::resize(w, h);
    _monresize(w, h);
}
/************************************************************************************************/
void CIconButton::resize(QSize size)
{
    QPushButton::resize(size);
    _monresize(size);
}
/************************************************************************************************/
CIconButton::~CIconButton()
{
}
/************************************************************************************************/
void CIconButton::setText(QString text)
{
    QLabel * labPix = (QLabel*)children().at(0);
    QLabel * labNo = (QLabel*)(labPix->children()).at(0);
    labNo->setText(text);
    resize(size());
}

/************************************************************************************************/
/************************************************************************************************/
/************************************************************************************************/
CNotification::CNotification(QWidget *parent=0) :
        CIconButton(parent)
{
    setIcon1(":/icones/circle_blue");
    setIcon2(":/icones/circle_red");
}
CNotification::~CNotification()
{}

CBulleChat::CBulleChat(QWidget *parent=0) :
        CIconButton(parent)
{
    setIcon1(":/icones/email_edit");
    setIcon2(":/icones/email_edit");
}
CBulleChat::~CBulleChat()
{}

/************************************************************************************************/
/************************************************************************************************/
/************************************************************************************************/
/************************************************************************************************/
/************************************************************************************************/
/************************************************************************************************/
CButton::CButton(const QString text, QWidget *parent=0)
    : QPushButton(text, parent)
{

}

/************************************************************************************************/
CButton::~CButton(){}
/************************************************************************************************/
