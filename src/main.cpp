//
// This file is part of the revenant distribution (https://github.com/mistericy/revenant).
// Copyright (c) 2021, Alexandros Koutroulis <icyd3mon [at] gmail [dot] com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 3.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.
//

#include <cstdio>
#include "config.h"

int main(int argc, char** argv) {
	printf("Hello, Revenant (Version: %d.%d)\n", revenant_VERSION_MAJOR, revenant_VERSION_MINOR);
	return 0;
}
