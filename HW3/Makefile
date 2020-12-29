.PHONY: build

build:
	g++ ./Lab3.cpp -o cmd_parse_app

default_goal: build def 
.PHONY: def
def:
	./cmd_parse_app -h -l -v -g -n -p -V16

.PHONY: run

run:
	./cmd_parse_app -h
	./cmd_parse_app -l
	./cmd_parse_app -v
	./cmd_parse_app -g
	./cmd_parse_app -n
	./cmd_parse_app -p
	./cmd_parse_app -V16
	

.DEFAULT_GOAL:=default_goal