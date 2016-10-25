# Makefile generated by XPJ for osx32
-include Makefile.custom
ProjectName = PsFastXml
PsFastXml_custom_cflags := -isysroot $(APPLE_OSX_SDK_CURRENT_VERSION)
PsFastXml_custom_lflags := -isysroot $(APPLE_OSX_SDK_CURRENT_VERSION)
PsFastXml_cppfiles   += ./../../../../PxShared/src/fastxml/src/PsFastXml.cpp

PsFastXml_cpp_debug_dep    = $(addprefix $(DEPSDIR)/PsFastXml/debug/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PsFastXml_cppfiles)))))
PsFastXml_cc_debug_dep    = $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.debug.P, $(PsFastXml_ccfiles)))))
PsFastXml_c_debug_dep      = $(addprefix $(DEPSDIR)/PsFastXml/debug/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PsFastXml_cfiles)))))
PsFastXml_debug_dep      = $(PsFastXml_cpp_debug_dep) $(PsFastXml_cc_debug_dep) $(PsFastXml_c_debug_dep)
-include $(PsFastXml_debug_dep)
PsFastXml_cpp_release_dep    = $(addprefix $(DEPSDIR)/PsFastXml/release/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PsFastXml_cppfiles)))))
PsFastXml_cc_release_dep    = $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.release.P, $(PsFastXml_ccfiles)))))
PsFastXml_c_release_dep      = $(addprefix $(DEPSDIR)/PsFastXml/release/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PsFastXml_cfiles)))))
PsFastXml_release_dep      = $(PsFastXml_cpp_release_dep) $(PsFastXml_cc_release_dep) $(PsFastXml_c_release_dep)
-include $(PsFastXml_release_dep)
PsFastXml_cpp_checked_dep    = $(addprefix $(DEPSDIR)/PsFastXml/checked/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PsFastXml_cppfiles)))))
PsFastXml_cc_checked_dep    = $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.checked.P, $(PsFastXml_ccfiles)))))
PsFastXml_c_checked_dep      = $(addprefix $(DEPSDIR)/PsFastXml/checked/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PsFastXml_cfiles)))))
PsFastXml_checked_dep      = $(PsFastXml_cpp_checked_dep) $(PsFastXml_cc_checked_dep) $(PsFastXml_c_checked_dep)
-include $(PsFastXml_checked_dep)
PsFastXml_cpp_profile_dep    = $(addprefix $(DEPSDIR)/PsFastXml/profile/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PsFastXml_cppfiles)))))
PsFastXml_cc_profile_dep    = $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.profile.P, $(PsFastXml_ccfiles)))))
PsFastXml_c_profile_dep      = $(addprefix $(DEPSDIR)/PsFastXml/profile/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PsFastXml_cfiles)))))
PsFastXml_profile_dep      = $(PsFastXml_cpp_profile_dep) $(PsFastXml_cc_profile_dep) $(PsFastXml_c_profile_dep)
-include $(PsFastXml_profile_dep)
PsFastXml_debug_hpaths    := 
PsFastXml_debug_hpaths    += ./../../../../PxShared/include
PsFastXml_debug_hpaths    += ./../../../../PxShared/src/foundation/include
PsFastXml_debug_hpaths    += ./../../../../PxShared/src/fastxml/include
PsFastXml_debug_lpaths    := 
PsFastXml_debug_defines   := $(PsFastXml_custom_defines)
PsFastXml_debug_defines   += PX_FOUNDATION_DLL=0
PsFastXml_debug_defines   += PxShared_STATIC_LIB
PsFastXml_debug_defines   += _DEBUG
PsFastXml_debug_defines   += PX_DEBUG=1
PsFastXml_debug_defines   += PX_CHECKED=1
PsFastXml_debug_libraries := 
PsFastXml_debug_common_cflags	:= $(PsFastXml_custom_cflags)
PsFastXml_debug_common_cflags    += -MMD
PsFastXml_debug_common_cflags    += $(addprefix -D, $(PsFastXml_debug_defines))
PsFastXml_debug_common_cflags    += $(addprefix -I, $(PsFastXml_debug_hpaths))
PsFastXml_debug_cflags	:= $(PsFastXml_debug_common_cflags)
PsFastXml_debug_cflags  += -arch i386
PsFastXml_debug_cflags  += -pipe -mmacosx-version-min=10.7 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
PsFastXml_debug_cflags  += -g3 -gdwarf-2 -O0
PsFastXml_debug_cppflags	:= $(PsFastXml_debug_common_cflags)
PsFastXml_debug_cppflags  += -arch i386
PsFastXml_debug_cppflags  += -pipe -mmacosx-version-min=10.7 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
PsFastXml_debug_cppflags  += -g3 -gdwarf-2 -O0
PsFastXml_debug_lflags    := $(PsFastXml_custom_lflags)
PsFastXml_debug_lflags    += $(addprefix -L, $(PsFastXml_debug_lpaths))
PsFastXml_debug_lflags  += $(addprefix -l, $(PsFastXml_debug_libraries))
PsFastXml_debug_lflags  += -arch i386
PsFastXml_debug_objsdir  = $(OBJS_DIR)/PsFastXml_debug
PsFastXml_debug_cpp_o    = $(addprefix $(PsFastXml_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PsFastXml_cppfiles)))))
PsFastXml_debug_cc_o    = $(addprefix $(PsFastXml_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.o, $(PsFastXml_ccfiles)))))
PsFastXml_debug_c_o      = $(addprefix $(PsFastXml_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PsFastXml_cfiles)))))
PsFastXml_debug_obj      = $(PsFastXml_debug_cpp_o) $(PsFastXml_debug_cc_o) $(PsFastXml_debug_c_o)
PsFastXml_debug_bin      := ./../../../../PxShared/lib/osx32/libPsFastXmlDEBUG.a

