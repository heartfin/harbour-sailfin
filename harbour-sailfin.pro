TEMPLATE = subdirs
SUBDIRS = core

core.subdir = core

defined(OS_SAILFISHOS, var){
    SUBDIRS += sailfish
    sailfish.subdir = sailfish
    sailfish.depends = core
}
defined(OS_DESKTOP, var) {
    SUBDIRS += desktop
    desktop.subdir =  desktop
    desktop.depends = core
}

message($$SUBDIRS)

# German translation is enabled as an example. If you aren't
# planning to localize your app, remember to comment out the
# following TRANSLATIONS line. And also do not forget to
# modify the localized app name in the the .desktop file.
# TRANSLATIONS += \


