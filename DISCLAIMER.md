# Legal Notice & Disclaimer

```
A PROJECT A.K.E.E.M PRODUCTION
SVR07-RECOMP — BUILT ON THE REXGLUE RUNTIME

WWE SMACKDOWN VS. RAW 2007 © 2006 THQ INC. WWE, WORLD WRESTLING
ENTERTAINMENT, AND ALL RELATED CHARACTER NAMES, LIKENESSES, LOGOS, MARKS,
AND COPYRIGHTS ARE THE EXCLUSIVE PROPERTY OF WORLD WRESTLING
ENTERTAINMENT, INC. ALL RIGHTS RESERVED. THE ORIGINAL SOFTWARE AND ITS
UNDERLYING INTELLECTUAL PROPERTY REMAIN THE PROPERTY OF THEIR RESPECTIVE
OWNERS, INCLUDING BUT NOT LIMITED TO TAKE-TWO INTERACTIVE SOFTWARE, INC.,
2K, THQ (AND ITS SUCCESSORS-IN-INTEREST), AND YUKE'S CO., LTD.

SVR07-RECOMP IS AN UNOFFICIAL, NON-COMMERCIAL, FAN-MADE STATIC
RECOMPILATION DEVELOPED THROUGH REVERSE ENGINEERING SOLELY FOR THE
PURPOSES OF INTEROPERABILITY WITH MODERN HARDWARE, PRESERVATION OF A
TITLE NO LONGER COMMERCIALLY AVAILABLE, AND EDUCATIONAL RESEARCH INTO
RECOMPILATION TECHNIQUES. NO AFFILIATION WITH, ENDORSEMENT BY, OR
SPONSORSHIP FROM ANY ABOVE-NAMED ENTITY IS CLAIMED OR IMPLIED.

NO COPYRIGHTED GAME ASSETS — INCLUDING BUT NOT LIMITED TO AUDIO, MUSIC,
TEXTURES, 3D MODELS, ANIMATIONS, SCRIPTS, OR ORIGINAL EXECUTABLE CODE —
ARE DISTRIBUTED WITH OR BY THIS PROJECT. TO RUN THIS SOFTWARE, A USER
MUST LEGALLY OWN A RETAIL COPY OF WWE SMACKDOWN VS. RAW 2007 FOR THE
XBOX 360 PLATFORM AND SUPPLY DATA FILES EXTRACTED FROM SUCH LAWFULLY
OBTAINED MEDIA. REDISTRIBUTION OF GAME ASSETS IS PROHIBITED.

THIS PROJECT'S ORIGINAL CODE IS LICENSED UNDER THE BSD 3-CLAUSE LICENSE.
```

---

## What this project is

SVR07-Recomp is an unofficial, fan-made static recompilation of the
Xbox 360 title *WWE SmackDown vs. Raw 2007*. It uses the open-source
RexGlue runtime to allow the original game's compiled code to execute
natively on modern PC hardware.

This project is a non-commercial work of reverse engineering, created
for the purposes of:

- **Interoperability** with hardware the original game can no longer target
- **Preservation** of a 20 year old title that is no longer sold
- **Education and research** into static recompilation techniques

## What this project is *not*

This project is not affiliated with, endorsed by, or sponsored by:

- Take-Two Interactive Software, Inc.
- 2K Sports / 2K Games
- THQ (or its successors-in-interest)
- Yuke's Co., Ltd.
- World Wrestling Entertainment, Inc. (WWE)

All trademarks, copyrights, and intellectual property associated with
*WWE SmackDown vs. Raw 2007* and the WWE brand remain the property of
their respective owners. No challenge to any such ownership is intended
or implied.

## What is and is not distributed

This repository distributes:

- The **recompiled source code** produced by the RexGlue static
  recompilation toolchain from analysis of an Xbox 360 game binary
  (the `generated/` directory)
- The **runtime glue code** that hosts that recompiled output on Windows
  (the `src/` directory)
- Build configuration and tooling (`CMakeLists.txt`, `CMakePresets.json`,
  and supporting files)

This repository does **not** distribute:

- The original *WWE SmackDown vs. Raw 2007* Xbox 360 game binary or
  executable file
- Any game assets — no audio, music, textures, 3D models, animations,
  scripts, or data files from the original title
- Any pre-built binaries of the recompilation output (those are released
  separately on the Releases page and do not contain game assets either)

To run this project, **you must legally own a retail copy of WWE SmackDown
vs. Raw 2007 for Xbox 360** and supply your own data files, extracted from
media you own. The recompiled source code in this repository requires the
game's own data files to do anything meaningful when built and run.

## User responsibilities

By using this software you agree that:

- You own a legitimate retail copy of *WWE SmackDown vs. Raw 2007*.
- You are responsible for sourcing the game's data files from your own
  legally obtained copy.
- You will not redistribute game assets to others.
- You accept full responsibility for your use of this software under
  the laws of your jurisdiction.

## Rights holder contact

If you are a rights holder with concerns about this project, please open
an issue on the GitHub repository or contact the maintainer directly. A
good-faith response will be provided.
