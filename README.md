RFM69 Library
----------------
This is a port of the work of Felix Rusu (https://www.github.com/LowPowerLab/RFM69) to Raspberry Pi
<br/>
RFM69 library for RFM69W, RFM69HW, RFM69CW, RFM69HCW (semtech SX1231, SX1231H)

##Features
Among others, this is a set of features implemented in this library:

- easy to use API with a few simple functions for basic usage
- 255 possible nodes on 256 possible networks
- 61 bytes max message length (limited to 61 to support AES hardware encryption)
- customizable transmit power (32 levels) for low-power transmission control
- sleep function for power saving
- hardware 128bit AES encryption
- hardware preamble, synch recognition and CRC check
- digital RSSI can be read at any time with readRSSI()
- interrupt driven
- tested on Raspberry Pi
- works with RFM69W, RFM69HW, RFM69CW, RFM69HCW, Semtech SX1231/SX1231H transceivers
- promiscuous mode allows any node to listen to any packet on same network

###Installation
```
cmake .
make
sudo ./rfm_test
```

###MISC / possible issues
- The library and test code are currently work-in-progress -> do not use yet in any development!
