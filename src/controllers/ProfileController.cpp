#include "ProfileController.h"
#include <QStandardPaths>
#include <QDir>
#include <QJsonDocument>
#include <QFile>
#include <QDebug>

ProfileController::ProfileController(QObject *parent)
    : QObject(parent)
{
    loadProfiles();
}

void ProfileController::saveProfile(const QString &name)
{
    if (name.isEmpty()) {
        return;
    }

    QJsonObject currentState = captureCurrentState();
    m_profiles[name] = currentState;

    if (!m_profileNames.contains(name)) {
        m_profileNames.append(name);
        emit profileNamesChanged();
    }

    saveProfiles();
    
    m_currentProfile = name;
    emit currentProfileChanged();
    emit profileSaved(name);

    qDebug() << "Profile saved:" << name;
}

void ProfileController::loadProfile(const QString &name)
{
    if (!m_profiles.contains(name)) {
        qWarning() << "Profile not found:" << name;
        return;
    }

    QJsonObject profileData = m_profiles[name].toObject();
    applyProfileState(profileData);

    m_currentProfile = name;
    emit currentProfileChanged();
    emit profileLoaded(name);

    qDebug() << "Profile loaded:" << name;
}

void ProfileController::deleteProfile(const QString &name)
{
    if (!m_profiles.contains(name)) {
        return;
    }

    m_profiles.remove(name);
    m_profileNames.removeAll(name);

    if (m_currentProfile == name) {
        m_currentProfile.clear();
        emit currentProfileChanged();
    }

    emit profileNamesChanged();
    saveProfiles();
    emit profileDeleted(name);

    qDebug() << "Profile deleted:" << name;
}

void ProfileController::renameProfile(const QString &oldName, const QString &newName)
{
    if (!m_profiles.contains(oldName) || newName.isEmpty() || oldName == newName) {
        return;
    }

    QJsonValue profileData = m_profiles[oldName];
    m_profiles.remove(oldName);
    m_profiles[newName] = profileData;

    int index = m_profileNames.indexOf(oldName);
    if (index >= 0) {
        m_profileNames[index] = newName;
    }

    if (m_currentProfile == oldName) {
        m_currentProfile = newName;
        emit currentProfileChanged();
    }

    emit profileNamesChanged();
    saveProfiles();

    qDebug() << "Profile renamed from" << oldName << "to" << newName;
}

QJsonObject ProfileController::getProfileData(const QString &name)
{
    if (m_profiles.contains(name)) {
        return m_profiles[name].toObject();
    }
    return QJsonObject();
}

void ProfileController::loadProfiles()
{
    QString filePath = getProfilesFilePath();
    QFile file(filePath);

    if (!file.exists()) {
        qDebug() << "No profiles file found, starting fresh";
        return;
    }

    if (!file.open(QIODevice::ReadOnly)) {
        qWarning() << "Could not open profiles file for reading:" << filePath;
        return;
    }

    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson(file.readAll(), &error);

    if (error.error != QJsonParseError::NoError) {
        qWarning() << "Error parsing profiles file:" << error.errorString();
        return;
    }

    m_profiles = doc.object();
    m_profileNames = m_profiles.keys();
    
    emit profileNamesChanged();
    qDebug() << "Loaded" << m_profileNames.size() << "profiles";
}

void ProfileController::saveProfiles()
{
    QString filePath = getProfilesFilePath();
    QFileInfo fileInfo(filePath);
    QDir dir = fileInfo.dir();

    if (!dir.exists()) {
        dir.mkpath(".");
    }

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly)) {
        qWarning() << "Could not open profiles file for writing:" << filePath;
        return;
    }

    QJsonDocument doc(m_profiles);
    file.write(doc.toJson());
    qDebug() << "Profiles saved to:" << filePath;
}

QJsonObject ProfileController::captureCurrentState()
{
    QJsonObject state;
    
    // This would capture the current audio routing state
    // For now, return a placeholder structure
    QJsonObject devices;
    QJsonArray inputDevices;
    QJsonArray outputDevices;
    
    // TODO: Implement actual state capture from audio system
    // This would include:
    // - Default input/output devices
    // - Device volumes and mute states
    // - Application routing assignments
    // - Application volumes and mute states
    
    devices["inputs"] = inputDevices;
    devices["outputs"] = outputDevices;
    state["devices"] = devices;
    
    QJsonObject applications;
    state["applications"] = applications;
    
    return state;
}

void ProfileController::applyProfileState(const QJsonObject &state)
{
    // This would apply the saved audio routing state
    // TODO: Implement actual state application to audio system
    
    Q_UNUSED(state)
    
    qDebug() << "Applying profile state (not yet implemented)";
}

QString ProfileController::getProfilesFilePath() const
{
    QString configDir = QStandardPaths::writableLocation(QStandardPaths::ConfigLocation);
    return configDir + "/open-audio-router/profiles.json";
}
