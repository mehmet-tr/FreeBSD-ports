PORTNAME=	wezterm
DISTVERSION=	20210405-110924-a5bb5be8
CATEGORIES=	x11

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	GPU-accelerated terminal emulator and multiplexer

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

LIB_DEPENDS=	libwayland-egl.so:graphics/wayland \
		libfontconfig.so:x11-fonts/fontconfig \
		libxkbcommon-x11.so:x11/libxkbcommon \
		libxcb-image.so:x11/xcb-util-image \
		libxcb-keysyms.so:x11/xcb-util-keysyms \
		libxcb-icccm.so:x11/xcb-util-wm

USES=		cargo python:3.4+,build ssl xorg
USE_GITHUB=	yes
USE_PERL5=	build
USE_XORG=	x11 xcb
GH_ACCOUNT=	wez
GH_TUPLE=	harfbuzz:harfbuzz:2.7.2:harfbuzz/deps/harfbuzz/harfbuzz \
		glennrp:libpng:v1.6.36-805-g8439534da:libpng/deps/freetype/libpng \
		madler:zlib:v1.2.11:zlib/deps/freetype/zlib \
		freetype:freetype:VER-2-10-2-80-g6a2b3e400:freetype/deps/freetype/freetype2 \
		yeslogic:allsorts:3947164a201ab5e15d5f23204faaaaaad52531aa:allsorts \
		libssh2:libssh2:libssh2-1.9.0-93-g5627b82:libssh2/../ssh2-rs-c65067040c97a0cf7f96c69d6fc87764a32c34ae/libssh2-sys/libssh2 \
		wez:ssh2-rs:c65067040c97a0cf7f96c69d6fc87764a32c34ae:libsshsys \
		wez:xkbcommon-rs:01a0a0cd5663405e6e4abb1ad3add9add1496f58:xkbcommon
PLIST_FILES=	bin/strip-ansi-escapes \
		bin/${PORTNAME} \
		bin/${PORTNAME}-gui \
		bin/${PORTNAME}-mux-server \
		etc/profile.d/${PORTNAME}.sh \
		share/applications/org.wezfurlong.wezterm.desktop \
		share/icons/hicolor/128x128/apps/org.wezfurlong.wezterm.png \
		share/icons/hicolor/scalable/apps/org.wezfurlong.wezterm.svg \
		share/metainfo/org.wezfurlong.wezterm.appdata.xml \
		${NULL}

