--- ui/views/style/platform_style.cc.orig	2021-01-07 00:37:29 UTC
+++ ui/views/style/platform_style.cc
@@ -75,7 +75,7 @@ gfx::Range PlatformStyle::RangeToDeleteBackwards(const
 #endif  // OS_APPLE
 
 #if !BUILDFLAG(ENABLE_DESKTOP_AURA) || \
-    (!defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (!defined(OS_LINUX) && !defined(OS_CHROMEOS) && !defined(OS_BSD))
 // static
 std::unique_ptr<Border> PlatformStyle::CreateThemedLabelButtonBorder(
     LabelButton* button) {