clean_PsFastXml_debug: 
	@$(ECHO) clean PsFastXml debug
	@$(RMDIR) $(PsFastXml_debug_objsdir)
	@$(RMDIR) $(PsFastXml_debug_bin)
	@$(RMDIR) $(DEPSDIR)/PsFastXml/debug

build_PsFastXml_debug: postbuild_PsFastXml_debug
postbuild_PsFastXml_debug: mainbuild_PsFastXml_debug
mainbuild_PsFastXml_debug: prebuild_PsFastXml_debug $(PsFastXml_debug_bin)
prebuild_PsFastXml_debug:

$(PsFastXml_debug_bin): $(PsFastXml_debug_obj) 
	mkdir -p `dirname ./../../../../PxShared/lib/osx32/libPsFastXmlDEBUG.a`
	@$(AR) rcs $(PsFastXml_debug_bin) $(PsFastXml_debug_obj)
	$(ECHO) building $@ complete!

PsFastXml_debug_DEPDIR = $(dir $(@))/$(*F)
$(PsFastXml_debug_cpp_o): $(PsFastXml_debug_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling debug $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_cppfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(PsFastXml_debug_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PsFastXml/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_cppfiles))))))
	cp $(PsFastXml_debug_DEPDIR).d $(addprefix $(DEPSDIR)/PsFastXml/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/PsFastXml/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_cppfiles))))).P; \
	  rm -f $(PsFastXml_debug_DEPDIR).d

$(PsFastXml_debug_cc_o): $(PsFastXml_debug_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling debug $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_ccfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(PsFastXml_debug_cppflags) -c $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_ccfiles)) -o $@
	mkdir -p $(dir $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_ccfiles))))))
	cp $(PsFastXml_debug_DEPDIR).d $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_ccfiles))))).debug.P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_ccfiles))))).debug.P; \
	  rm -f $(PsFastXml_debug_DEPDIR).d