CARGO_CRATES=	ab_glyph_rasterizer-0.1.4 \
		addr2line-0.14.1 \
		adler-1.0.2 \
		adler32-1.2.0 \
		ahash-0.4.7 \
		aho-corasick-0.7.15 \
		alloc-no-stdlib-2.0.1 \
		alloc-stdlib-0.2.1 \
		andrew-0.3.1 \
		ansi_term-0.11.0 \
		anyhow-1.0.40 \
		approx-0.3.2 \
		arrayref-0.3.6 \
		arrayvec-0.5.2 \
		async-channel-1.6.1 \
		async-executor-1.4.0 \
		async-fs-1.5.0 \
		async-global-executor-2.0.2 \
		async-io-1.3.1 \
		async-lock-2.3.0 \
		async-mutex-1.4.0 \
		async-net-1.5.0 \
		async-process-1.0.2 \
		async-std-1.9.0 \
		async-task-4.0.3 \
		async-trait-0.1.48 \
		atomic-waker-1.0.0 \
		atty-0.2.14 \
		autocfg-1.0.1 \
		backtrace-0.3.56 \
		base64-0.13.0 \
		battery-0.7.8 \
		bitflags-1.2.1 \
		bitreader-0.3.3 \
		bitvec-0.19.5 \
		blake2b_simd-0.5.11 \
		block-0.1.6 \
		block-buffer-0.7.3 \
		block-buffer-0.9.0 \
		block-padding-0.1.5 \
		blocking-1.0.2 \
		brotli-decompressor-2.3.1 \
		bstr-0.1.4 \
		bstr-0.2.15 \
		bumpalo-3.6.1 \
		byte-tools-0.3.1 \
		bytemuck-1.5.1 \
		byteorder-1.4.3 \
		cache-padded-1.1.1 \
		calloop-0.6.5 \
		cassowary-0.3.0 \
		cc-1.0.67 \
		cfg-if-0.1.10 \
		cfg-if-1.0.0 \
		cgl-0.3.2 \
		chrono-0.4.19 \
		clap-2.33.3 \
		clipboard-0.5.0 \
		clipboard-win-2.2.0 \
		cloudabi-0.0.3 \
		cocoa-0.20.2 \
		color_quant-1.1.0 \
		colored-1.9.3 \
		concurrent-queue-1.2.2 \
		const-sha1-0.2.0 \
		constant_time_eq-0.1.5 \
		core-foundation-0.7.0 \
		core-foundation-0.9.1 \
		core-foundation-sys-0.7.0 \
		core-foundation-sys-0.8.2 \
		core-graphics-0.19.2 \
		core-graphics-0.22.2 \
		core-graphics-types-0.1.1 \
		core-text-19.2.0 \
		cpuid-bool-0.1.2 \
		crc32fast-1.2.1 \
		crossbeam-0.8.0 \
		crossbeam-channel-0.5.0 \
		crossbeam-deque-0.8.0 \
		crossbeam-epoch-0.9.3 \
		crossbeam-queue-0.3.1 \
		crossbeam-utils-0.8.3 \
		ctor-0.1.20 \
		deflate-0.8.6 \
		derivative-2.2.0 \
		diff-0.1.12 \
		difference-2.0.0 \
		digest-0.8.1 \
		digest-0.9.0 \
		dirs-2.0.2 \
		dirs-next-2.0.0 \
		dirs-sys-0.3.5 \
		dirs-sys-next-0.1.2 \
		dlib-0.4.2 \
		dlib-0.5.0 \
		doc-comment-0.3.3 \
		downcast-rs-1.2.0 \
		dwrote-0.11.0 \
		either-1.6.1 \
		embed-resource-1.6.1 \
		encoding_rs-0.8.28 \
		enumflags2-0.6.4 \
		enumflags2_derive-0.6.4 \
		env_logger-0.7.1 \
		euclid-0.22.2 \
		event-listener-2.5.1 \
		evmap-6.0.1 \
		fake-simd-0.1.2 \
		fastrand-1.4.0 \
		filenamegen-0.2.4 \
		filetime-0.2.14 \
		flate2-1.0.20 \
		flume-0.10.2 \
		fnv-1.0.7 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.0.1 \
		fsevent-0.4.0 \
		fsevent-sys-2.0.1 \
		fuchsia-cprng-0.1.1 \
		fuchsia-zircon-0.3.3 \
		fuchsia-zircon-sys-0.3.3 \
		funty-1.1.0 \
		futures-0.3.13 \
		futures-channel-0.3.13 \
		futures-core-0.3.13 \
		futures-executor-0.3.13 \
		futures-io-0.3.13 \
		futures-lite-1.11.3 \
		futures-macro-0.3.13 \
		futures-sink-0.3.13 \
		futures-task-0.3.13 \
		futures-util-0.3.13 \
		generic-array-0.12.4 \
		generic-array-0.14.4 \
		getopts-0.2.21 \
		getrandom-0.1.16 \
		getrandom-0.2.2 \
		gif-0.11.2 \
		gimli-0.23.0 \
		gl_generator-0.14.0 \
		glium-0.28.0 \
		gloo-timers-0.2.1 \
		glyph-names-0.1.0 \
		guillotiere-0.6.0 \
		hashbrown-0.5.0 \
		hashbrown-0.9.1 \
		hdrhistogram-7.2.0 \
		heck-0.3.2 \
		hermit-abi-0.1.18 \
		hostname-0.3.1 \
		http_req-0.7.2 \
		humantime-1.3.0 \
		idna-0.2.2 \
		image-0.23.14 \
		inotify-0.7.1 \
		inotify-sys-0.1.5 \
		instant-0.1.9 \
		ioctl-rs-0.1.6 \
		iovec-0.1.4 \
		itertools-0.8.2 \
		itoa-0.4.7 \
		jobserver-0.1.21 \
		jpeg-decoder-0.1.22 \
		js-sys-0.3.50 \
		k9-0.11.0 \
		kernel32-sys-0.2.2 \
		khronos_api-3.1.0 \
		kv-log-macro-1.0.7 \
		lazy_static-1.4.0 \
		lazycell-1.3.0 \
		leb128-0.2.4 \
		lexical-core-0.7.5 \
		libc-0.2.92 \
		libloading-0.6.7 \
		libloading-0.7.0 \
		libz-sys-1.1.2 \
		line_drawing-0.8.0 \
		lock_api-0.3.4 \
		lock_api-0.4.3 \
		log-0.4.14 \
		lru-0.6.5 \
		lua-src-542.0.0 \
		luajit-src-210.1.3+restyfe08842 \
		mach-0.3.2 \
		malloc_buf-0.0.6 \
		maplit-1.0.2 \
		match_cfg-0.1.0 \
		matches-0.1.8 \
		maybe-uninit-2.0.0 \
		memchr-2.3.4 \
		memmap-0.7.0 \
		memmap2-0.1.0 \
		memmem-0.1.1 \
		memoffset-0.5.6 \
		memoffset-0.6.3 \
		metrics-0.14.2 \
		metrics-macros-0.2.0 \
		miniz_oxide-0.3.7 \
		miniz_oxide-0.4.4 \
		mio-0.6.23 \
		mio-extras-2.0.6 \
		miow-0.2.2 \
		mlua-0.5.3 \
		nanorand-0.5.2 \
		nb-connect-1.1.0 \
		net2-0.2.37 \
		nix-0.17.0 \
		nix-0.18.0 \
		nix-0.19.1 \
		nix-0.20.0 \
		nom-5.1.2 \
		nom-6.1.2 \
		nonzero_ext-0.1.5 \
		notify-4.0.15 \
		ntapi-0.3.6 \
		num-0.3.1 \
		num-bigint-0.3.2 \
		num-complex-0.3.1 \
		num-derive-0.3.3 \
		num-integer-0.1.44 \
		num-iter-0.1.42 \
		num-rational-0.3.2 \
		num-traits-0.1.43 \
		num-traits-0.2.14 \
		num_cpus-1.13.0 \
		objc-0.2.7 \
		objc-foundation-0.1.1 \
		objc_id-0.1.1 \
		object-0.23.0 \
		once_cell-1.7.2 \
		opaque-debug-0.2.3 \
		opaque-debug-0.3.0 \
		open-1.6.0 \
		openssl-0.10.33 \
		openssl-src-111.15.0+1.1.1k \
		openssl-sys-0.9.61 \
		ordered-float-2.1.1 \
		output_vt100-0.1.2 \
		owned_ttf_parser-0.6.0 \
		palette-0.5.0 \
		palette_derive-0.5.0 \
		parking-2.0.0 \
		parking_lot-0.9.0 \
		parking_lot-0.11.1 \
		parking_lot_core-0.6.2 \
		parking_lot_core-0.8.3 \
		pem-0.8.3 \
		percent-encoding-2.1.0 \
		pest-2.1.3 \
		pest_derive-2.1.0 \
		pest_generator-2.1.3 \
		pest_meta-2.1.3 \
		phf-0.8.0 \
		phf_codegen-0.8.0 \
		phf_generator-0.8.0 \
		phf_shared-0.8.0 \
		pin-project-1.0.6 \
		pin-project-internal-1.0.6 \
		pin-project-lite-0.2.6 \
		pin-utils-0.1.0 \
		pkg-config-0.3.19 \
		png-0.16.8 \
		polling-2.0.3 \
		ppv-lite86-0.2.10 \
		pretty_assertions-0.6.1 \
		pretty_env_logger-0.4.0 \
		proc-macro-crate-0.1.5 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro-hack-0.5.19 \
		proc-macro-nested-0.1.7 \
		proc-macro2-1.0.26 \
		pulldown-cmark-0.8.0 \
		pure-rust-locales-0.5.6 \
		quick-error-1.2.3 \
		quote-1.0.9 \
		radium-0.5.3 \
		rand-0.4.6 \
		rand-0.7.3 \
		rand_chacha-0.2.2 \
		rand_core-0.3.1 \
		rand_core-0.4.2 \
		rand_core-0.5.1 \
		rand_hc-0.2.0 \
		rand_pcg-0.2.1 \
		ratelimit_meter-5.0.0 \
		rayon-1.5.0 \
		rayon-core-1.9.0 \
		rcgen-0.8.9 \
		rdrand-0.4.0 \
		redox_syscall-0.1.57 \
		redox_syscall-0.2.5 \
		redox_users-0.3.5 \
		redox_users-0.4.0 \
		regex-1.4.5 \
		regex-automata-0.1.9 \
		regex-syntax-0.6.23 \
		remove_dir_all-0.5.3 \
		rental-0.5.5 \
		rental-impl-0.5.5 \
		resize-0.5.5 \
		rgb-0.8.27 \
		ring-0.16.20 \
		rust-argon2-0.8.3 \
		rustc-demangle-0.1.18 \
		rustc-hash-1.1.0 \
		rustc_version-0.2.3 \
		rustls-0.19.0 \
		rusttype-0.9.2 \
		ryu-1.0.5 \
		same-file-1.0.6 \
		scoped-tls-1.0.0 \
		scoped_threadpool-0.1.9 \
		scopeguard-1.1.0 \
		sct-0.6.0 \
		semver-0.9.0 \
		semver-0.11.0 \
		semver-parser-0.7.0 \
		semver-parser-0.10.2 \
		serde-1.0.125 \
		serde_derive-1.0.125 \
		serde_json-1.0.64 \
		serde_repr-0.1.6 \
		serial-0.4.0 \
		serial-core-0.4.0 \
		serial-unix-0.4.0 \
		serial-windows-0.4.0 \
		sha-1-0.8.2 \
		sha2-0.9.3 \
		shared_library-0.1.9 \
		shell-words-1.0.0 \
		signal-hook-0.1.17 \
		signal-hook-0.3.8 \
		signal-hook-registry-1.3.0 \
		siphasher-0.3.5 \
		slab-0.4.2 \
		smallvec-0.6.14 \
		smallvec-1.6.1 \
		smawk-0.3.1 \
		smithay-client-toolkit-0.12.3 \
		smol-1.2.5 \
		socket2-0.4.0 \
		spin-0.5.2 \
		spinning_top-0.2.3 \
		squote-0.1.2 \
		stable_deref_trait-1.2.0 \
		static_assertions-1.1.0 \
		strsim-0.8.0 \
		strsim-0.10.0 \
		structopt-0.3.21 \
		structopt-derive-0.4.14 \
		svg_fmt-0.4.1 \
		syn-1.0.68 \
		sysinfo-0.16.5 \
		takeable-option-0.5.0 \
		tap-1.0.1 \
		tempdir-0.3.7 \
		term_size-0.3.2 \
		termcolor-1.1.2 \
		terminfo-0.7.3 \
		termios-0.2.2 \
		termios-0.3.3 \
		textwrap-0.11.0 \
		textwrap-0.13.4 \
		thiserror-1.0.24 \
		thiserror-impl-1.0.24 \
		tiff-0.6.1 \
		time-0.1.43 \
		tinyvec-1.2.0 \
		tinyvec_macros-0.1.0 \
		toml-0.5.8 \
		ttf-parser-0.6.2 \
		ttf-parser-0.12.0 \
		typenum-1.13.0 \
		ucd-trie-0.1.3 \
		uds_windows-0.1.6 \
		unicase-2.6.0 \
		unicode-bidi-0.3.4 \
		unicode-general-category-0.1.0 \
		unicode-general-category-0.3.0 \
		unicode-joining-type-0.3.1 \
		unicode-normalization-0.1.17 \
		unicode-segmentation-1.7.1 \
		unicode-width-0.1.8 \
		unicode-xid-0.2.1 \
		untrusted-0.7.1 \
		uom-0.30.0 \
		url-2.2.1 \
		utf8parse-0.2.0 \
		value-bag-1.0.0-alpha.6 \
		varbincode-0.1.0 \
		vcpkg-0.2.11 \
		vec-arena-1.1.0 \
		vec_map-0.8.2 \
		version_check-0.9.3 \
		void-1.0.2 \
		vswhom-0.1.0 \
		vswhom-sys-0.1.0 \
		waker-fn-1.1.0 \
		walkdir-2.3.2 \
		wasi-0.9.0+wasi-snapshot-preview1 \
		wasi-0.10.2+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.73 \
		wasm-bindgen-backend-0.2.73 \
		wasm-bindgen-futures-0.4.23 \
		wasm-bindgen-macro-0.2.73 \
		wasm-bindgen-macro-support-0.2.73 \
		wasm-bindgen-shared-0.2.73 \
		wayland-client-0.28.5 \
		wayland-commons-0.28.5 \
		wayland-cursor-0.28.5 \
		wayland-egl-0.28.5 \
		wayland-protocols-0.28.5 \
		wayland-scanner-0.28.5 \
		wayland-sys-0.28.5 \
		web-sys-0.3.50 \
		webpki-0.21.4 \
		webpki-roots-0.21.1 \
		weezl-0.1.4 \
		wepoll-sys-3.0.1 \
		which-4.1.0 \
		winapi-0.2.8 \
		winapi-0.3.9 \
		winapi-build-0.1.1 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-0.4.0 \
		windows-0.5.0 \
		windows_gen-0.4.0 \
		windows_gen-0.5.0 \
		windows_gen_macros-0.4.0 \
		windows_gen_macros-0.5.0 \
		windows_macros-0.4.0 \
		windows_macros-0.5.0 \
		winreg-0.6.2 \
		winreg-0.8.0 \
		wio-0.2.2 \
		ws2_32-sys-0.2.1 \
		wyz-0.2.0 \
		x11-2.18.2 \
		x11-clipboard-0.3.3 \
		xcb-0.8.2 \
		xcb-0.9.0 \
		xcb-util-0.3.0 \
		xcursor-0.3.3 \
		xdg-2.2.0 \
		xi-unicode-0.3.0 \
		xml-rs-0.8.3 \
		yasna-0.3.2 \
		zbus-1.8.0 \
		zbus_macros-1.8.0 \
		zstd-0.6.1+zstd.1.4.9 \
		zstd-safe-3.0.1+zstd.1.4.9 \
		zstd-sys-1.4.20+zstd.1.4.9 \
		zvariant-2.6.0 \
		zvariant_derive-2.6.0
CARGO_USE_GITHUB=	yes
# XXX https://github.com/rust-lang/cargo/issues/4101
CARGO_INSTALL_PATH=	${PLIST_FILES:Mbin/*:T}

post-patch:
# Extract (snapshot) version from the port instead of .tag file
	@${ECHO_CMD} '${DISTVERSIONFULL}' >${WRKSRC}/.tag
# lang/python3 cannot be used as a dependency
	@${REINPLACE_CMD} -e 's/"python3"/"${PYTHON_CMD:T}"/' \
		${WRKSRC}/cargo-crates/xcb-*/build.rs

post-install:
# Install assets similar to ci/deploy.sh
.for f in ${PORTNAME}.desktop ${PORTNAME}.appdata.xml \
	icon/terminal.png icon/${PORTNAME}-icon.svg shell-integration/${PORTNAME}.sh
	${MKDIR} ${STAGEDIR}${PREFIX}/${PLIST_FILES:M*.${f:E}:H}
	${INSTALL_DATA} ${WRKSRC}/assets/${f:R}.${f:E} \
		${STAGEDIR}${PREFIX}/${PLIST_FILES:M*.${f:E}}
.endfor

.include <bsd.port.mk>
