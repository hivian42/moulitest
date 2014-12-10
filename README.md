# Moulitest: Test your 42 projects

<img align="right" height="230" src="http://i.imgur.com/3p0Xg7Z.png">

This repository contains tests for several projects done at 42.

Tested 42 projects:

* libft
* get_next_line
* ft_ls
* ft_printf (comming soon)

Feedbacks, github issues and pull requests are welcome.

## Quick Start
Create the config file

	cp config.ini.template config.ini

Edit the config file

	vim config.ini # add your configs

Run tests
	
	make
	

Notes
---
GNL

* If the tests stop in the middle, it could mean that your get_next_line is waiting for an input from the file descriptor but nothing is coming.

Credits
---

The test framework and many libft tests are based on the work done by Maxime Bacoux (mbacoux)
Here is the original repository: https://github.com/Nax/libft-test
