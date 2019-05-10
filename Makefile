#############################################################################
# Makefile for building: AIDI
# Generated by qmake (3.0) (Qt 5.7.1)
# Project:  AIDI.pro
# Template: app
# Command: E:\QT\5.7\msvc2013_64\bin\qmake.exe -spec win32-msvc2013 -o Makefile AIDI.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = E:\QT\5.7\msvc2013_64\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: AIDI.pro E:\QT\5.7\msvc2013_64\mkspecs\win32-msvc2013\qmake.conf E:\QT\5.7\msvc2013_64\mkspecs\features\spec_pre.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\common\angle.conf \
		E:\QT\5.7\msvc2013_64\mkspecs\common\msvc-base.conf \
		E:\QT\5.7\msvc2013_64\mkspecs\common\msvc-desktop.conf \
		E:\QT\5.7\msvc2013_64\mkspecs\qconfig.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dcore.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dcore_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dextras.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dextras_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dinput.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dinput_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dlogic.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dlogic_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquick.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquick_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickextras.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickextras_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickinput.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickinput_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickrender.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickrender_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3drender.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3drender_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axbase.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axbase_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axcontainer.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axcontainer_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axserver.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axserver_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_bluetooth.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_bluetooth_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_bootstrap_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_charts.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_charts_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_clucene_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_concurrent.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_concurrent_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_core.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_core_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_datavisualization.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_datavisualization_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_dbus.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_dbus_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_designer.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_designer_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_designercomponents_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_gamepad.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_gamepad_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_gui.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_gui_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_help.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_help_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_location.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_location_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_multimedia.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_multimedia_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_multimediawidgets.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_multimediawidgets_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_network.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_network_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_nfc.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_nfc_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_opengl.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_opengl_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_openglextensions.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_openglextensions_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_packetprotocol_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_platformsupport_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_positioning.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_positioning_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_printsupport.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_printsupport_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_purchasing.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_purchasing_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qml.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qml_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qmldebug_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qmldevtools_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qmltest.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qmltest_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quick.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quick_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quickcontrols2.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quickcontrols2_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quickparticles_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quicktemplates2_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quickwidgets.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quickwidgets_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_script.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_script_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_scripttools.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_scripttools_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_scxml.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_scxml_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_sensors.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_sensors_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_serialbus.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_serialbus_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_serialport.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_serialport_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_sql.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_sql_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_svg.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_svg_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_testlib.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_testlib_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_uiplugin.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_uitools.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_uitools_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webchannel.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webchannel_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webengine.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webengine_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webenginecore.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webenginecore_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webenginecoreheaders_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webenginewidgets.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webenginewidgets_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_websockets.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_websockets_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webview.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webview_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_widgets.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_widgets_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_winextras.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_winextras_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_xml.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_xml_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_xmlpatterns.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_xmlpatterns_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_zlib_private.pri \
		E:\QT\5.7\msvc2013_64\mkspecs\features\qt_functions.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\qt_config.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\win32\qt_config.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\win32-msvc2013\qmake.conf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\spec_post.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\exclusive_builds.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\toolchain.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\default_pre.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\win32\default_pre.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\resolve_config.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\exclusive_builds_post.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\default_post.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\win32\rtti.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\precompile_header.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\warn_on.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\qt.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\resources.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\moc.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\win32\opengl.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\uic.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\file_copies.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\win32\windows.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\testcase_targets.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\exceptions.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\yacc.prf \
		E:\QT\5.7\msvc2013_64\mkspecs\features\lex.prf \
		AIDI.pro \
		E:\QT\5.7\msvc2013_64\lib\qtmain.prl \
		E:\QT\5.7\msvc2013_64\lib\Qt5Widgets.prl \
		E:\QT\5.7\msvc2013_64\lib\Qt5Gui.prl \
		E:\QT\5.7\msvc2013_64\lib\Qt5Core.prl
	$(QMAKE) -spec win32-msvc2013 -o Makefile AIDI.pro
E:\QT\5.7\msvc2013_64\mkspecs\features\spec_pre.prf:
E:\QT\5.7\msvc2013_64\mkspecs\common\angle.conf:
E:\QT\5.7\msvc2013_64\mkspecs\common\msvc-base.conf:
E:\QT\5.7\msvc2013_64\mkspecs\common\msvc-desktop.conf:
E:\QT\5.7\msvc2013_64\mkspecs\qconfig.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dcore.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dcore_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dextras.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dextras_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dinput.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dinput_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dlogic.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dlogic_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquick.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquick_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickextras.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickextras_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickinput.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickinput_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickrender.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3dquickrender_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3drender.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_3drender_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axbase.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axbase_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axcontainer.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axcontainer_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axserver.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_axserver_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_bluetooth.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_bluetooth_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_bootstrap_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_charts.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_charts_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_clucene_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_concurrent.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_concurrent_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_core.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_core_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_datavisualization.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_datavisualization_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_dbus.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_dbus_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_designer.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_designer_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_designercomponents_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_gamepad.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_gamepad_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_gui.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_gui_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_help.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_help_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_location.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_location_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_multimedia.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_multimedia_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_multimediawidgets.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_network.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_network_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_nfc.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_nfc_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_opengl.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_opengl_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_openglextensions.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_openglextensions_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_packetprotocol_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_platformsupport_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_positioning.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_positioning_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_printsupport.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_printsupport_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_purchasing.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_purchasing_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qml.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qml_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qmldebug_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qmldevtools_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qmltest.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qmltest_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quick.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quick_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quickcontrols2.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quickcontrols2_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quickparticles_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quicktemplates2_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quickwidgets.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_quickwidgets_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_script.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_script_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_scripttools.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_scripttools_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_scxml.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_scxml_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_sensors.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_sensors_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_serialbus.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_serialbus_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_serialport.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_serialport_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_sql.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_sql_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_svg.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_svg_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_testlib.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_testlib_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_uiplugin.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_uitools.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_uitools_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webchannel.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webchannel_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webengine.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webengine_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webenginecore.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webenginecore_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webenginecoreheaders_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webenginewidgets.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webenginewidgets_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_websockets.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_websockets_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webview.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_webview_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_widgets.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_widgets_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_winextras.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_winextras_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_xml.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_xml_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_xmlpatterns.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\modules\qt_lib_zlib_private.pri:
E:\QT\5.7\msvc2013_64\mkspecs\features\qt_functions.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\qt_config.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\win32\qt_config.prf:
E:\QT\5.7\msvc2013_64\mkspecs\win32-msvc2013\qmake.conf:
E:\QT\5.7\msvc2013_64\mkspecs\features\spec_post.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\exclusive_builds.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\toolchain.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\default_pre.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\win32\default_pre.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\resolve_config.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\exclusive_builds_post.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\default_post.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\win32\rtti.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\precompile_header.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\warn_on.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\qt.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\resources.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\moc.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\win32\opengl.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\uic.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\file_copies.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\win32\windows.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\testcase_targets.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\exceptions.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\yacc.prf:
E:\QT\5.7\msvc2013_64\mkspecs\features\lex.prf:
AIDI.pro:
E:\QT\5.7\msvc2013_64\lib\qtmain.prl:
E:\QT\5.7\msvc2013_64\lib\Qt5Widgets.prl:
E:\QT\5.7\msvc2013_64\lib\Qt5Gui.prl:
E:\QT\5.7\msvc2013_64\lib\Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-msvc2013 -o Makefile AIDI.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
	-$(DEL_FILE) AIDI.exp
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) AIDI.lib

release-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile