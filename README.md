# ghidra-decompiler-standalone

I've edited the printc.cc file to emit pcode like instructions for debugging, I will be moving towards making a printllvm class instead

### Steps

1. git clone https://github.com/toor-de-force/ghidra-decompiler-standalone.git
2. cd cpp
3. make decomp_dbg *might need dependencies
4. export SLEIGHHOME=(wherever ghidra's root is on your system)
5. ./decomp_dbg
6. restore (absolute path to desired xml file)
7. load function main
8. decompile
9. print C flat

### TODO
- Switch over to Ghidra's emit method of printing instructions
- Print LLVM (close to it at least)