$(PsFastXml_debug_c_o): $(PsFastXml_debug_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling debug $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_cfiles))...
	mkdir -p $(dir $(@))
	$(CC) $(PsFastXml_debug_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PsFastXml/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_cfiles))))))
	cp $(PsFastXml_debug_DEPDIR).d $(addprefix $(DEPSDIR)/PsFastXml/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/PsFastXml/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_debug_objsdir),, $@))), $(PsFastXml_cfiles))))).P; \
	  rm -f $(PsFastXml_debug_DEPDIR).d

PsFastXml_release_hpaths    := 
PsFastXml_release_hpaths    += ./../../../../PxShared/include
PsFastXml_release_hpaths    += ./../../../../PxShared/src/foundation/include
PsFastXml_release_hpaths    += ./../../../../PxShared/src/fastxml/include
PsFastXml_release_lpaths    := 
PsFastXml_release_defines   := $(PsFastXml_custom_defines)
PsFastXml_release_defines   += PX_FOUNDATION_DLL=0
PsFastXml_release_defines   += PxShared_STATIC_LIB
PsFastXml_release_defines   += NDEBUG
PsFastXml_release_libraries := 
PsFastXml_release_common_cflags	:= $(PsFastXml_custom_cflags)
PsFastXml_release_common_cflags    += -MMD
PsFastXml_release_common_cflags    += $(addprefix -D, $(PsFastXml_release_defines))
PsFastXml_release_common_cflags    += $(addprefix -I, $(PsFastXml_release_hpaths))
PsFastXml_release_cflags	:= $(PsFastXml_release_common_cflags)
PsFastXml_release_cflags  += -arch i386
PsFastXml_release_cflags  += -pipe -mmacosx-version-min=10.7 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
PsFastXml_release_cflags  += -O3 -fno-strict-aliasing
PsFastXml_release_cppflags	:= $(PsFastXml_release_common_cflags)
PsFastXml_release_cppflags  += -arch i386
PsFastXml_release_cppflags  += -pipe -mmacosx-version-min=10.7 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
PsFastXml_release_cppflags  += -O3 -fno-strict-aliasing
PsFastXml_release_lflags    := $(PsFastXml_custom_lflags)
PsFastXml_release_lflags    += $(addprefix -L, $(PsFastXml_release_lpaths))
PsFastXml_release_lflags  += $(addprefix -l, $(PsFastXml_release_libraries))
PsFastXml_release_lflags  += -arch i386
PsFastXml_release_objsdir  = $(OBJS_DIR)/PsFastXml_release
PsFastXml_release_cpp_o    = $(addprefix $(PsFastXml_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PsFastXml_cppfiles)))))
PsFastXml_release_cc_o    = $(addprefix $(PsFastXml_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.o, $(PsFastXml_ccfiles)))))
PsFastXml_release_c_o      = $(addprefix $(PsFastXml_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PsFastXml_cfiles)))))
PsFastXml_release_obj      = $(PsFastXml_release_cpp_o) $(PsFastXml_release_cc_o) $(PsFastXml_release_c_o)
PsFastXml_release_bin      := ./../../../../PxShared/lib/osx32/libPsFastXml.a

clean_PsFastXml_release: 
	@$(ECHO) clean PsFastXml release
	@$(RMDIR) $(PsFastXml_release_objsdir)
	@$(RMDIR) $(PsFastXml_release_bin)
	@$(RMDIR) $(DEPSDIR)/PsFastXml/release

build_PsFastXml_release: postbuild_PsFastXml_release
postbuild_PsFastXml_release: mainbuild_PsFastXml_release
mainbuild_PsFastXml_release: prebuild_PsFastXml_release $(PsFastXml_release_bin)
prebuild_PsFastXml_release:

$(PsFastXml_release_bin): $(PsFastXml_release_obj) 
	mkdir -p `dirname ./../../../../PxShared/lib/osx32/libPsFastXml.a`
	@$(AR) rcs $(PsFastXml_release_bin) $(PsFastXml_release_obj)
	$(ECHO) building $@ complete!

