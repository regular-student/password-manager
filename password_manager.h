#ifndef PASSWORD_MANAGER_H
#define PASSWORD_MANAGER_H

typedef struct {
	char username[50];
	char password[50];
} PasswordEntry;

void add_password(const char *pw, PasswordEntry entry);
PasswordEntry get_password(const char *pw, const char *username);
void delete_password(const char *pw, const char *username);
