FROM i386/ubuntu

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y --no-install-recommends git build-essential cmake clang libssl-dev libpcap-dev tshark python python3 python3-pip vim nano default-jdk nodejs php
RUN apt clean

# Create User
RUN useradd --shell /bin/bash --home-dir /home/dev32 --create-home --system dev32
RUN echo "dev32:dev32" | chpasswd

WORKDIR /home/dev32/bin
COPY gotty /home/dev32/bin/

WORKDIR /home/dev32

# clone source
RUN git clone https://github.com/jnoah-tecnologies/Exercises.git
RUN rm -rf /home/dev32/Exercises/.git /home/dev32/Exercises/README.md /home/dev32/Exercises/docker
RUN chown dev32:dev32 -R /home/dev32/Exercises