PsFastXml_release_DEPDIR = $(dir $(@))/$(*F)
$(PsFastXml_release_cpp_o): $(PsFastXml_release_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling release $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_cppfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(PsFastXml_release_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PsFastXml/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_cppfiles))))))
	cp $(PsFastXml_release_DEPDIR).d $(addprefix $(DEPSDIR)/PsFastXml/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/PsFastXml/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_cppfiles))))).P; \
	  rm -f $(PsFastXml_release_DEPDIR).d

$(PsFastXml_release_cc_o): $(PsFastXml_release_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling release $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_ccfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(PsFastXml_release_cppflags) -c $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_ccfiles)) -o $@
	mkdir -p $(dir $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_ccfiles))))))
	cp $(PsFastXml_release_DEPDIR).d $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_ccfiles))))).release.P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_ccfiles))))).release.P; \
	  rm -f $(PsFastXml_release_DEPDIR).d

$(PsFastXml_release_c_o): $(PsFastXml_release_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling release $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_cfiles))...
	mkdir -p $(dir $(@))
	$(CC) $(PsFastXml_release_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PsFastXml/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_cfiles))))))
	cp $(PsFastXml_release_DEPDIR).d $(addprefix $(DEPSDIR)/PsFastXml/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/PsFastXml/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_release_objsdir),, $@))), $(PsFastXml_cfiles))))).P; \
	  rm -f $(PsFastXml_release_DEPDIR).d

PsFastXml_checked_hpaths    := 
PsFastXml_checked_hpaths    += ./../../../../PxShared/include
PsFastXml_checked_hpaths    += ./../../../../PxShared/src/foundation/include
PsFastXml_checked_hpaths    += ./../../../../PxShared/src/fastxml/include
PsFastXml_checked_lpaths    := 
PsFastXml_checked_defines   := $(PsFastXml_custom_defines)
PsFastXml_checked_defines   += PX_FOUNDATION_DLL=0
PsFastXml_checked_defines   += PxShared_STATIC_LIB
PsFastXml_checked_defines   += NDEBUG
PsFastXml_checked_defines   += PX_CHECKED=1
PsFastXml_checked_libraries := 
PsFastXml_checked_common_cflags	:= $(PsFastXml_custom_cflags)
PsFastXml_checked_common_cflags    += -MMD
PsFastXml_checked_common_cflags    += $(addprefix -D, $(PsFastXml_checked_defines))
PsFastXml_checked_common_cflags    += $(addprefix -I, $(PsFastXml_checked_hpaths))
PsFastXml_checked_cflags	:= $(PsFastXml_checked_common_cflags)
PsFastXml_checked_cflags  += -arch i386
PsFastXml_checked_cflags  += -pipe -mmacosx-version-min=10.7 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
PsFastXml_checked_cflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
PsFastXml_checked_cppflags	:= $(PsFastXml_checked_common_cflags)
PsFastXml_checked_cppflags  += -arch i386
PsFastXml_checked_cppflags  += -pipe -mmacosx-version-min=10.7 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
PsFastXml_checked_cppflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
PsFastXml_checked_lflags    := $(PsFastXml_custom_lflags)
PsFastXml_checked_lflags    += $(addprefix -L, $(PsFastXml_checked_lpaths))
PsFastXml_checked_lflags  += $(addprefix -l, $(PsFastXml_checked_libraries))
PsFastXml_checked_lflags  += -arch i386
PsFastXml_checked_objsdir  = $(OBJS_DIR)/PsFastXml_checked
PsFastXml_checked_cpp_o    = $(addprefix $(PsFastXml_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PsFastXml_cppfiles)))))
PsFastXml_checked_cc_o    = $(addprefix $(PsFastXml_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.o, $(PsFastXml_ccfiles)))))
PsFastXml_checked_c_o      = $(addprefix $(PsFastXml_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PsFastXml_cfiles)))))
PsFastXml_checked_obj      = $(PsFastXml_checked_cpp_o) $(PsFastXml_checked_cc_o) $(PsFastXml_checked_c_o)
PsFastXml_checked_bin      := ./../../../../PxShared/lib/osx32/libPsFastXmlCHECKED.a

