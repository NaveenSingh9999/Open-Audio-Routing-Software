#pragma once

#include <QObject>
#include <QQmlEngine>
#include <QJsonObject>
#include <QJsonArray>

class ProfileController : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QStringList profileNames READ profileNames NOTIFY profileNamesChanged)
    Q_PROPERTY(QString currentProfile READ currentProfile NOTIFY currentProfileChanged)

public:
    explicit ProfileController(QObject *parent = nullptr);

    Q_INVOKABLE void saveProfile(const QString &name);
    Q_INVOKABLE void loadProfile(const QString &name);
    Q_INVOKABLE void deleteProfile(const QString &name);
    Q_INVOKABLE void renameProfile(const QString &oldName, const QString &newName);
    Q_INVOKABLE QJsonObject getProfileData(const QString &name);

    QStringList profileNames() const { return m_profileNames; }
    QString currentProfile() const { return m_currentProfile; }

signals:
    void profileNamesChanged();
    void currentProfileChanged();
    void profileSaved(const QString &name);
    void profileLoaded(const QString &name);
    void profileDeleted(const QString &name);

private slots:
    void loadProfiles();
    void saveProfiles();

private:
    QJsonObject captureCurrentState();
    void applyProfileState(const QJsonObject &state);
    QString getProfilesFilePath() const;

    QStringList m_profileNames;
    QString m_currentProfile;
    QJsonObject m_profiles;
};
