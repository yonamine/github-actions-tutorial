# syntax=docker/dockerfile:1

FROM ubuntu:22.04

LABEL Description="C++ Build Environment"

RUN apt update && apt install -y build-essential cmake git vim ninja-build

WORKDIR /work
