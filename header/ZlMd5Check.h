//
// File:   ZlMd5Check.h
// Author: Armin Zirkel
//
// Copyright (c) 2008 Armin Zirkel
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// Created on March 14, 2008, 3:09 PM
//

#ifndef _ZLMD5CHECK_H
#define _ZLMD5CHECK_H

#include <QtGui>
#include "../ui_ZlMd5Check.h"

class ZlMd5Check : public QMainWindow {
    Q_OBJECT
public:
    ZlMd5Check();
    ~ZlMd5Check() {
    }

private:
    Ui::MainWindow ui;

    void getSource(QLineEdit* source, QString filter);
    void calcMd5(QString source, QLineEdit* l);

private slots:
    void on_pushButton_Open_clicked();
    void on_pushButton_Open2_clicked();
    void on_pushButton_Calc_clicked();

    void on_actionNew_activated();
    void on_actionSave_activated();
    void on_actionInfo_activated();
    void on_actionQuit_activated();

signals:
};

#endif /* _ZLMD5CHECK_H */
