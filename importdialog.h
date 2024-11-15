/***************************************************************************
 *   Copyright 2007 Robert Gruber <rgruber@users.sourceforge.net>          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef KDEVPLATFORM_PLUGIN_IMPORTDIALOG_H
#define KDEVPLATFORM_PLUGIN_IMPORTDIALOG_H

#include <QDialog>
#include <QUrl>
#include <KJob>

class ImportMetadataWidget;

class CvsPlugin;

/**
 * Asks the user for all options needed to import an existing directory into
 * a CVS repository
 * @author Robert Gruber <rgruber@users.sourceforge.net>
 */
class ImportDialog : public QDialog
{
    Q_OBJECT
public:
    ImportDialog(CvsPlugin *plugin, const QUrl &url, QWidget* parent=nullptr);
    ~ImportDialog() override;

public Q_SLOTS:
    void accept() override;
    void jobFinished(KJob* job);

private:
    QUrl m_url;
    CvsPlugin* m_plugin;
    ImportMetadataWidget* m_widget;
};

#endif

