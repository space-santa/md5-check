//
// File:   ZlMd5Check.cc
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

#include <QFileDialog>

#include "../header/ZlMd5Check.h"
#include "../header/md5.h"
#include "../header/zlmessages.h"

ZlMd5Check::ZlMd5Check() {
    ui.setupUi(this);

    ui.label_Match->setVisible(false);
}

void ZlMd5Check::on_pushButton_Open_clicked() {
    this->getSource(ui.lineEdit_Source, "");
}

void ZlMd5Check::on_pushButton_Open2_clicked() {
    this->getSource(ui.lineEdit_Source2, "");
}

void ZlMd5Check::on_pushButton_Calc_clicked() {
    ui.label_Match->setVisible(false);

    if ((ui.lineEdit_Result->text() == "") || (ui.lineEdit_Result2->text() == "")) {
        ZlMessages::fehlermeldung(this, tr("Need files to check"));
        return;
    }

    calcMd5(ui.lineEdit_Source->text(), ui.lineEdit_Result);
    calcMd5(ui.lineEdit_Source2->text(), ui.lineEdit_Result2);
    if (ui.lineEdit_Result->text() == ui.lineEdit_Result2->text()) {
        ui.label_Match->setVisible(true);
    }
}

void ZlMd5Check::on_actionNew_activated() {
    ui.lineEdit_Result->clear();
    ui.lineEdit_Result2->clear();
    ui.lineEdit_Source->clear();
    ui.lineEdit_Source2->clear();
}

void ZlMd5Check::on_actionSave_activated() {
    QFileInfo fi(ui.lineEdit_Source->text());
    if (!fi.exists()) {
        ZlMessages::fehlermeldung(this, tr("File does not exist!"));
        return;
    } else {
        this->on_pushButton_Calc_clicked();

        QString string(ui.lineEdit_Result->text() + "  " + fi.fileName());
        qDebug() << string;

        QString fileName = QFileDialog::getOpenFileName(this, tr("Select File"), QDir::homePath(), "md5 (*.md5)");
        if (!fileName.endsWith(".md5")) {
            fileName += ".md5";
        }

        QFile file(fileName);
        if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            return;
        }

        QTextStream out(&file);
        out.readAll();
        out << string << "\n";
    }
}

void ZlMd5Check::on_actionInfo_activated() {
    ZlMessages::gpl_info(this);
}

void ZlMd5Check::on_actionQuit_activated() {
    this->close();
}

void ZlMd5Check::calcMd5(QString source, QLineEdit* l) {
    std::string s = source.toStdString();
    char c[s.length()];
    int n;
    n = s.copy(c, s.length());
    c[n] = '\0';
    l->setText(MD5File(c));
}

void ZlMd5Check::getSource(QLineEdit* source, QString filter) {
    QString fileName = QFileDialog::getOpenFileName(this, tr("Select File"), QDir::homePath(), filter);

    QFileInfo fi(fileName);
    if (fi.isReadable()) {
        source->setText(fileName);
    }
}
