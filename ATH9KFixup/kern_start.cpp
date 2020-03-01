//
//  kern_start.cpp
//  ATH9KFixup
//
//  Copyright © 2017 lvs1974. All rights reserved.
//
//  This kext is made based on lvs1974's NvidiaGraphicsFixup.
//

#include <Headers/plugin_start.hpp>
#include <Headers/kern_api.hpp>

#include "kern_ath9k.hpp"

static ATH9K ath9k;

static const char *bootargOff[] {
	"-ath9koff"
};

static const char *bootargDebug[] {
	"-ath9kdbg"
};

static const char *bootargBeta[] {
	"-ath9kbeta"
};

PluginConfiguration ADDPR(config) {
	xStringify(PRODUCT_NAME),
    parseModuleVersion(xStringify(MODULE_VERSION)),
    LiluAPI::AllowNormal | LiluAPI::AllowInstallerRecovery,
	bootargOff,
	sizeof(bootargOff)/sizeof(bootargOff[0]),
	bootargDebug,
	sizeof(bootargDebug)/sizeof(bootargDebug[0]),
	bootargBeta,
	sizeof(bootargBeta)/sizeof(bootargBeta[0]),
	KernelVersion::Mavericks,
	KernelVersion::Mojave,
	[]() {
		ath9k.init();
	}
};





