FROM amd64/ubuntu

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y git build-essential cmake clang libssl-dev libpcap-dev tshark python python3 python3-pip golang-go nodejs npm  vim nano
RUN apt clean

# Create User
RUN useradd --shell /bin/bash --home-dir /home/dev64 --create-home --system dev64
RUN echo "dev64:dev64" | chpasswd

