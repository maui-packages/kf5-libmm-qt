/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -m -p mm-modem-simpleinterface /home/ilia/libnm-qt/solid/modemmanager-0.4/dbus/introspection/mm-modem-simple.xml
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MM_MODEM_SIMPLEINTERFACE_H
#define MM_MODEM_SIMPLEINTERFACE_H

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
 * Proxy class for interface org.freedesktop.ModemManager.Modem.Simple
 */
class OrgFreedesktopModemManagerModemSimpleInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.ModemManager.Modem.Simple"; }

public:
    OrgFreedesktopModemManagerModemSimpleInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopModemManagerModemSimpleInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Connect(const QVariantMap &properties)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(properties);
        return asyncCallWithArgumentList(QLatin1String("Connect"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetStatus()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetStatus"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