clean_PsFastXml_checked: 
	@$(ECHO) clean PsFastXml checked
	@$(RMDIR) $(PsFastXml_checked_objsdir)
	@$(RMDIR) $(PsFastXml_checked_bin)
	@$(RMDIR) $(DEPSDIR)/PsFastXml/checked

build_PsFastXml_checked: postbuild_PsFastXml_checked
postbuild_PsFastXml_checked: mainbuild_PsFastXml_checked
mainbuild_PsFastXml_checked: prebuild_PsFastXml_checked $(PsFastXml_checked_bin)
prebuild_PsFastXml_checked:

$(PsFastXml_checked_bin): $(PsFastXml_checked_obj) 
	mkdir -p `dirname ./../../../../PxShared/lib/osx32/libPsFastXmlCHECKED.a`
	@$(AR) rcs $(PsFastXml_checked_bin) $(PsFastXml_checked_obj)
	$(ECHO) building $@ complete!

PsFastXml_checked_DEPDIR = $(dir $(@))/$(*F)
$(PsFastXml_checked_cpp_o): $(PsFastXml_checked_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling checked $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_cppfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(PsFastXml_checked_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PsFastXml/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_cppfiles))))))
	cp $(PsFastXml_checked_DEPDIR).d $(addprefix $(DEPSDIR)/PsFastXml/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/PsFastXml/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_cppfiles))))).P; \
	  rm -f $(PsFastXml_checked_DEPDIR).d

$(PsFastXml_checked_cc_o): $(PsFastXml_checked_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling checked $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_ccfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(PsFastXml_checked_cppflags) -c $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_ccfiles)) -o $@
	mkdir -p $(dir $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_ccfiles))))))
	cp $(PsFastXml_checked_DEPDIR).d $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_ccfiles))))).checked.P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_ccfiles))))).checked.P; \
	  rm -f $(PsFastXml_checked_DEPDIR).d

$(PsFastXml_checked_c_o): $(PsFastXml_checked_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling checked $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_cfiles))...
	mkdir -p $(dir $(@))
	$(CC) $(PsFastXml_checked_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PsFastXml/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_cfiles))))))
	cp $(PsFastXml_checked_DEPDIR).d $(addprefix $(DEPSDIR)/PsFastXml/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/PsFastXml/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_checked_objsdir),, $@))), $(PsFastXml_cfiles))))).P; \
	  rm -f $(PsFastXml_checked_DEPDIR).d

PsFastXml_profile_hpaths    := 
PsFastXml_profile_hpaths    += ./../../../../PxShared/include
PsFastXml_profile_hpaths    += ./../../../../PxShared/src/foundation/include
PsFastXml_profile_hpaths    += ./../../../../PxShared/src/fastxml/include
PsFastXml_profile_lpaths    := 
PsFastXml_profile_defines   := $(PsFastXml_custom_defines)
PsFastXml_profile_defines   += PX_FOUNDATION_DLL=0
PsFastXml_profile_defines   += PxShared_STATIC_LIB
PsFastXml_profile_defines   += NDEBUG
PsFastXml_profile_defines   += PX_PROFILE=1
PsFastXml_profile_libraries := 
PsFastXml_profile_common_cflags	:= $(PsFastXml_custom_cflags)
PsFastXml_profile_common_cflags    += -MMD
PsFastXml_profile_common_cflags    += $(addprefix -D, $(PsFastXml_profile_defines))
PsFastXml_profile_common_cflags    += $(addprefix -I, $(PsFastXml_profile_hpaths))
PsFastXml_profile_cflags	:= $(PsFastXml_profile_common_cflags)
PsFastXml_profile_cflags  += -arch i386
PsFastXml_profile_cflags  += -pipe -mmacosx-version-min=10.7 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
PsFastXml_profile_cflags  += -O3 -fno-strict-aliasing
PsFastXml_profile_cppflags	:= $(PsFastXml_profile_common_cflags)
PsFastXml_profile_cppflags  += -arch i386
PsFastXml_profile_cppflags  += -pipe -mmacosx-version-min=10.7 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
PsFastXml_profile_cppflags  += -O3 -fno-strict-aliasing
PsFastXml_profile_lflags    := $(PsFastXml_custom_lflags)
PsFastXml_profile_lflags    += $(addprefix -L, $(PsFastXml_profile_lpaths))
PsFastXml_profile_lflags  += $(addprefix -l, $(PsFastXml_profile_libraries))
PsFastXml_profile_lflags  += -arch i386
PsFastXml_profile_objsdir  = $(OBJS_DIR)/PsFastXml_profile
PsFastXml_profile_cpp_o    = $(addprefix $(PsFastXml_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PsFastXml_cppfiles)))))
PsFastXml_profile_cc_o    = $(addprefix $(PsFastXml_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.o, $(PsFastXml_ccfiles)))))
PsFastXml_profile_c_o      = $(addprefix $(PsFastXml_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PsFastXml_cfiles)))))
PsFastXml_profile_obj      = $(PsFastXml_profile_cpp_o) $(PsFastXml_profile_cc_o) $(PsFastXml_profile_c_o)
PsFastXml_profile_bin      := ./../../../../PxShared/lib/osx32/libPsFastXmlPROFILE.a

