PORTNAME=	kjs
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	www kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library providing an ECMAScript interpreter

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=		cmake compiler:c++11-lib kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	ecm doctools_build
USE_QT=		buildtools_build core qmake_build

.include <bsd.port.mk>
