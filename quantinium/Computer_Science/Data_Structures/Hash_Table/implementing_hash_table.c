#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

typedef struct {
    char name[50];
    int age;
} Person;

typedef struct Node {
    Person person;
    struct Node *next;
} Node;

typedef struct {
    Node *table[TABLE_SIZE];
} hash_table;

int hash(const char *key) {
    int sum = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        sum += key[i];
    }
    return sum % TABLE_SIZE;
}

void init_hash_table(hash_table *hash_map) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hash_map->table[i] = NULL;
    }
}

void insert(hash_table *hash_map, Person person) {
    int index = hash(person.name);
    Node *newnode = (Node *)malloc(sizeof(Node));
    if (newnode == NULL) {
        printf("node allocation failed in insert func");
        return;
    }

    newnode->person = person;
    newnode->next = hash_map->table[index];
    hash_map->table[index] = newnode;
}

Person *peek(hash_table *hash_map, const char *name) {
    int index = hash(name);
    Node *current = hash_map->table[index];
    while (current != NULL) {
        if (strcmp(current->person.name, name) == 0) {
            return &current->person;
        }
        current = current->next;
    }
    return NULL;
}

void free_hash_map(hash_table *hash_map) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node *current = hash_map->table[i];
        while (current != NULL) {
            Node *temp = current;
            current = current->next;
            free(temp);
        }
    }
}

void printHashTable(hash_table* ht) {
    printf("Hash Table Contents:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("[%d]: ", i);
        Node* current = ht->table[i];
        while (current != NULL) {
            printf("(%s, %d) ", current->person.name, current->person.age);
            current = current->next;
        }
        printf("\n");
    }
}

int main() {
    hash_table hash_map;
    init_hash_table(&hash_map);
    insert(&hash_map, (Person){"Alice", 25});
    insert(&hash_map, (Person){"Bob", 30});
    insert(&hash_map, (Person){"Charlie", 35});
    insert(&hash_map, (Person){"David", 40});
    insert(&hash_map, (Person){"Emily", 28});
    insert(&hash_map, (Person){"Frank", 32});
    insert(&hash_map, (Person){"Grace", 45});
    insert(&hash_map, (Person){"Hannah", 33});
    insert(&hash_map, (Person){"Isaac", 27});
    insert(&hash_map, (Person){"Jennifer", 38});

    Person *person = peek(&hash_map, "hi");
    if (person != NULL) {
        printf("Name: %s, Age: %d\n", person->name, person->age);
    } else {
        printf("Person not found.\n");
    }
    printHashTable(&hash_map);

    free_hash_map(&hash_map);
    return 0;
}
