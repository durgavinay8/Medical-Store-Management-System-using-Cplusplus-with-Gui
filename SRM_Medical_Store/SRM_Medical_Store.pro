QT       += core gui
QT += xml
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ShowMedList.cpp \
    addmed.cpp \
    addsupplier.cpp \
    buymeddialog.cpp \
    expirydates.cpp \
    main.cpp \
    mainwindow.cpp \
    placeorderdialog.cpp \
    showinvoice.cpp \
    showmenu.cpp \
    showtransactions.cpp \
    supplierdata.cpp

HEADERS += \
    CheckLogin.h \
    EditMedicineList.h \
    ShowMedList.h \
    addmed.h \
    addsupplier.h \
    buymeddialog.h \
    checkmedicines.h \
    difference_between_date.h \
    expirydates.h \
    mainwindow.h \
    placeorderdialog.h \
    showinvoice.h \
    showmenu.h \
    showtransactions.h \
    supplierdata.h

FORMS += \
    ShowMedList.ui \
    addmed.ui \
    addsupplier.ui \
    buymeddialog.ui \
    expirydates.ui \
    mainwindow.ui \
    placeorderdialog.ui \
    showinvoice.ui \
    showmenu.ui \
    showtransactions.ui \
    supplierdata.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
