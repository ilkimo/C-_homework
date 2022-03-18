# Marshalling
## Language
C

## objective
You are developing a communication protocol for a simple vehicle locator. Communication takes place via satellite, 
so there is a very low bandwidth and efficiency is therefore crucial.

The data is organized in the form of packets of 10 bytes in size, with the following structure:

Table | #1           | #2  | #3                                   | #4  | #5  | #6  | #7
--- |--------------|-----|--------------------------------------|-----|-----|-----|---
BitOffset | 0            | 16  | 24                                   | 40  | 54  | 68  | 72
SizeInBits | 16           | 8   | 16                                   | 14  | 14  | 4   | 8
Type | Unsigned Int |  Unsigned Int   | Signed int                           |  Signed int   |   Signed int  |  Unsigned Int   | Unsigned Int
Name |      senderID        |  packetType   | altitude, in decimeters (0.1 meters) |  longitude, in 0.0000001 degrees   |  latitude, in 0.0000001 degrees   |   flags  | ext

Once compacted, a packet is represented as a byte array of size 10.

Upon receipt of the data, they are unpacked and must be represented in the following format:
```
struct Packet {
    UInt32 senderID;
    UInt32 packetType;
    Int32 altitude;
    Int32 longitude;
    Int32 latitude;
    byte flags;
    byte ext;
};
```
Implements the marshaling and unmarshaling functions for the data defined above.

## build and execute
```
make
```

## clean
```
make clean
```