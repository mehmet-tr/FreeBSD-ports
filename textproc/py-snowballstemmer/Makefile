PORTNAME=	snowballstemmer
PORTVERSION=	1.2.1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	Snowball stemming library collection for Python

LICENSE=	BSD2CLAUSE

USES=		python:3.6+
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

OPTIONS_DEFINE=	PYSTEMMER
OPTIONS_DEFAULT=PYSTEMMER
PYSTEMMER_DESC=	Use PyStemmer to accelerate

PYSTEMMER_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pystemmer>0:textproc/py-pystemmer@${PY_FLAVOR}

.include <bsd.port.mk>
