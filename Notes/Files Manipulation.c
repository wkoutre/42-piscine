Files Manipulation

Ask system to open a file --> Returns a File Descriptor (an integer)

File Descriptor can be used to manipulate the file

int write(int fd, char *f, int count);

FD:

0: standard entry
1: standard output
2: standrad error output

OPENING FILES // man open

2 or 3 params:

1. File to open (relative or absolute path)
2. Opening mode: read-only, write-only, or BOTH; either returns an int of the FD or -1 for an error
3. 

FLAGS

// O_RDONLY ; read only
// O_WRONLY ; write only
// O_RDWR	; read/write

// O_CREATE - craete a file that does not yet exist
// O_TRUNC
// O_APPEND

*****EXAMPLE*****

#include <sys/types.h>					// headers are required by open
#include <sys/stat.h>
#include <fcntl.h>
#include "j12.h"

int	main()
{
	int fd;								// int assigned to open's return

	fd = open("alph", O_RDONLY);		// file is "alph"
	ft_putnbr(fd);						// to check that there's a valid FD (file descriptor)
	return (0);
}


fd = open("42", O_WRONLY | O_CREAT | S_IRUSR | I_IWUSR)	// opens file "42", creates it if it
															// doesn't already exist, gives user 
															// read/write permissions

-rw-------	42 //return

// ALWAYS check OPEN's return

int fd = open("/dev/42", O_WRONLY | O_CREAT | S_IRUSR | S_IWUSR)	// no access to /dev, so it WILL return error

if (fd == -1)
{
	ft_putstr("open() failed\n");
}


CLOSING A FILE - CLOSE // man close

only takes a file descriptor as a parameter
returns 0; -1 if there is an error

int fd = open("42", O_WRONLY | O_CREAT | S_IRUSR | S_IWUSR)

if (close(fd) == -1)
{
	ft_putstr("close() failed\n");
	return (1);
}

WRITING IN A FILE

writing in a file descriptor (using write)

void	ft_putchar(int fd, char c)
{
	write( fd, &c, 1);
}

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "j12.h"

int	main()
{
	int fd;
	fd = open("42", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR) // without O_APPEND, we can't write AFTER last current byte
	if (fd == -1)														// with append, it'll keep adding Z each
	{																	// time the program writing to the file is run
		ft_putstr("open() error\n");
		return (1);
	}
	ft_putnbr(fd);
	ft_putchar(fd, 'Z');						// writes a Z inside the file
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}


// IF we re-write ft_putchar to:

void	ft_putstr_fd(int fd, chat *str)
{
	write, fd, str, ft_strlen(str));
}

// and we call ft_putstr_fd in our main like:

ft_putstr_fd(fd, "Hello world\n");

// we'll get "Hello world" on a new line each time we launch the program

READING FROM A FILE DESCRIPTOR

// Read = 3 parameters

1. int fd,
2. char *buf,
3. int count

read returns # of bytes being read, or -1 for an error

// *****EXAMPLE*****

#include <sys/types.h>
#include <sys.stat.h>
#include <fcntl.h>
#include "j12.h"

#define BUF_SIZE 4096

int	main()
{
	int fd;
	int ret;
	char buf(BUF_SIZE + 1)
	
	fd = open("42", O_WRONLY | O_CREATE | O_APPEND, S_IRUSR | S_IWUSR)
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return 91);
	}
	ret = read(fd, buf, BUF_SIZE));
	buf[ret] = '\0';
	ft_putnbr(ret);						// print # of characters that have been read -- 31
	ft_putstr(buf);						
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}

// LOOP on "read" when we don't know how many bytes are needed

while ((ret = read(fd, buf, BUF_SIZE)))
{
	buf[ret] = '\0';
	ft_putnbr(ret);
	ft_putstr(buf);
}										// if we set the buffer to 10, we'll only print 10 characters per loop
										// once the last loop has been completed, the loop ands a 0 is printed

OFFSET

// When we run operations on a file descriptor, and one hasn not been closed, a 
// "reading head" is pointing to the onging byte

LSEEK // man lseek

fd
offset
mode

returns new offset or -1 for an error

lseek(42, -40, SEEK_END) = 2		// SEEK_END means we start from the end

// we're back to the second byte of the file

// if we add:
lseek(fd, -10, SEEK_END); // to our while loop in the previous function, it'll result in an infinite loop

// the last 10 characters will keep looping through

