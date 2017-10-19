# Sample app

## Description

Boiler plate C++ project that lets you start an application. This project also
contains a Docker image to develop. See Docker section for more details on how
to run it.

## Docker

To run the docker image, you should first install docker. Then, assuming
`{REPO_PATH}` as the base repository path:

```
cd {REPO_PATH}/docker
make
```

That would compile the docker image. Afterwards, you can run the image as:

```
cd {REPO_PATH}/docker
./run.sh
```

You should see that the prompt is inside the _course_ folder.

## Build

To build this app, taking `{REPO_PATH}` as the base repository path:

```
cd {REPO_PATH}/course
mkdir build
cd build
cmake ..
make
```

## Running

To run the application, taking `{REPO_PATH}` as the base repository path and
after building:

```
cd {REPO_PATH}/course/build
./cpp_course
```

## Project organization

You'll find the following project organization:

- course: source code.
  - include: header files.
  - src: source files.
  - test: testing files.
- docker: docker related files.
  - cpp_course: contains Dockerfiles for development purposes.

### To change the library name

Just go to `{REPO_PATH}/CMakeLists.txt` and replce, in `add_library` macro,
`foo` by your `library_name`.

### To add new source files

Just go to `{REPO_PATH}/CMakeLists.txt` and add, under `LIBRARY_SOURCES`, your
new file.