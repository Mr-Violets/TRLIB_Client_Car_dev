TRLIB_CAR_CLIENT
<!-- 2024-9-3 ���������¼
1. ���ڲ�ͬ�豸�����ļ�������ͬ�����⣬����һ��ʱ���ͶϿ��ˡ�
2. ���ڶ�����ͷ�ɼ�ʱ�䲻��ͬ�����⡣
3. ���ڲ�ͬ���߳̽���ʱ�䲻ͬ�����⣬�����߳̽����󣬷������̻߳�δ���͵��ļ�Ҳ�ᱻǿ�ƽ����� -->
## ����Ҫ��

����Ŀ�Ŀ��������л���Ҫ�����£�

- **����ϵͳ**: Ubuntu �� 20.04 LTS
- **��������**: CMake �� 3.15
- **������**: GCC �� 9.1
- **������**:
  - **Boost**: �� 1.65.0����Ҫ `system` �����
  - **OpenCV**: �� 3.2.0
  - **PCL (Point Cloud Library)**: �� 1.2
  - **PortAudio**: �� 19.6.0
  - **OpenSSL**: �� 1.1.1

ȷ��ϵͳ���������ϰ汾Ҫ�����²��轫���������Ŀ�Ĺ��������С�

## ��������

### ��¡��Ŀ��������ĿĿ¼
- git clone <git@github.com:Bouealt/TRLIB_CLIENT_CAR.git>
- cd file_client

### �л���dev��֧
git checkout dev

### ���ɹ����ļ�
cmake .

### ������Ŀ
make

<!-- ### ��������Ȩ��
sudo chmod 666 /dev/ttyUSB0 ��֤����
sudo chmod 666 /dev/video0 ��֤���� -->

### ���п�ִ���ļ���������ҪȨ�ޣ�
./VehicleClient



## �����ⰲװ
### ��װCMake��GCC
sudo apt update
sudo apt install -y cmake gcc g++

### ��װBoost��
sudo apt install -y libboost-all-dev

### ��װOpenCV
sudo apt install -y libopencv-dev

### ��װPCL
sudo apt install -y libpcl-dev

### ��װPortAudio
sudo apt install -y portaudio19-dev

### ��װOpenSSL
sudo apt install -y libssl-dev

## ���ָ��

### ���Ubuntu�汾
lsb_release -a

### ���CMake�汾
cmake --version

### ���GCC�汾
gcc --version

### ���Boost�汾
dpkg -s libboost-dev | grep 'Version'

### ���OpenCV�汾
pkg-config --modversion opencv4  # �� opencv�����ʹ�õ���3.x�汾

### ���PCL�汾
dpkg -s libpcl-dev | grep 'Version'

### ���PortAudio�汾
dpkg -s portaudio19-dev | grep 'Version'

### ���OpenSSL�汾
openssl version