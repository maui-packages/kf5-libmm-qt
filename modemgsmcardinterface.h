/*
Copyright 2008,2011 Will Stephenson <wstephenson@kde.org>
Copyright 2010-2011 Lamarque Souza <lamarque@kde.org>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) version 3, or any
later version accepted by the membership of KDE e.V. (or its
successor approved by the membership of KDE e.V.), which shall
act as a proxy defined in Section 6 of version 3 of the license.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MODEMMANAGER_MODEMGSMCARDINTERFACE_H
#define MODEMMANAGER_MODEMGSMCARDINTERFACE_H

#include "ModemManagerQt-export.h"

#include <QObject>
#include <QDBusPendingReply>
#include "modeminterface.h"

class ModemGsmCardInterfacePrivate;

namespace ModemManager
{
class MODEMMANAGERQT_EXPORT ModemGsmCardInterface : public ModemInterface
{
Q_OBJECT
Q_DECLARE_PRIVATE(ModemGsmCardInterface)

public:
    typedef QSharedPointer<ModemGsmCardInterface> Ptr;
    typedef QList<Ptr> List;
    ModemGsmCardInterface(const QString & path, QObject * parent);
    ~ModemGsmCardInterface();

    QString getImei();
    QString getImsi();
    QDBusPendingReply<> sendPuk(const QString & puk, const QString & pin);
    QDBusPendingReply<> sendPin(const QString & pin);
    QDBusPendingReply<> enablePin(const QString & pin, bool enabled);
    QDBusPendingReply<> changePin(const QString & oldPin, const QString & newPin);

    // Properties
    ModemManager::ModemInterface::Band getSupportedBands() const; // deprecated
    ModemManager::ModemInterface::Mode getSupportedModes() const;
Q_SIGNALS:
    // properties
    void supportedBandsChanged(const ModemManager::ModemInterface::Band band);
    void supportedModesChanged(const ModemManager::ModemInterface::Mode modes);

private Q_SLOTS:
    void propertiesChanged(const QString & interface, const QVariantMap & properties);

};
} // namespace ModemManager

#endif
