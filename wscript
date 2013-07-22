# -*- python -*-
# automatically generated wscript

import waflib.Logs as msg

PACKAGE = {
    'name': 'pkg2',
    'author': ["Sebastien Binet"], 
}

def pkg_deps(ctx):
    ctx.use_pkg("pkg-settings")
    ctx.use_pkg("pkg1")
    return

def configure(ctx):
    #ctx.load('find_root')
    #ctx.find_root()
    return

def build(ctx):

    ctx(
        #features = "build_linklib build_rootcint_dict",
        features = "build_rootcint_dict build_linklib",
        name = "pkg2",
        source = "src/pkg2.cxx src/pkg2-ext.cxx src/pkg2Dict.h",
        use = ["ROOT", "pkg1"],
        includes = "inc",
        rootcint_linkdef = 'src/LinkDef.h',
        )
    
    return
