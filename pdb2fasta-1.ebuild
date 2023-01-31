# Distributed under the terms of the GNU General Public License v3

EAPI=8

inherit toolchain-funcs git-r3 

DESCRIPTION="The pdb2fasta Tool, extracting fasta sequences for proteins in PDB FILES"
HOMEPAGE="https://github.com/haschka/pdb2fasta"
EGIT_REPO_URI="https://github.com/haschka/pdb2fasta.git"

LICENSE="GPL-3"
SLOT="0"
KEYWORDS="amd64 ~x86"
IUSE=""

src_compile() {
        $(tc-getCC) -o pdb2fasta pdb2fasta.c ${CFLAGS} ${LDFLAGS}
}

src_install() {
        dobin pdb2fasta
}