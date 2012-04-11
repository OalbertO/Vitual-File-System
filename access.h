#include<stdio.h>
#include"structure.h"

unsigned int access (user_id,inode,mode)

unsigned int user_id;
struct inode *inode;
unsigned short mode;
{
	switch (mode)
	{
		case READ:
			if (inode -> di_mode & AREAD ) return 1;
			if ((inode -> di_mode & GREAD ) && (user[user_id].u_gid == inode -> di_gid)) return 1;
			if ((inode -> di_mode & UREAD ) && (user[user_id].u_uid == inode -> di_uid)) return 1;
		    return 0;
		case WRITE:
			if (inode -> di_mode & AWRITE ) return 1;
			if ((inode -> di_mode & GWRITE ) && (user[user_id].u_gid == inode -> di_gid)) return 1;
			if ((inode -> di_mode & UWRITE ) && (user[user_id].u_uid == inode -> di_uid)) return 1;
			return 0;
		case EXICUTE:
			if (inode -> di_mode & AEXEC ) return 1;
			if ((inode -> di_mode & GEXEC ) && (user[user_id].u_gid == inode -> di_gid)) return 1;
			if ((inode -> di_mode & UEXEC ) && (user[user_id].u_uid == inode -> di_uid)) return 1;
			return 0;
		default:
			return 1;
	}
}


	    


