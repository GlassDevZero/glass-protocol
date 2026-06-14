# GLASS: GNU LED Adaptive Stadium Standard

**Author:** GlassDevZero

**License:** GNU GPL v3

**Hardware:** ESP32-H2 (Auracast Ready) & BLE Beacon Swarm

## Vision

GLASS is an open-source, fully decentralized protocol designed to turn entire stadiums, concert halls, or smart homes into massive, synchronized displays using LED wearables (bracelets, vests), smartphones, or ambient hardware.

Inspired by the synchronized flight of drone swarms, GLASS flips the architecture: it removes the need for expensive, proprietary central hubs and instead tracking devices passively via local radio waves. 100% anonymous, scalable to infinity, and forever free under the GNU philosophy.

## Key Features

* **Speed of Light Mode:** Zero-latency execution for instant, real-time visual effects.
* **Auracast Sync:** Utilizing Bluetooth LE Audio for massive, one-way broadcast reach to an unlimited number of devices simultaneously.
* **Passive Spatial Positioning:** No tracking, no pairing. Devices calculate their own coordinates via RSSI trilateration from a local beacon swarm.
* **GNU Philosophy:** Free to use, modify, and distribute. Developed to prevent corporate monopolies from patenting spatial crowd lighting.

## Technical Architecture

The protocol is defined in `GLASS_Core.h` and operates on a **Data-Centric Broadcasting** model:

1. **The Beacon Swarm (Spatial Grid):** Static BLE beacons broadcast their positions, establishing a local $X, Y$ coordinate grid in the room/stadium.
2. **The Broadcast (Auracast):** The main transmitter continuously floods the air with a raw data matrix containing color data for each sector (e.g., `[sector_1_1:red][sector_1_2:blue]`).
3. **The Pixel (Client):** The ESP32-H2 or a smartphone app scans the beacons, calculates its own position via trilateration, strips the relevant color data from the Auracast stream, and **BUM – it glows**.

## Future & Evolution

* **Phase 1: Ambient Grid:** DIY makers building local smart-home lighting that dynamically follows their movement.
* **Phase 2: The Human Display:** Open-source smartphone apps (F-Droid) allowing concert crowds to hang phones around their necks and instantly form a massive, living crowd screen.
* **Phase 3: Invisible Mesh:** Native integration of the GLASS standard into consumer electronics (headphones, smartwatches).

---

*For collaboration, pull requests, or discussions, open an Issue or Contact the author via this repository.*

---
