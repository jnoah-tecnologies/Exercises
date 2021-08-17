FROM jnoahdevelop/network

# https://jpn.nec.com/cybersecurity/blog/210604/index.html

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y nmap sqlmap hydra patator dirb golang

# Hacker tools: FFuF (Fuzz Faster u Fool)
RUN go get -u github.com/ffuf/ffuf
RUN git clone https://github.com/danielmiessler/SecLists

RUN apt clean

