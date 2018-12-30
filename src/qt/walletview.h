// Copyright (c) 2009-2018 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Developers
// Copyright (c) 2014-2018 The Dash Core Developers
// Copyright (c) 2016-2018 Duality Blockchain Solutions Developers
// Copyright (c) 2017-2018 Zumy Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZUMY_QT_WALLETVIEW_H
#define ZUMY_QT_WALLETVIEW_H

#include "amount.h"

#include "masternodelist.h"

#include <QStackedWidget>

class ZumyGUI;
class ClientModel;
class OverviewPage;
class PlatformStyle;
class SendCoinsDialog;
class SendCoinsRecipient;
class ReceiveCoinsDialog;
class AddressBookPage;
class TransactionView;
class WalletModel;

QT_BEGIN_NAMESPACE
class QLabel;
class QModelIndex;
class QProgressDialog;
QT_END_NAMESPACE

/*
  WalletView class. This class represents the view to a single wallet.
  It was added to support multiple wallet functionality. Each wallet gets its own WalletView instance.
  It communicates with both the client and the wallet models to give the user an up-to-date view of the
  current core state.
*/
class WalletView : public QStackedWidget
{
    Q_OBJECT

public:
    explicit WalletView(const PlatformStyle *platformStyle, QWidget *parent);
    ~WalletView();

    void setZumyGUI(ZumyGUI *gui);
    /** Set the client model.
        The client model represents the part of the core that communicates with the P2P network, and is wallet-agnostic.
    */
    void setClientModel(ClientModel *clientModel);
    /** Set the wallet model.
        The wallet model represents a zumy wallet, and offers access to the list of transactions, address book and sending
        functionality.
    */
    void setWalletModel(WalletModel *walletModel);

    bool handlePaymentRequest(const SendCoinsRecipient& recipient);

    void showOutOfSyncWarning(bool fShow);

private:
    ClientModel *clientModel;
    WalletModel *walletModel;

    OverviewPage *overviewPage;
    SendCoinsDialog *sendCoinsPage;
    ReceiveCoinsDialog *receiveCoinsPage;
    AddressBookPage *usedSendingAddressesPage;
    AddressBookPage *usedReceivingAddressesPage;
    QWidget *transactionsPage;
    TransactionView *transactionView;
    MasternodeList *masternodeListPage;

    QProgressDialog *progressDialog;
    QLabel *transactionSum;
    const PlatformStyle *platformStyle;

public Q_SLOTS:
    /** Switch to overview (home) page */
    void gotoOverviewPage();
    /** Switch to send coins page */
    void gotoSendCoinsPage(QString addr = "");
    /** Switch to receive coins page */
    void gotoReceiveCoinsPage();
    /** Switch to history (transactions) page */
    void gotoHistoryPage();
    /** Switch to Masternode page */
    void gotoMasternodePage();

    /** Show Sign/Verify Message dialog and switch to sign message tab */
    void gotoSignMessageTab(QString addr = "");
    /** Show Sign/Verify Message dialog and switch to verify message tab */
    void gotoVerifyMessageTab(QString addr = "");

    /** Show incoming transaction notification for new transactions.

        The new items are those between start and end inclusive, under the given parent item.
    */
    void processNewTransaction(const QModelIndex& parent, int start, int /*end*/);
    /** Encrypt the wallet */
    void encryptWallet(bool status);
    /** Backup the wallet */
    void backupWallet();
    /** Change encrypted wallet passphrase */
    void changePassphrase();
    /** Ask for passphrase to unlock wallet temporarily */
    void unlockWallet(bool fAnonymizeOnly=false);
    /** Lock wallet */
    void lockWallet();

    /** Show used sending addresses */
    void usedSendingAddresses();
    /** Show used receiving addresses */
    void usedReceivingAddresses();

    /** Re-emit encryption status signal */
    void updateEncryptionStatus();

    /** Show progress dialog e.g. for rescan */
    void showProgress(const QString &title, int nProgress);

    // Clicking on the lock icon will open the passphrase dialog
    void on_labelWalletEncryptionIcon_clicked(bool fForMixingOnly = false);

    /** User has requested more information about the out of sync state */
    void requestedSyncWarningInfo();

    /** Update selected ZMY amount from transactionview */
    void trxAmount(QString amount);

Q_SIGNALS:
    /** Signal that we want to show the main window */
    void showNormalIfMinimized();
    /**  Fired when a message should be reported to the user */
    void message(const QString &title, const QString &message, unsigned int style);
    /** Encryption status of wallet changed */
    void encryptionStatusChanged(int status);
    /** HD-Enabled status of wallet changed (only possible during startup) */
    void hdEnabledStatusChanged(int hdEnabled);
    /** Notify that a new transaction appeared */
    void incomingTransaction(const QString& date, int unit, const CAmount& amount, const QString& type, const QString& address, const QString& label);
    /** Notify that the out of sync warning icon has been pressed */
    void outOfSyncWarningClicked();
};

#endif // ZUMY_QT_WALLETVIEW_H