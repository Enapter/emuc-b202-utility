# Userspace daemon for Innodisk EMUC-B201 CAN interface driver

## Source

This source code was downloaded from [Innodisk EMUC-B201 board](https://www.innodisk.com/en/products/embedded-peripheral/communication/emuc-b202#tab4) vendor's website download section and modified to be more suitable for cross-compilation.

## Build

```
autoreconf --verbose --install --force
./configure
make
```
