#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define MAX_SIZE 256
#define TABLE_SIZE 10
#define DELETED_NODE (person*)[0xFFFFFFFFFFFFFFFFUL]

typedef struct {
    char name[MAX_SIZE];
    int age;
} person;

person *hash_table[TABLE_SIZE];

unsigned int hash(char *name) {
    size_t len = strnlen(name, MAX_SIZE);
    unsigned int hash_val = 0;
    for (int i = 0; i < len; i++) {
        hash_val += name[i];
        hash_val = (hash_val * name[i]) % 10;
    }
    return hash_val;
}

void init_hash_table() {
    for (int i = 0; i <= TABLE_SIZE; i++) {
        hash_table[i] = NULL;
    }
}

void print_table() {
    for (int i = 0; i <= TABLE_SIZE; i++) {
        if (hash_table[i] == NULL) {
            printf("\t%i\t---\n", i);
        } else {
            printf("\t%i\t%s\n", i, hash_table[i]->name);
        }
    }
}

bool insert_hash_table(person *p) {
    if (p == NULL)
        return false;
    int index = hash(p->name);
    for (int i = 0; i < TABLE_SIZE; i++) {
        int try = (i + index) % TABLE_SIZE;
        if (hash_table[try] == NULL || hash_table[try] == DELETED_NODE) {
            hash_table[try] = p;
            return true;
        }
    }
    return false;
}

person *peek_hash_table(char *name) {
    int index = hash(name);
    for (int i = 0; i < TABLE_SIZE; i++) {
        int try = (index + i) % TABLE_SIZE;
        if (hash_table[try] != NULL &&
            strcmp(hash_table[try]->name, name) == 0) {
            person* temp = hash_table[try];
            hash_table[try] = DELETED_NODE;
            return temp;
        } else {
            return NULL;
        }
    }
}

person *delete_hash_table(char *name) {
    int index = hash(name);
    if (hash_table[index] != NULL &&
        strcmp(hash_table[index]->name, name) == 0) {
        person *temp = hash_table[index];
        hash_table[index] = NULL;
        return temp;
    } else {
        return NULL;
    }
}

int main() {
    init_hash_table();
    person jacob = {.name = "jacob", .age = 258};
    person mathew = {.name = "mathew", .age = 58};
    person kate = {.name = "kate", .age = 28};
    person mpho = {.name = "mpho", .age = 25};
    person sarah = {.name = "sarah ", .age = 32};
    person edna = {.name = "edna ", .age = 56};
    person maren = {.name = "maren", .age = 88};
    person eliza = {.name = "eliza", .age = 13};
    person robert = {.name = "robert", .age = 18};
    person jane = {.name = "jane", .age = 5};

    insert_hash_table(&jacob);
    insert_hash_table(&mathew);
    insert_hash_table(&kate);
    insert_hash_table(&mpho);
    insert_hash_table(&sarah);
    insert_hash_table(&edna);
    insert_hash_table(&maren);
    insert_hash_table(&eliza);
    insert_hash_table(&robert);
    insert_hash_table(&jane);

    printf("just after inserting\n");
    print_table();
    person *tmp = peek_hash_table("jacob");
    if (tmp == NULL) {
        printf("NOT FOUND");
    } else {
        printf("FOUND %s\n", tmp->name);
    }

    tmp = peek_hash_table("micheal");
    if (tmp == NULL) {
        printf("NOT FOUND");
    } else {
        printf("FOUND %s\n", tmp->name);
    }

    delete_hash_table("jacob");
    printf("after deleting jacob\n");

    print_table();
    return 0;
}
