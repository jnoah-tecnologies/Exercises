FROM amd64/ubuntu

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y --no-install-recommends git build-essential cmake clang libssl-dev libpcap-dev tshark python python3 python3-pip vim nano default-jdk nodejs php
RUN apt-get update && \
    apt-get install -y curl nmap sqlmap hydra patator dirb golang wget net-tools git net-tools tshark tcpdump iputils-ping dnsutils traceroute netcat arp-scan

RUN apt clean

# Create User
RUN useradd --shell /bin/bash --home-dir /home/dev64 --create-home --system dev64
RUN echo "dev64:dev64" | chpasswd

WORKDIR /home/dev64/bin
COPY gotty /home/dev64/bin/

WORKDIR /home/dev64

# Hacker tools: FFuF (Fuzz Faster u Fool)
RUN go get -u github.com/ffuf/ffuf
RUN git clone https://github.com/danielmiessler/SecLists

#./bin/gotty --credential cr_rf:Q8GzRDkF4qAC7eY4 -w bash
ENTRYPOINT ["./bin/gotty","--credential","rainforest:Q8GzRDkF4qAC7eY4","-w","bash"]

