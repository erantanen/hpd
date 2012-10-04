
hpd  Hex Port Dump
===================


Ed Rantanen

Date 03 oct 2012
Version 00002.a


 This is an inital experiment in "Promiscuous mode" socket capture.

 As an experiment, this code at somepoint might not compile, or it might
 
                 I give warning, WARNING ....

                  This code experimental. 

 At current I am looking at repition or patterns from looking at the hex output.
 On the initial program there a some intresting things to see.
    IP Header allways starts with (?) 


 Also looking at the structure of the actul IP and TCP

      struct ipheader {
     	 unsigned char      iph_ihl:5,
                            iph_ver:4;
	 unsigned char      iph_tos;
         unsigned short int iph_len;
         unsigned short int iph_ident;
         unsigned char      iph_flags;
         unsigned short int iph_offset;
         unsigned char      iph_ttl;
         unsigned char      iph_protocol;
         unsigned short int iph_chksum;
         unsigned int       iph_sourceip;
         unsigned int       iph_destip;
     };


To compile
---------- 
 gcc hpd.c -0 hpd
    or
 make "at the commmand line"


To run
----------
 ./hpd

 To see results
---------------

 Open a browser and surf someplace and this is what you should see. 

root@xman:/programs_c/hpd# ./hpd 
Listenning...
6 4500  002C  0C9B  0000  4006  E39C  CC5D  B228  0A00  020F 
6 4500  002C  0C9E  0000  4006  EA96  4272  3517  0A00  020F 
6 4500  002C  0C9F  0000  4006  F659  ADDF  BDE5  0A00  020F
6 4500  002C  0CA1  0000  4006  3352  4A7D  E44D  0A00  020F
6 4500  0028  0CA2  0000  4006  3355  4A7D  E44D  0A00  020F
6 4500  05B2  0CFA  0000  4006  2D66  4A7D  E45A  0A00  020F
6 4500  05B2  0CFB  0000  4006  2D65  4A7D  E45A  0A00  020F 
6 4500  0514  0CFC  0000  4006  2E02  4A7D  E45A  0A00  020F 
6 4500  05B2  0CFD  0000  4006  2D63  4A7D  E45A  0A00  020F 







