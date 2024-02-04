#include <iostream>
#include <fstream>
#include <random>


void Encrypt();
unsigned char* createKeyAES(int keyBitSize);
//void createKeyAES(int);

int main() 
 {
	try 
	{
		unsigned char* bytes = createKeyAES(128);
		for (int index = 0; index < 128 / 8; index++)
		{
			std::cout << bytes[index];
		}
		
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
 }


// create a key for AES encryption
// AES supports key sizes of 128, 192, and 256 bits.
unsigned char* createKeyAES(int keyBitSize) 
{
	if (keyBitSize != 128 && keyBitSize != 192 && keyBitSize != 256)
	{
		std::string errorMsg("Invalid number of bits for AES key. " 
			"Bit amount Must be 128 bits, 192 bits, or 256 bits.");
		throw std::invalid_argument(errorMsg);
	}
	const int BYTE_AMOUNT = keyBitSize / 8;
	// unsigned char stores a byte of data
	// stores the bits in blocks of bytes for the AES key
	unsigned char* bytes = new unsigned char[BYTE_AMOUNT]; 
	std::random_device generator;
	std::uniform_int_distribution<int> distribution(0, 255);
	for (int index = 0; index < BYTE_AMOUNT; index++)
		bytes[index] = static_cast<unsigned char>(distribution(generator));
	
	return bytes;
}

void printKey()
{

}



/*
* Encrypt an AES key using RSA
* 
* 
*/

void encryptKey()
{

}



/*
* Encrypt a file using AES based encryption
*/
void Encrypt(const std::string &filePath) 
{

}