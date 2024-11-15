/***************************************************************************
 *   Copyright 2007 Robert Gruber <rgruber@users.sourceforge.net>          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef KDEVPLATFORM_PLUGIN_TEST_CVS_H
#define KDEVPLATFORM_PLUGIN_TEST_CVS_H

#include <QObject>

class CvsProxy;

class TestCvs: public QObject
{
    Q_OBJECT

private:
    void repoInit();
    void importTestData();
    void checkoutTestData();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();

    void init();
    void cleanup();

    void testInitAndImport();
    void testLogFolder();

private:
    CvsProxy* m_proxy;
};

#endif
