FROM gcc:latest
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp
RUN g++ -o delhi_metro main.cpp
CMD ["./delhi_metro"]
