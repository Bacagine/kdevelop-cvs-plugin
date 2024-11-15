/***************************************************************************
 *   Copyright 2007 Robert Gruber <rgruber@users.sourceforge.net>          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef KDEVPLATFORM_PLUGIN_COMMITDIALOG_H
#define KDEVPLATFORM_PLUGIN_COMMITDIALOG_H

#include <QDialog>
#include <KTextEdit>

#include "ui_commitdialog.h"

/**
 * Allows to enter text which can them be used as
 * parameter for <tt>cvs commit</tt>
 * @author Robert Gruber <rgruber@users.sourceforge.net>
 */
class CommitDialog : public QDialog, private Ui::CommitDialogBase
{
Q_OBJECT
public:
    explicit CommitDialog(QDialog *parent = nullptr);
    ~CommitDialog() override;

    /**
     * @return The text entered by the user
     */
    QString message() { return textedit->toPlainText(); }
};

#endif

