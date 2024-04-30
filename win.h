#ifndef WIN_H
#define WIN_H

#include <QWidget>

class win : public QWidget
{
    Q_OBJECT

public:
    win(QWidget *parent = nullptr);
    ~win();
};
#endif // WIN_H
