ATH9KFixup
==========

Note: This RehabMan fork mostly created just to keep for future use.
(I don't have this hardware currently, so no way to test it)

An open source kernel extension providing patches for unsupported Atheros cards.
- AR946X (AR9462 & AR9463)
- AR9485
- AR9565


#### Features
Boot args:
- AR946X: (Default)
- AR9485: -ath9485
- AR9565: -ath9565


#### Installation
- This kext version requires LILU plugin version 1.2.0+
- Download ATH9KFixup.kext
- Install them to L/E (Clover/kext (optional))
- User -ath9485 boot arg for AR9485 and -ath9565 for AR9565 (If you don't use any boot args it will do the patching for AR946X by default)
- Optional (Rebuild Caches)


#### Credits
- [Apple](https://www.apple.com) for macOS  
- [vit9696](https://github.com/vit9696) for [Lilu.kext](https://github.com/vit9696/Lilu) & for patch
- [Pike R. Alpha](https://github.com/Piker-Alpha) for patch
- [lvs1974](https://applelife.ru/members/lvs1974.53809/) for original source code and idea
- [chunnann](http://www.insanelymac.com/forum/user/1977171-chunnann/) for writing the software and maintaining it
- [black.dragon74](http://forum.osxlatitude.com/index.php?/user/86692-blackdragon74/) for adding support for Lilu 1.2.0
- [RehabMan](https://github.com/RehabMan/ATH9KFixup) added Lilu 1.2.0 compatibility (separate from blackdragon74) and merged other changes that were present in the blackdragon74 repo)
