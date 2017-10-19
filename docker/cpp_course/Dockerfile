FROM ubuntu:16.04

# Setup environment
ENV DEBIAN_FRONTEND noninteractive

# Install development packages
RUN apt-get update && apt-get install -y \
	sudo \
	git \
	build-essential \
	vim \
	tmux \
	openssh-server \
	software-properties-common \
	bash-completion \
	debian-keyring \
	debian-archive-keyring

# Installs clang 3.9
RUN apt install --no-install-recommends -y software-properties-common
RUN wget -q -O - http://llvm.org/apt/llvm-snapshot.gpg.key | apt-key add -
RUN apt update && apt install --no-install-recommends -y \
    clang-3.9 \
    clang-format-3.9 \
    lldb-3.9

# Installs
RUN apt-get update && \
    apt-get install --no-install-recommends -y \
	bash-completion \
	binutils \
	coinor-libipopt-dev \
	doxygen \
	g++ \
	g++-5 \
	g++-5-multilib \
	gcc \
	gcc-5 \
	gcc-5-multilib \
	gdb \
	cmake \
    automake \
    autoconf \
    autoconf-archive \
    make

RUN mkdir /course
WORKDIR /course
