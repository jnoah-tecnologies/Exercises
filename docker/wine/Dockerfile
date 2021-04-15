FROM jnoahdevelop/dev64

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y wine64-development mingw-w64
RUN apt clean

# Create User
RUN useradd --shell /bin/bash --home-dir /home/wine --create-home --system wine
RUN echo "wine:wine" | chpasswd

