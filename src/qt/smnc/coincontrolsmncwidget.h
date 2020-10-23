// Copyright (c) 2019 The SIMPLEMASTERNODE developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLSmncWIDGET_H
#define COINCONTROLSmncWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlSMNCWidget;
}

class CoinControlSMNCWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlSMNCWidget(QWidget *parent = nullptr);
    ~CoinControlSMNCWidget();

private:
    Ui::CoinControlSMNCWidget *ui;
};

#endif // COINCONTROLSmncWIDGET_H
