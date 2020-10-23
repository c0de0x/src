// Copyright (c) 2019 The SIMPLEMASTERNODE developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef NAVMENUWIDGET_H
#define NAVMENUWIDGET_H

#include <QWidget>
#include "qt/smnc/pwidget.h"

class SIMPLEMASTERNODEGUI;

namespace Ui {
class NavMenuWidget;
}

class NavMenuWidget : public PWidget
{
    Q_OBJECT

public:
    explicit NavMenuWidget(SIMPLEMASTERNODEGUI* mainWindow, QWidget *parent = nullptr);
    ~NavMenuWidget();

    void loadWalletModel() override;

public slots:
    void selectSettings();
    void onShowHideColdStakingChanged(bool show);

private slots:
    void onSendClicked();
    void onDashboardClicked();
    void onPrivacyClicked();
    void onAddressClicked();
    void onMasterNodesClicked();
    void onColdStakingClicked();
    void onSettingsClicked();
    void onReceiveClicked();
    void updateButtonStyles();
private:
    Ui::NavMenuWidget *ui;
    QList<QWidget*> btns;

    void connectActions();
    void onNavSelected(QWidget* active, bool startup = false);
};

#endif // NAVMENUWIDGET_H
