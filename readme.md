# simulator

###### this file is an `.md` file, use any kind of Markdown Viewer to get better reading experience

## Software requirements

### OS

any OS having cpp compiler `GCC-6.3.0-1` or above.

In theory, it can run on windows and linux operating systems.

After testing, it can run on windows 10 version 1909 and the following linux versions

- Linux version 4.4.0-18362-Microsoft (Microsoft@Microsoft.com) (gcc version 5.4.0 (GCC) ) 

#### 注意

低於`GCC-6.3.0-1`的CPP編譯器無法編譯這份程式碼

## How to install (compile/setup)

for `linux` at command line enter:

```bash=
g++ simulator.cpp -o simulator
```

for `windows` at `CMD` enter:

```bash=
g++ simulator.cpp -o simulator.exe
```

### Prepare the following file

- input.txt

And place it in the same directory as the executable file.

## How to execute

for `linux` at command line enter:

```bash=
./simulator
```

for `windows` at `CMD` enter:

```bash=
simulator.exe
```

## Operation screen and Results

### 執行中將顯示

- 輸入參數(從`inputfile`中讀入)
- K map
- 圈起來的群組
- min sop

### 運行過程

- 將顯示進度條
- 些許參數將導致運行速度下降
- 若進度條正常顯示但運行時間過長，還煩請耐心等待。最多需耗時數分鐘。

### 輸出

請查看`output.txt`來得知最終結果

## 聯絡開發人員

若此份程式碼無法執行，請聯絡以下:

`e24074724@mail.ncku.edu.tw`
