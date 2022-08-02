# camera

opencv basic camera program.

- requirements

```
$ sudo apt install libopencv-dev python3-opencv
```

- c++

```
$ cd camera/c++
$ load
$ ./cam
```

- python3

```
$ cd camera/python3
$ python3 cam.py
```

if you wan't to use opencv pip package(opencv-python), You should be careful of package collisions.

```
$ sudo apt purge python3-opencv
$ sudo apt autoremove
$ python3 -m pip install opencv-python
```

and, run python code.

```
$ cd camera/python3
$ python3 cam.py
```