clean_PsFastXml_profile: 
	@$(ECHO) clean PsFastXml profile
	@$(RMDIR) $(PsFastXml_profile_objsdir)
	@$(RMDIR) $(PsFastXml_profile_bin)
	@$(RMDIR) $(DEPSDIR)/PsFastXml/profile

build_PsFastXml_profile: postbuild_PsFastXml_profile
postbuild_PsFastXml_profile: mainbuild_PsFastXml_profile
mainbuild_PsFastXml_profile: prebuild_PsFastXml_profile $(PsFastXml_profile_bin)
prebuild_PsFastXml_profile:

$(PsFastXml_profile_bin): $(PsFastXml_profile_obj) 
	mkdir -p `dirname ./../../../../PxShared/lib/osx32/libPsFastXmlPROFILE.a`
	@$(AR) rcs $(PsFastXml_profile_bin) $(PsFastXml_profile_obj)
	$(ECHO) building $@ complete!

PsFastXml_profile_DEPDIR = $(dir $(@))/$(*F)
$(PsFastXml_profile_cpp_o): $(PsFastXml_profile_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling profile $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_cppfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(PsFastXml_profile_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PsFastXml/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_cppfiles))))))
	cp $(PsFastXml_profile_DEPDIR).d $(addprefix $(DEPSDIR)/PsFastXml/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/PsFastXml/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_cppfiles))))).P; \
	  rm -f $(PsFastXml_profile_DEPDIR).d

$(PsFastXml_profile_cc_o): $(PsFastXml_profile_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling profile $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_ccfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(PsFastXml_profile_cppflags) -c $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_ccfiles)) -o $@
	mkdir -p $(dir $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_ccfiles))))))
	cp $(PsFastXml_profile_DEPDIR).d $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_ccfiles))))).profile.P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_ccfiles))))).profile.P; \
	  rm -f $(PsFastXml_profile_DEPDIR).d

$(PsFastXml_profile_c_o): $(PsFastXml_profile_objsdir)/%.o:
	$(ECHO) PsFastXml: compiling profile $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_cfiles))...
	mkdir -p $(dir $(@))
	$(CC) $(PsFastXml_profile_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PsFastXml/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_cfiles))))))
	cp $(PsFastXml_profile_DEPDIR).d $(addprefix $(DEPSDIR)/PsFastXml/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PsFastXml_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/PsFastXml/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PsFastXml_profile_objsdir),, $@))), $(PsFastXml_cfiles))))).P; \
	  rm -f $(PsFastXml_profile_DEPDIR).d

clean_PsFastXml:  clean_PsFastXml_debug clean_PsFastXml_release clean_PsFastXml_checked clean_PsFastXml_profile
	rm -rf $(DEPSDIR)

export VERBOSE
ifndef VERBOSE
.SILENT:
endif
