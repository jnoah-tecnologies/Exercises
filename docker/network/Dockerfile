FROM amd64/ubuntu

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y git net-tools tshark tcpdump iputils-ping dnsutils traceroute netcat
RUN apt clean

# Create User
RUN useradd --shell /bin/bash --home-dir /home/dev64 --create-home --system network
RUN echo "network:network" | chpasswd

WORKDIR /home/network


