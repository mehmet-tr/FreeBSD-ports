# Created by: Matthew Hunt <mph@pobox.com>

PORTNAME=	xfrisk
PORTVERSION=	1.2
PORTREVISION=	6
CATEGORIES=	games
MASTER_SITES=	http://old.tuxick.net/xfrisk/files/ \
		http://devel.ringlet.net/games/xfrisk/
DISTNAME=	XFrisk-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multi-player networked Risk game for X11

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libXaw3d.so:x11-toolkits/Xaw3d

NO_CDROM=	Possible trademark infringement

WRKSRC=		${WRKDIR}/XFrisk

USES=		gmake xorg
USE_XORG=	x11 xt xaw xmu sm ice
MAKE_ENV=	XDIR="${LOCALBASE}"

do-install:
.for file in aiColson aiConway aiDummy friskserver xfrisk
	${INSTALL_PROGRAM} ${WRKSRC}/${file} ${STAGEDIR}${PREFIX}/bin
.endfor
.for file in risk
	${INSTALL_SCRIPT} ${WRKSRC}/${file} ${STAGEDIR}${PREFIX}/bin
.endfor
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}
.for file in Countries.risk Help.risk World.risk
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}
.endfor

.include <bsd.port.mk>
