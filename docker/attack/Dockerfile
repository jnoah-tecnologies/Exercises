FROM dorowu/ubuntu-desktop-lxde-vnc

RUN apt-get update && \
    apt-get install -y nmap sqlmap hydra patator dirb golang wget net-tools git net-tools tshark tcpdump iputils-ping dnsutils traceroute netcat

# Hacker tools: FFuF (Fuzz Faster u Fool)
RUN go get -u github.com/ffuf/ffuf
RUN git clone https://github.com/danielmiessler/SecLists


