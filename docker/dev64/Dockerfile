FROM amd64/ubuntu

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y git build-essential cmake clang libssl-dev libpcap-dev tshark python python3 python3-pip golang-go nodejs npm  vim nano
RUN apt clean

