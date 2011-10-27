/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -m -p mm-modem-gsm-networkinterface /home/ilia/libnm-qt/solid/modemmanager-0.4/dbus/introspection/mm-modem-gsm-network.xml
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MM_MODEM_GSM_NETWORKINTERFACE_H
#define MM_MODEM_GSM_NETWORKINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "generic-types.h"

/*
 * Proxy class for interface org.freedesktop.ModemManager.Modem.Gsm.Network
 */
class OrgFreedesktopModemManagerModemGsmNetworkInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.ModemManager.Modem.Gsm.Network"; }

public:
    OrgFreedesktopModemManagerModemGsmNetworkInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopModemManagerModemGsmNetworkInterface();

    Q_PROPERTY(uint AccessTechnology READ accessTechnology)
    inline uint accessTechnology() const
    { return qvariant_cast< uint >(property("AccessTechnology")); }

    Q_PROPERTY(uint AllowedMode READ allowedMode)
    inline uint allowedMode() const
    { return qvariant_cast< uint >(property("AllowedMode")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<uint> GetBand()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetBand"), argumentList);
    }

    inline QDBusPendingReply<ModemManager::ModemGsmNetworkInterface::RegistrationInfoType> GetRegistrationInfo()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetRegistrationInfo"), argumentList);
    }

    inline QDBusPendingReply<uint> GetSignalQuality()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetSignalQuality"), argumentList);
    }

    inline QDBusPendingReply<> Register(const QString &network_id)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(network_id);
        return asyncCallWithArgumentList(QLatin1String("Register"), argumentList);
    }

    inline QDBusPendingReply<ModemManager::ModemGsmNetworkInterface::ScanResultsType> Scan()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Scan"), argumentList);
    }

    inline QDBusPendingReply<> SetAllowedMode(uint mode)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(mode);
        return asyncCallWithArgumentList(QLatin1String("SetAllowedMode"), argumentList);
    }

    inline QDBusPendingReply<> SetApn(const QString &apn)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(apn);
        return asyncCallWithArgumentList(QLatin1String("SetApn"), argumentList);
    }

    inline QDBusPendingReply<> SetBand(uint band)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(band);
        return asyncCallWithArgumentList(QLatin1String("SetBand"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void RegistrationInfo(uint status, const QString &operator_code, const QString &operator_name);
    void SignalQuality(uint signal_quality);
};

#endif
