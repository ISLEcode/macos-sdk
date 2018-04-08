---
revision: Sun Apr 08, 2018 22:49:05
---

### MacOSX SDKs

MacOSX SDKs for legacy Objective-C and Swift developments (Xcode)

-   [MacOSX10.13](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.13.0)
-   [MacOSX10.12](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.12.0)
-   [MacOSX10.11](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.11.0)
-   [MacOSX10.10](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.10.0)
-   [MacOSX10.9](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.9.0)
-   [MacOSX10.8](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.8.0)
-   [MacOSX10.7](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.7.0)
-   [MacOSX10.6](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.6.0)
-   [MacOSX10.5](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.5.0)
-   [MacOSX10.4](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.4.0u)
-   [MacOSX10.3](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.3.9)
-   [MacOSX10.2](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.2.8)
-   [MacOSX10.1](https://github.com/ISLEcode/macos-sdk/releases/tag/v10.1.5)

Since Xcode version 7.3+ you need to edit the macOS platform properties file:

```
`/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Info.plist`
```

and set the `MinimumSDKVersion` property to the SDK you wish to use.

<!-- vim: set nu et tw=130 ts=8 sts=4 sw=4 ff=unix fo-=l fo+=tcroq2 fdm=marker fmr=@{,@} spell spelllang=en_gb :-->
