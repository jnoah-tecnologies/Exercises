FROM amd64/ubuntu

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y --no-install-recommends git build-essential cmake clang libssl-dev libpcap-dev tshark python python3 python3-pip vim nano default-jdk nodejs php
RUN apt clean

# Create User
RUN useradd --shell /bin/bash --home-dir /home/dev64 --create-home --system dev64
RUN echo "dev64:dev64" | chpasswd

WORKDIR /home/dev64/bin
COPY gotty /home/dev64/bin/

WORKDIR /home/dev64

# clone source
RUN git clone https://github.com/jnoah-tecnologies/Exercises.git
RUN rm -rf /home/dev64/Exercises/.git /home/dev64/Exercises/README.md /home/dev64/Exercises/docker
RUN chown dev64:dev64 -R /home/dev64/Exercises

