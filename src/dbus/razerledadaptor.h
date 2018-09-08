/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp razerled.xml -a razerledadaptor.h:razerledadaptor.cpp -c RazerLEDAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef RAZERLEDADAPTOR_H
#define RAZERLEDADAPTOR_H
#include "../razer_test.h"
using namespace razer_test;

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface io.github.openrazer1.Led
 */
class RazerLEDAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "io.github.openrazer1.Led")
    Q_CLASSINFO("D-Bus Introspection", ""
                "  <interface name=\"io.github.openrazer1.Led\">\n"
                "    <method name=\"setNone\">\n"
                "      <arg direction=\"out\" type=\"b\"/>\n"
                "    </method>\n"
                "    <method name=\"setStatic\">\n"
                "      <arg direction=\"out\" type=\"b\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"red\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"green\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"blue\"/>\n"
                "    </method>\n"
                "    <method name=\"setBreathing\">\n"
                "      <arg direction=\"out\" type=\"b\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"red\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"green\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"blue\"/>\n"
                "    </method>\n"
                "    <method name=\"setBreathingDual\">\n"
                "      <arg direction=\"out\" type=\"b\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"red\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"green\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"blue\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"red2\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"green2\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"blue2\"/>\n"
                "    </method>\n"
                "    <method name=\"setBreathingRandom\">\n"
                "      <arg direction=\"out\" type=\"b\"/>\n"
                "    </method>\n"
                "    <method name=\"setBlinking\">\n"
                "      <arg direction=\"out\" type=\"b\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"red\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"green\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"blue\"/>\n"
                "    </method>\n"
                "    <method name=\"setSpectrum\">\n"
                "      <arg direction=\"out\" type=\"b\"/>\n"
                "    </method>\n"
                "    <method name=\"setWave\">\n"
                "      <arg direction=\"out\" type=\"b\"/>\n"
                "      <arg direction=\"in\" type=\"(i)\" name=\"direction\"/>\n"
                "      <annotation value=\"razer_test::WaveDirection\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
                "    </method>\n"
                "    <method name=\"setReactive\">\n"
                "      <arg direction=\"out\" type=\"b\"/>\n"
                "      <arg direction=\"in\" type=\"(i)\" name=\"speed\"/>\n"
                "      <annotation value=\"razer_test::ReactiveSpeed\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"red\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"green\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"blue\"/>\n"
                "    </method>\n"
                "    <method name=\"setBrightness\">\n"
                "      <arg direction=\"out\" type=\"b\"/>\n"
                "      <arg direction=\"in\" type=\"y\" name=\"brightness\"/>\n"
                "    </method>\n"
                "    <method name=\"getBrightness\">\n"
                "      <arg direction=\"out\" type=\"y\"/>\n"
                "    </method>\n"
                "  </interface>\n"
                "")
public:
    RazerLEDAdaptor(QObject *parent);
    virtual ~RazerLEDAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    uchar getBrightness();
    bool setBlinking(uchar red, uchar green, uchar blue);
    bool setBreathing(uchar red, uchar green, uchar blue);
    bool setBreathingDual(uchar red, uchar green, uchar blue, uchar red2, uchar green2, uchar blue2);
    bool setBreathingRandom();
    bool setBrightness(uchar brightness);
    bool setNone();
    bool setReactive(razer_test::ReactiveSpeed speed, uchar red, uchar green, uchar blue);
    bool setSpectrum();
    bool setStatic(uchar red, uchar green, uchar blue);
    bool setWave(razer_test::WaveDirection direction);
Q_SIGNALS: // SIGNALS
};

#endif
