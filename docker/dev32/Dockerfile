FROM i386/ubuntu

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y git build-essential cmake clang libssl-dev libpcap-dev tshark python python3 python3-pip vim nano
RUN apt clean

# Create User
RUN useradd --shell /bin/bash --home-dir /home/dev32 --create-home --system dev32
RUN echo "dev32:dev32" | chpasswd

WORKDIR /home/dev32

# clone source
RUN git clone https://github.com/jnoah-tecnologies/Exercises.git

