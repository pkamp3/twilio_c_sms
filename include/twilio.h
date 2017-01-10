#ifndef TWILIO_HH
#define TWILIO_HH

/* Defaults - 10K max memory for our strings */
#define MAX_TWILIO_MESSAGE_SIZE 10000
typedef enum { false, true } bool;

/* Send message function, detailed in twilio.c */
int     twilio_send_message     (char *account_sid,
                                 char *auth_token,
                                 char *message,
                                 char *from_number,
                                 char *to_number,
                                 char *picture_url,
                                 bool verbose);
#endif