file(REMOVE_RECURSE
  "OpenAudioRouter/qml/components/AppRoutingItem.qml"
  "OpenAudioRouter/qml/components/AudioMeter.qml"
  "OpenAudioRouter/qml/components/DeviceCard.qml"
  "OpenAudioRouter/qml/components/ProfileCard.qml"
  "OpenAudioRouter/qml/components/TabButton.qml"
  "OpenAudioRouter/qml/components/VolumeSlider.qml"
  "OpenAudioRouter/qml/main.qml"
  "OpenAudioRouter/qml/views/DevicesView.qml"
  "OpenAudioRouter/qml/views/ProfilesView.qml"
  "OpenAudioRouter/qml/views/RoutingView.qml"
  "OpenAudioRouter/resources/icons.qrc"
  "OpenAudioRouter/resources/styles.qrc"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/open-audio-router_tooling.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
