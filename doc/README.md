DrakoCoin Core
=============

Setup
---------------------
DrakoCoin Core is the original DrakoCoin client and it builds the backbone of the network. It downloads and, by default, stores the entire history of DrakoCoin transactions, which requires approximately 22 gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download DrakoCoin Core, visit [drakocoin.org](/).

Running
---------------------
The following are some helpful notes on how to run DrakoCoin Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/drakocoin-qt` (GUI) or
- `bin/drakocoind` (headless)

### Windows

Unpack the files into a directory, and then run drakocoin-qt.exe.

### macOS

Drag DrakoCoin Core to your applications folder, and then run DrakoCoin Core.

### Need Help?

* See the documentation at the [DrakoCoin Wiki](https://drakocoin.info/) for help and more information.
* Ask for help on [#drakocoin](https://webchat.freenode.net/#drakocoin) on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#drakocoin).
* Ask for help on the [DrakoCoinTalk](https://drakocointalk.io/) forums, in the [Technical Support board](https://drakocointalk.io/c/technical-support).

Building
---------------------
The following are developer notes on how to build DrakoCoin Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide (External Link)](https://github.com/bitcoin-core/docs/blob/master/gitian-building.md)

Development
---------------------
The DrakoCoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.bitcoincore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [DrakoCoinTalk](https://drakocointalk.io/) forums.
* Discuss general DrakoCoin development on #drakocoin-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#drakocoin-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [bitcoin.conf Configuration File](bitcoin-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
