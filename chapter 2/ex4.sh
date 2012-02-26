# Download it
curl -O http://valgrind.org/downloads/valgrind-3.7.0.tar.bz2

#use md5sum to make sure it matches the one on the site
mdsum valgrind-3.7.0.tar.bz2

#unpack it
tar -xjvf valgrind-3.7.0.tar.bz2

cd valgrind-3.7.0

#configure it
./configure

#make it
make

#install it
sudo make install
