PORTNAME=	minizinc-ide
DISTVERSION=	2.5.5
CATEGORIES=	math lang

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	IDE for MiniZinc, a constraint modeling language

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

DEPRECATED=	Uses EOL Python 2.7 via www/qt5-webengine
EXPIRATION_DATE=2021-06-23

RUN_DEPENDS=	minizinc:math/minizinc

USES=		gl compiler:c++11-lang qmake qt:5
USE_QT=		core declarative gui location network printsupport sql webchannel webengine widgets buildtools_build
USE_GL=		gl

USE_GITHUB=	yes
GH_ACCOUNT=	MiniZinc
GH_PROJECT=	MiniZincIDE

USE_GITLAB=	nodefault
GL_TUPLE=	minizinc:cp-profiler-integration:f16b3132df33b3f258971f36dbe5e909983381c9:cp/cp-profiler/src/cpp-integration

PLIST_FILES=	bin/MiniZincIDE

.include <bsd.port.mk>
