# AudioBox - Hass-Schalter / Toxic-Button

## Station: Hass-Schalter / Toxic-Button

**Ziel:**  
Die Teilnehmenden erleben durch ein interaktives Setting die emotionale Wirkung von toxischer Kommunikation und reflektieren, welche Verantwortung sie im digitalen Raum tragen. Die Station macht deutlich, wie leicht verletzende Worte „weitergegeben“ werden – und welche Auswirkungen das auf die Beteiligten haben kann.

**Ablauf:**  
- Zwei Personen spielen gemeinsam ein Spiel an einer Konsole. Beide tragen Kopfhörer und hören die reguläre Spielmusik und Soundeffekte.
- Eine der beiden Personen bekommt zusätzlich über einen Audiokanal beleidigende Sprachkommentare zugespielt. Sie hat die Möglichkeit, diese per Knopfdruck an die andere Person „weiterzugeben“ und selbst nur noch die Musik zu hören.
- Nach einer Spielrunde folgt eine moderierte Reflexion:  
  - Wie hat sich das Erlebnis angefühlt?  
  - Warum wurde der Knopf gedrückt – oder nicht?  
  - Was bedeutet Verantwortung in einer digitalen Kommunikation?

**Technische Umsetzung:**  
Der Toxic Button ist ein Schalter, der auf Knopfdruck zwei Soundspuren tauscht. Nach dem Tausch ist ein erneutes Tauschen erst nach einem zufälligen Zeitintervall zwischen einer und fünf Sekunden möglich. Sobald das Zeitintervall abgelaufen ist, leuchtet die LED im Taster. Realisiert wurde dies mit:
- Einem 2 Kanal Mixer
- Einem Leuchttaster
- Vier Klinke Buchsen
- Einem ESP32-Modul mit 8 Relais

## Schaltplan

![Schaltplan](./Wiring.png)

## Gehäuse

![Gehäuse](./gehäuse.png)

## Bauteile

### 8-Relay-Module
Kann in Suchmaschinen unter der Bezeichnung "ESP32 8 Relay Module" gefunden werden.

[Google-Suche](https://www.google.com/search?sca_esv=ccb8066356fd07b7&q=ESP32+8+Relay+Module&udm=3&fbs=AIIjpHw2KGh6wpocn18KLjPMw8n5Yp8-1M0n6BD6JoVBP_K3fXXvA3S3XGyupmJLMg20um-SOUTyIGO-2L0vP6_J4YYTjW2aB8eSIJ35a4O65s7lB5L7Sg-KyIC9X2k4wgOU_zyuzYhZ1y7qFRjjlWkSxa_PzC-r47Gpwvz62ehZwdjgS-dFzfA6pTJ_M4s_Ipy254HFSsxvlL_WT2uNdSVAvWwnj5gQ0w&sa=X&ved=2ahUKEwj5hKqo54mOAxWrBtsEHa1oFeQQs6gLKAN6BAgYEAE&biw=1280&bih=631&dpr=1.5)

[Amazon](https://www.amazon.de/-/en/8-channel-wireless-control-development-controlling/dp/B0CCSF1WNH)

### Arcade-LED-Button
[Amazon](https://www.amazon.de/dp/B01LZMANZ7?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1)

### Klinke Buchsen
[Amazon](https://www.amazon.de/dp/B07TT16XJV?ref=ppx_yo2ov_dt_b_fed_asin_title)

### 2 Kanal Mixer
[Amazon](https://www.amazon.de/dp/B09TT3LVGX?ref=ppx_yo2ov_dt_b_fed_asin_title)
