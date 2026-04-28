Name:       harbour-sailfin

# >> macros
# << macros
%define __provides_exclude_from ^%{_datadir}/.*$
%define __requires_exclude ^libJellyfinQt.*$
%define _unpackaged_files_terminate_build 0

Summary:    Sailfin
Version:    0.5.0
Release:    1
Group:      Qt/Qt
License:    LGPL-2.1-or-later
URL:        https://chris.netsoj.nl/projects/harbour-sailfin
Source0:    %{name}-%{version}.tar.bz2
Requires:   sailfishsilica-qt5 >= 0.10.9
Requires:   qt5-qtdeclarative-import-xmllistmodel
BuildRequires:  pkgconfig(sailfishapp) >= 1.0.2
BuildRequires:  pkgconfig(Qt5Core)
BuildRequires:  pkgconfig(Qt5Qml)
BuildRequires:  pkgconfig(Qt5Quick)
BuildRequires:  pkgconfig(Qt5WebSockets)
BuildRequires:  pkgconfig(Qt5Multimedia)
BuildRequires:  pkgconfig(Qt5Concurrent)
BuildRequires:  pkgconfig(mlite5)
BuildRequires:  git
BuildRequires:  desktop-file-utils
BuildRequires:  cmake

%description
Play video's and music from your Jellyfin media server on your Sailfish device

%if 0%{?_chum}
Title: Sailfin
Type: desktop-application
DeveloperName: Chris Josten (heartfin)
Categories:
 - AudioVideo
Custom:
  Repo: https://github.com/heartfin/harbour-sailfin
PackageIcon: https://raw.githubusercontent.com/heartfin/harbour-sailfin/master/sailfish/icons/172x172/harbour-sailfin.png
Links:
  Homepage: https://github.com/heartfin/harbour-sailfin
  Bugtracker: https://github.com/heartfin/harbour-sailfin/issues
  Help: https://github.com/heartfin/harbour-sailfin/discussions
  Donation: https://liberapay.com/heartfin
%endif


%prep
%setup -q -n %{name}-%{version}

# >> setup
# << setup

%build
# >> build pre
# << build pre

%cmake .  \
    -DPLATFORM_SAILFISHOS=1 \
    -DSAILFIN_VERSION='%{version}-%{release}'

make %{?_smp_mflags}

# >> build post
# << build post

%install
rm -rf %{buildroot}
# >> install pre
# << install pre
%make_install

# >> install post
# << install post

desktop-file-install --delete-original       \
  --dir %{buildroot}%{_datadir}/applications             \
   %{buildroot}%{_datadir}/applications/*.desktop

%files
%defattr(-,root,root,-)
%{_bindir}
%{_datadir}/%{name}
%{_datadir}/applications/%{name}.desktop
%{_datadir}/icons/hicolor/*/apps/%{name}.png
# >> files
# << files
