FROM gcc:4.9
COPY . /usr/src/resumos
WORKDIR /usr/src/resumos/Prova-2
RUN make
CMD [ "./Lista-5/q1" ]