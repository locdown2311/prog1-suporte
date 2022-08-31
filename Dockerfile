FROM gcc:4.9
COPY . /usr/src/parte1
WORKDIR /usr/src/parte1/Prova-1
RUN make
CMD [ "./Lista-3/q1" ]