export ARCH=arm64
export CROSS_COMPILE=aarch64-linux-gnu-
export CROSS_COMPILE_COMPAT=arm-linux-gnueabi-
export LLVM=1
export LLVM_IAS=1

export ABI_OUT_TAG="mtk"
export KMI_SYMBOL_LIST=android/abi_gki_aarch64_mtk
export GKI_MODULES_LIST=android/gki_aarch64_modules
export ABI_DEFINITION=android/abi_gki_aarch64.xml
export SKIP_CP_KERNEL_HDR=1

make -C $(pwd) O=$(pwd)/out gki_defconfig
make -C $(pwd) O=$(pwd)/out -j12
