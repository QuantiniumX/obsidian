---

excalidraw-plugin: parsed
tags: [excalidraw]

---
==⚠  Switch to EXCALIDRAW VIEW in the MORE OPTIONS menu of this document. ⚠==


# Text Elements
Linked Lists :-
It is just pieces of memory connected by pointers that just hold some value in them.
 ^3msyJMTP

NULL ^dXoGEZbo

1 ^liCBG4gp

2 ^oUdXZZnA

3 ^NdCNYhQn

4 ^t0CpaK4t

5 ^Z7KaDf2e

Implementation :-
 ^WRePFxYl

typedef struct { ^fV523wwK

void *next; ^p3LR2h4F

int data; ^WF1sV0xe

}Node; ^jL6gpbnJ

We create a struct that can hold the data and the the pointer address to the next node. ^G2w214y7

Things We can do with linked lsits :-
1. Add a node
2. Remove a node.
3. Insert a node into a position in linked list ^jLG9lSmV

Add a node :-
    In this we have two cases :-
        1. if the head is NULL. i.e. that it is an empty linked list.
        2. it is a linked list with more than one node. ^L95B2UNE

Case 1:-
     ^eKs7Vwir

NULL ^bM1mNCa5

Head is NULL ^7PHz8wc2

In this case we create a node and point the head to the node. ^yeMwZp84

head ^rEXfUPO3

if we have a linked list with more than 1 node.
    1. we can add it at the end of the linked list but for it we have to traverse the whole linked list making the operation O(N).
    2. We can add the node at the starting of linked list. ^bs5NH29T

head ^KFmrIRYu

We have this. ^xgJDf6kI

Step 1 :- Create a new node ^Ull0gy9p

Step 2 :- make the new node point to the existing first node. ^MSv9YS4Y

head ^WJYVSyFN

Step 3 :- Cut the connection of the head with first node and make it point to the new node. ^ZS8pKUU8

head ^NW0qKhSQ

New Node Successfully added. ^5oZDTX1I

Case 2 :-  ^O1ecBPwa

1. ^ogDBPrvb

2. ^hrOHKTrA

NULL ^R2MI1Wtc

NULL ^SMzekZiL

NULL ^slLLRmzH

Node *new; ^LdzVFiSN

if (head == NULL) { ^Tu5I8znz

new = malloc(sizeof(Node)); ^jYeOqTxG

if (new == NULL) ^pjZgWi6H

return NULL; ^QadxXBWG

new->data = data; ^QLGs5aad

head = new; ^MIsXizfn

new->next = NULL; ^4wMIEZDY

} else { ^zuqbqrJ6

new = malloc(sizeof(Node)); ^mVi5kwiK

if (new == NULL) ^lrTFGzjc

return NULL; ^WHon9LbC

new->data = data; ^pVB4W68I

new->next = head; ^2mz6SiuP

head = new; ^RNdHuN4E

} ^x2yKw3nX

Case 1 ^7dHjVnZc

Case 2 ^Xe9lasvD

Removing a node from the linked list ^DnUjeZMY

We return an int this time to say if the removal is successful or not ^PbIyfYvR

if the target we wanna remove is found we have two cases at that time.
    1. it is at the starting
    2. it is in the middle somewhere. ^R0AeG89W

Case 1:- ^TlDs43jg

1 ^SN5s3mpx

2 ^w8Gn5s8c

3 ^BWes0u5w

4 ^Czm0OAPZ

somehow the target we wanna remove 
is 1 i.e. the first element ^6iQk1dCU

1 ^tAqVT9Wo

2 ^jNZZuT5l

3 ^vP9lulP9

4 ^vK3IytQ6

1 ^lr0RiiKD

2 ^aSUdTCeQ

3 ^sMmcwTtC

4 ^HQXOMUl7

We just pont the head to the next node after current node where the element is present ^2mv7DEco

2 ^k3S9tcEz

3 ^hXRb9jdj

4 ^eT7VABPj

Case 2 :- ^7JaYKtrQ

We wanna remove 3. ^Ii0FEWU3

1 ^9P2Vmp38

2 ^sHBqxqhd

3 ^6xhZMg2O

4 ^DiseIm7s

1 ^tsJbYzP3

2 ^H5WXxV4w

4 ^nTd9i5FJ

Mkae the pointer that connects current to next point to NULL
Mkke the pointer that connects current node and previous node point to next node
free the current node to prevent momory leak. ^i04MLck3

3.  ^8Gtf6UHK

Insert a node at given position ^DrGR9hUm

1 ^VMnmFw38

2 ^vZHqes5i

4 ^pg1NZ8JV

We have to insert a node at position 2. i.e between 2 and 4. ^FQ7tF8So

3 ^FTIHKis0

1 ^ARmUMymY

2 ^v2TrBr1f

4 ^HjqTpi7p

3 ^6zukV7L1

We say the pointer of 2 points to 2 and 3 points to two 
thus inserting 3 in the list. ^L3P6Xp1s

2 ^M5WJ9TSy

3 ^4dJmoGq3

4 ^pYuC8dWV

1 ^24yHGmjw

Node *current = head;
    Node *prev = head;
    while (current != NULL) {
        if (current->data == target) {
            if (current == head) {
                head = current->next;
            } else {
                prev->next = current->next;
                free(current);
                current = NULL;
            }
            return 1;
        }
        prev = current;
        current = current->next;
    }
    return 0; ^lF16W7ml

Node *current = head;
    Node *prev = NULL;
    while (current != NULL && position > 0) {
        prev = current;
        current = current->next;
        position--;
    }

    if (position > 0) {
        printf("Requested position too far into the list");
        return NULL;
    }

    Node *new = malloc(sizeof(Node));
    if (new == NULL)
        return NULL;

    new->data = data;
    if (prev == NULL) {
        new->next = head;
        head = new;
    } else {
        new->next = current;
        prev->next = new;
    }

    return new; ^ojtMYLId

%%
# Drawing
```json
{
	"type": "excalidraw",
	"version": 2,
	"source": "https://github.com/zsviczian/obsidian-excalidraw-plugin/releases/tag/2.0.20",
	"elements": [
		{
			"type": "text",
			"version": 329,
			"versionNonce": 2006529166,
			"isDeleted": false,
			"id": "3msyJMTP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -691.9045810741193,
			"y": -2174.5984965977914,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1564.54150390625,
			"height": 138.8922887725925,
			"seed": 1198441042,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975834,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "Linked Lists :-\nIt is just pieces of memory connected by pointers that just hold some value in them.\n",
			"rawText": "Linked Lists :-\nIt is just pieces of memory connected by pointers that just hold some value in them.\n",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Linked Lists :-\nIt is just pieces of memory connected by pointers that just hold some value in them.\n",
			"lineHeight": 1.25,
			"baseline": 125
		},
		{
			"type": "ellipse",
			"version": 278,
			"versionNonce": 1338622738,
			"isDeleted": false,
			"id": "O1MIqbQLRybUfS5x6N1xM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -681.7613070651971,
			"y": -2032.5928582768388,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1500028686,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "fjKp2Wa5nbXu7T6UcbNvP",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "liCBG4gp"
				}
			],
			"updated": 1708104984815,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 625,
			"versionNonce": 2017067264,
			"isDeleted": false,
			"id": "liCBG4gp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -635.9224677492791,
			"y": -2008.2783792637852,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 10.03125,
			"height": 46.29742959086417,
			"seed": 1407267858,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755716,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "O1MIqbQLRybUfS5x6N1xM",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 321,
			"versionNonce": 41904722,
			"isDeleted": false,
			"id": "mTQGb7cbAIddy-7ISiScy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -467.65666242715014,
			"y": -2037.3232269358596,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 766511570,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "fjKp2Wa5nbXu7T6UcbNvP",
					"type": "arrow"
				},
				{
					"id": "VSNbj8P-8qjw9lLFdU4Df",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "oUdXZZnA"
				}
			],
			"updated": 1708104975835,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 625,
			"versionNonce": 788873472,
			"isDeleted": false,
			"id": "oUdXZZnA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -429.9797798983415,
			"y": -2013.008747922806,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 26.35516357421875,
			"height": 46.29742959086417,
			"seed": 1356115534,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755724,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "mTQGb7cbAIddy-7ISiScy",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 324,
			"versionNonce": 288929554,
			"isDeleted": false,
			"id": "JfSBAqbdjjRxTtfD0lxum",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -232.7510099304804,
			"y": -2038.3837952509261,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 663533390,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "VSNbj8P-8qjw9lLFdU4Df",
					"type": "arrow"
				},
				{
					"id": "vmJl8R4ycUXCU9mlM3M0K",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "NdCNYhQn"
				}
			],
			"updated": 1708104975835,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 625,
			"versionNonce": 610304256,
			"isDeleted": false,
			"id": "NdCNYhQn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -194.50038167413274,
			"y": -2014.0693162378725,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 25.207672119140625,
			"height": 46.29742959086417,
			"seed": 116128526,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755732,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "JfSBAqbdjjRxTtfD0lxum",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 310,
			"versionNonce": 986319826,
			"isDeleted": false,
			"id": "OEK9klXNazfUDPnGC9p1F",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 8.879299001928757,
			"y": -2042.8870001913924,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 449555154,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "vmJl8R4ycUXCU9mlM3M0K",
					"type": "arrow"
				},
				{
					"id": "auypUv5I2BLi3mkUIjwol",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "t0CpaK4t"
				}
			],
			"updated": 1708104975835,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 625,
			"versionNonce": 743162112,
			"isDeleted": false,
			"id": "t0CpaK4t",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 47.88874683835455,
			"y": -2018.5725211783388,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 23.690032958984375,
			"height": 46.29742959086417,
			"seed": 1576999378,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755739,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "OEK9klXNazfUDPnGC9p1F",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 320,
			"versionNonce": 254699666,
			"isDeleted": false,
			"id": "jkny-eUlgQx93R0t6Tj6d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 271.9492965202634,
			"y": -2043.9475119910417,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 335657106,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "auypUv5I2BLi3mkUIjwol",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "Z7KaDf2e"
				},
				{
					"id": "aK2vc3i5eVNxLkMRHf_kx",
					"type": "arrow"
				}
			],
			"updated": 1708104975835,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 622,
			"versionNonce": 1607672064,
			"isDeleted": false,
			"id": "Z7KaDf2e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 311.36591751342746,
			"y": -2019.633032977988,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 22.875686645507812,
			"height": 46.29742959086417,
			"seed": 2092780558,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755746,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "5",
			"rawText": "5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "jkny-eUlgQx93R0t6Tj6d",
			"originalText": "5",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 792,
			"versionNonce": 316218039,
			"isDeleted": false,
			"id": "fjKp2Wa5nbXu7T6UcbNvP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -578.4863234728427,
			"y": -1983.9760819463618,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 103.64753618510468,
			"height": 3.986439428011863,
			"seed": 1282720274,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235921,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "O1MIqbQLRybUfS5x6N1xM",
				"gap": 1.8518958694434104,
				"focus": 0.062140767020899323
			},
			"endBinding": {
				"elementId": "mTQGb7cbAIddy-7ISiScy",
				"gap": 7.2095089023714465,
				"focus": 0.011306736264533102
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					103.64753618510468,
					-3.986439428011863
				]
			]
		},
		{
			"type": "arrow",
			"version": 784,
			"versionNonce": 1214678839,
			"isDeleted": false,
			"id": "VSNbj8P-8qjw9lLFdU4Df",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -359.2059482882196,
			"y": -1983.9052081566817,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 121.71934530933194,
			"height": 6.08598987168557,
			"seed": 1192358542,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235930,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "mTQGb7cbAIddy-7ISiScy",
				"gap": 7.335513874839364,
				"focus": 0.18079793883698123
			},
			"endBinding": {
				"elementId": "JfSBAqbdjjRxTtfD0lxum",
				"gap": 4.7408150458254426,
				"focus": 0.043010119251765414
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					121.71934530933194,
					-6.08598987168557
				]
			]
		},
		{
			"type": "arrow",
			"version": 771,
			"versionNonce": 261731255,
			"isDeleted": false,
			"id": "vmJl8R4ycUXCU9mlM3M0K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -129.48507908836325,
			"y": -1992.0274852153905,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 127.32212755667862,
			"height": 2.0210111747371684,
			"seed": 1009282258,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235939,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "JfSBAqbdjjRxTtfD0lxum",
				"gap": 1.8518946236688123,
				"focus": -0.010127583139695936
			},
			"endBinding": {
				"elementId": "OEK9klXNazfUDPnGC9p1F",
				"gap": 11.054409413710708,
				"focus": -0.0038773248132559016
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					127.32212755667862,
					-2.0210111747371684
				]
			]
		},
		{
			"type": "arrow",
			"version": 770,
			"versionNonce": 127049783,
			"isDeleted": false,
			"id": "auypUv5I2BLi3mkUIjwol",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 117.52752048842126,
			"y": -1994.0484954918752,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 137.94868230129208,
			"height": 8.114621721771073,
			"seed": 1844623502,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235947,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "OEK9klXNazfUDPnGC9p1F",
				"gap": 7.228645434934641,
				"focus": 0.09573504254977022
			},
			"endBinding": {
				"elementId": "jkny-eUlgQx93R0t6Tj6d",
				"gap": 16.755526187614322,
				"focus": 0.20602785105703225
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					137.94868230129208,
					-8.114621721771073
				]
			]
		},
		{
			"type": "arrow",
			"version": 854,
			"versionNonce": 316637527,
			"isDeleted": false,
			"id": "aK2vc3i5eVNxLkMRHf_kx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 385.31093193786563,
			"y": -1998.0539989198846,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 102.86059663920139,
			"height": 2.063168985077309,
			"seed": 653942354,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235947,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "jkny-eUlgQx93R0t6Tj6d",
				"gap": 11.956931491556908,
				"focus": -0.06367619653615
			},
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					102.86059663920139,
					2.063168985077309
				]
			]
		},
		{
			"type": "text",
			"version": 278,
			"versionNonce": 280891335,
			"isDeleted": false,
			"id": "dXoGEZbo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 515.143330525121,
			"y": -2020.4209633753821,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 94.61207580566406,
			"height": 46.297429590864176,
			"seed": 512431182,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708171394259,
			"link": null,
			"locked": false,
			"fontSize": 37.03794367269134,
			"fontFamily": 1,
			"text": "NULL",
			"rawText": "NULL",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "NULL",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 230,
			"versionNonce": 1420768914,
			"isDeleted": false,
			"id": "WRePFxYl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -683.7899844731483,
			"y": -1827.699039782944,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 307.8963928222656,
			"height": 92.59485918172834,
			"seed": 956386766,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "Implementation :-\n",
			"rawText": "Implementation :-\n",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Implementation :-\n",
			"lineHeight": 1.25,
			"baseline": 78
		},
		{
			"type": "text",
			"version": 318,
			"versionNonce": 2045948814,
			"isDeleted": false,
			"id": "fV523wwK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -587.8173118492973,
			"y": -1765.8314432675534,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 311.74609375,
			"height": 46.29742959086417,
			"seed": 388894990,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "typedef struct {",
			"rawText": "typedef struct {",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "typedef struct {",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 365,
			"versionNonce": 1517196370,
			"isDeleted": false,
			"id": "p3LR2h4F",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -510.7285311092387,
			"y": -1703.0436627328781,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 195.44276428222656,
			"height": 46.29742959086417,
			"seed": 1195495122,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "void *next;",
			"rawText": "void *next;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "void *next;",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 358,
			"versionNonce": 951128526,
			"isDeleted": false,
			"id": "WF1sV0xe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -496.5279587998308,
			"y": -1644.3132370141047,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 165.7191925048828,
			"height": 46.29742959086417,
			"seed": 564445006,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "int data;",
			"rawText": "int data;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "int data;",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 332,
			"versionNonce": 872167954,
			"isDeleted": false,
			"id": "jL6gpbnJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -591.8745536343658,
			"y": -1571.3822389859242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 113.5640869140625,
			"height": 46.29742959086417,
			"seed": 1199842450,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "}Node;",
			"rawText": "}Node;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "}Node;",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 453,
			"versionNonce": 1149872142,
			"isDeleted": false,
			"id": "G2w214y7",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -134.02530179923235,
			"y": -1677.5788896341464,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1706.6817626953125,
			"height": 46.29742959086417,
			"seed": 1293527758,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "We create a struct that can hold the data and the the pointer address to the next node.",
			"rawText": "We create a struct that can hold the data and the the pointer address to the next node.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "We create a struct that can hold the data and the the pointer address to the next node.",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "freedraw",
			"version": 248,
			"versionNonce": 1615800274,
			"isDeleted": false,
			"id": "h5fm463TRG8Q0jHgjl-Vm",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -296.3174598803207,
			"y": -1710.0372195226141,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.63033782075759,
			"height": 148.09158577168054,
			"seed": 135895250,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.0286774079512453
				],
				[
					0,
					0
				],
				[
					0,
					-2.0286774079512453
				],
				[
					2.0286774079512453,
					-2.0286774079512453
				],
				[
					6.085919193019775,
					-2.0286774079512453
				],
				[
					8.11459660097102,
					-4.05729830048551
				],
				[
					12.17195141687351,
					-2.0286774079512453
				],
				[
					18.257870609893285,
					-2.0286774079512453
				],
				[
					22.315112394961815,
					-2.0286774079512453
				],
				[
					26.372467210864304,
					-2.0286774079512453
				],
				[
					32.45838640388408,
					-4.05729830048551
				],
				[
					32.45838640388408,
					-2.0286774079512453
				],
				[
					32.45838640388408,
					2.0286208925342644
				],
				[
					32.45838640388408,
					8.11459660097102
				],
				[
					34.48706381183533,
					16.22919320194204
				],
				[
					34.48706381183533,
					26.372467210864304
				],
				[
					32.45838640388408,
					38.54436211232083
				],
				[
					32.45838640388408,
					50.716257013777366
				],
				[
					30.429822026766793,
					62.88820843065088
				],
				[
					30.429822026766793,
					71.00280503162189
				],
				[
					30.429822026766793,
					77.08878074005865
				],
				[
					28.40114461881555,
					87.23199823356393
				],
				[
					28.40114461881555,
					103.46124795092295
				],
				[
					28.40114461881555,
					115.63314285237948
				],
				[
					28.40114461881555,
					125.77641686130175
				],
				[
					30.429822026766793,
					131.8623360543215
				],
				[
					32.45838640388408,
					133.89101346227275
				],
				[
					32.45838640388408,
					135.91963435480702
				],
				[
					30.429822026766793,
					137.94831176275827
				],
				[
					30.429822026766793,
					139.97698917070952
				],
				[
					28.40114461881555,
					139.97698917070952
				],
				[
					24.343789802913058,
					142.00561006324378
				],
				[
					16.22919320194204,
					144.03428747119503
				],
				[
					12.17195141687351,
					142.00561006324378
				],
				[
					-2.0286774079512453,
					137.94831176275827
				],
				[
					-10.143274008922265,
					129.83371516178727
				],
				[
					-10.143274008922265,
					129.83371516178727
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "arrow",
			"version": 417,
			"versionNonce": 1836414542,
			"isDeleted": false,
			"id": "cj67I3BvbZPPz0CsPVnTD",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -278.0595892704274,
			"y": -1651.2063093924485,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 117.66182026033073,
			"height": 0.48737906630098315,
			"seed": 1225883406,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					117.66182026033073,
					-0.48737906630098315
				]
			]
		},
		{
			"type": "text",
			"version": 348,
			"versionNonce": 1736334738,
			"isDeleted": false,
			"id": "jLG9lSmV",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -704.0764759755757,
			"y": -1407.7681287862333,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 824.3390502929688,
			"height": 185.18971836345668,
			"seed": 1463458766,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "Things We can do with linked lsits :-\n1. Add a node\n2. Remove a node.\n3. Insert a node into a position in linked list",
			"rawText": "Things We can do with linked lsits :-\n1. Add a node\n2. Remove a node.\n3. Insert a node into a position in linked list",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Things We can do with linked lsits :-\n1. Add a node\n2. Remove a node.\n3. Insert a node into a position in linked list",
			"lineHeight": 1.25,
			"baseline": 171
		},
		{
			"type": "text",
			"version": 408,
			"versionNonce": 474840206,
			"isDeleted": false,
			"id": "L95B2UNE",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -703.3618385278505,
			"y": -1138.4761794662054,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1207.9324951171875,
			"height": 185.18971836345668,
			"seed": 807704142,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "Add a node :-\n    In this we have two cases :-\n        1. if the head is NULL. i.e. that it is an empty linked list.\n        2. it is a linked list with more than one node.",
			"rawText": "Add a node :-\n    In this we have two cases :-\n        1. if the head is NULL. i.e. that it is an empty linked list.\n        2. it is a linked list with more than one node.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Add a node :-\n    In this we have two cases :-\n        1. if the head is NULL. i.e. that it is an empty linked list.\n        2. it is a linked list with more than one node.",
			"lineHeight": 1.25,
			"baseline": 171
		},
		{
			"type": "text",
			"version": 267,
			"versionNonce": 918608722,
			"isDeleted": false,
			"id": "eKs7Vwir",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -704.3301736824036,
			"y": -913.6897254108235,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 141.5849609375,
			"height": 92.59485918172834,
			"seed": 2032757518,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "Case 1:-\n    ",
			"rawText": "Case 1:-\n    ",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Case 1:-\n    ",
			"lineHeight": 1.25,
			"baseline": 78
		},
		{
			"type": "freedraw",
			"version": 302,
			"versionNonce": 919255758,
			"isDeleted": false,
			"id": "uGmj2GSNRBWhWj48VU-aS",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -531.6411004009822,
			"y": -815.4017291840937,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.200572309407775,
			"height": 8.11459660097102,
			"seed": 1429312590,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					2.0286208925342644
				],
				[
					0,
					0
				],
				[
					0,
					2.0286208925342644
				],
				[
					-2.0286774079512453,
					0
				],
				[
					-4.05729830048551,
					0
				],
				[
					-6.085975708436755,
					0
				],
				[
					-8.11459660097102,
					0
				],
				[
					-10.143274008922265,
					2.0286208925342644
				],
				[
					-14.200572309407775,
					2.0286208925342644
				],
				[
					-14.200572309407775,
					4.05729830048551
				],
				[
					-14.200572309407775,
					6.085919193019775
				],
				[
					-12.171894901456529,
					8.11459660097102
				],
				[
					-10.143274008922265,
					8.11459660097102
				],
				[
					-8.11459660097102,
					8.11459660097102
				],
				[
					-4.05729830048551,
					4.05729830048551
				],
				[
					-2.0286774079512453,
					0
				],
				[
					-4.05729830048551,
					0
				],
				[
					-6.085975708436755,
					2.0286208925342644
				],
				[
					-10.143274008922265,
					4.05729830048551
				],
				[
					-12.171894901456529,
					6.085919193019775
				],
				[
					-12.171894901456529,
					8.11459660097102
				],
				[
					-10.143274008922265,
					8.11459660097102
				],
				[
					-8.11459660097102,
					8.11459660097102
				],
				[
					-6.085975708436755,
					8.11459660097102
				],
				[
					-6.085975708436755,
					8.11459660097102
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "arrow",
			"version": 564,
			"versionNonce": 866913678,
			"isDeleted": false,
			"id": "URJIxHHApjhS9tPBtsOy3",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -525.5550681771284,
			"y": -809.3158099910738,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 107.51854625140847,
			"height": 2.0286774079512453,
			"seed": 821675278,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708104975837,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "bM1mNCa5",
				"focus": 0.10274494513700637,
				"gap": 10.817502933506034
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					107.51854625140847,
					-2.0286774079512453
				]
			]
		},
		{
			"type": "text",
			"version": 292,
			"versionNonce": 1841361961,
			"isDeleted": false,
			"id": "bM1mNCa5",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -407.21901899221393,
			"y": -833.1497177019842,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 94.61207580566406,
			"height": 46.297429590864176,
			"seed": 1257555858,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "URJIxHHApjhS9tPBtsOy3",
					"type": "arrow"
				}
			],
			"updated": 1708171394259,
			"link": null,
			"locked": false,
			"fontSize": 37.03794367269134,
			"fontFamily": 1,
			"text": "NULL",
			"rawText": "NULL",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "NULL",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 271,
			"versionNonce": 302122130,
			"isDeleted": false,
			"id": "7PHz8wc2",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -195.65672038705895,
			"y": -826.710238060331,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 246.22830200195312,
			"height": 46.29742959086417,
			"seed": 953491154,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "Head is NULL",
			"rawText": "Head is NULL",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Head is NULL",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 334,
			"versionNonce": 175883662,
			"isDeleted": false,
			"id": "yeMwZp84",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -602.7206533688643,
			"y": -726.7077901440643,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1178.2088623046875,
			"height": 46.29742959086417,
			"seed": 1563347154,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "In this case we create a node and point the head to the node.",
			"rawText": "In this case we create a node and point the head to the node.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "In this case we create a node and point the head to the node.",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "freedraw",
			"version": 279,
			"versionNonce": 1077387858,
			"isDeleted": false,
			"id": "uJ0kI5BRPiq_z6xWn3IQJ",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -535.6983987014677,
			"y": -590.2214191877711,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 8.11459660097102,
			"height": 12.17195141687351,
			"seed": 1026938450,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-2.028620892534264,
					0
				],
				[
					-4.057298300485509,
					0
				],
				[
					-6.085919193019774,
					2.0286774079512453
				],
				[
					-4.057298300485509,
					4.05729830048551
				],
				[
					-4.057298300485509,
					6.085975708436755
				],
				[
					-2.028620892534264,
					4.05729830048551
				],
				[
					0,
					4.05729830048551
				],
				[
					0,
					2.0286774079512453
				],
				[
					2.028677407951245,
					0
				],
				[
					2.028677407951245,
					-4.05729830048551
				],
				[
					2.028677407951245,
					-6.085975708436755
				],
				[
					0,
					-4.05729830048551
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-6.085919193019774,
					0
				],
				[
					-6.085919193019774,
					2.0286774079512453
				],
				[
					-4.057298300485509,
					4.05729830048551
				],
				[
					-2.028620892534264,
					4.05729830048551
				],
				[
					-2.028620892534264,
					2.0286774079512453
				],
				[
					0,
					0
				],
				[
					0,
					-2.0286774079512453
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-4.057298300485509,
					0
				],
				[
					-4.057298300485509,
					0
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "ellipse",
			"version": 382,
			"versionNonce": 977789902,
			"isDeleted": false,
			"id": "1M536gA_AZb12s7xjC0e8",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -312.5466530822627,
			"y": -649.0523293179367,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 129.83365864637028,
			"height": 109.54716714394273,
			"seed": 601265106,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "JRYnpbgA53FGmhSdcmtpb",
					"type": "arrow"
				}
			],
			"updated": 1708104975835,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 639,
			"versionNonce": 1714367438,
			"isDeleted": false,
			"id": "JRYnpbgA53FGmhSdcmtpb",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -525.5550681771284,
			"y": -596.3073948962083,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 200.57169419054227,
			"height": 3.858152648627436,
			"seed": 912011794,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708104975837,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "1M536gA_AZb12s7xjC0e8",
				"focus": 0.1346057954712826,
				"gap": 12.731238844425647
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					200.57169419054227,
					-3.858152648627436
				]
			]
		},
		{
			"type": "text",
			"version": 262,
			"versionNonce": 35028711,
			"isDeleted": false,
			"id": "rEXfUPO3",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -601.2222036030291,
			"y": -560.0370436169533,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 84.28469848632812,
			"height": 46.29742959086417,
			"seed": 60300238,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708171394259,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "head",
			"rawText": "head",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "head",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 711,
			"versionNonce": 368716690,
			"isDeleted": false,
			"id": "bs5NH29T",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -601.744179994266,
			"y": -351.3875496030007,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 2386.62255859375,
			"height": 138.8922887725925,
			"seed": 1174728142,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "if we have a linked list with more than 1 node.\n    1. we can add it at the end of the linked list but for it we have to traverse the whole linked list making the operation O(N).\n    2. We can add the node at the starting of linked list.",
			"rawText": "if we have a linked list with more than 1 node.\n    1. we can add it at the end of the linked list but for it we have to traverse the whole linked list making the operation O(N).\n    2. We can add the node at the starting of linked list.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "if we have a linked list with more than 1 node.\n    1. we can add it at the end of the linked list but for it we have to traverse the whole linked list making the operation O(N).\n    2. We can add the node at the starting of linked list.",
			"lineHeight": 1.25,
			"baseline": 125
		},
		{
			"type": "freedraw",
			"version": 417,
			"versionNonce": 2126352014,
			"isDeleted": false,
			"id": "sOokWkWxm8dWuykq5jupj",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -380.50271198443704,
			"y": -120.61091347096567,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 8.11459660097102,
			"height": 12.17195141687351,
			"seed": 979444878,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-2.028620892534264,
					0
				],
				[
					-4.057298300485509,
					0
				],
				[
					-6.085919193019774,
					2.0286774079512453
				],
				[
					-4.057298300485509,
					4.05729830048551
				],
				[
					-4.057298300485509,
					6.085975708436755
				],
				[
					-2.028620892534264,
					4.05729830048551
				],
				[
					0,
					4.05729830048551
				],
				[
					0,
					2.0286774079512453
				],
				[
					2.028677407951245,
					0
				],
				[
					2.028677407951245,
					-4.05729830048551
				],
				[
					2.028677407951245,
					-6.085975708436755
				],
				[
					0,
					-4.05729830048551
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-6.085919193019774,
					0
				],
				[
					-6.085919193019774,
					2.0286774079512453
				],
				[
					-4.057298300485509,
					4.05729830048551
				],
				[
					-2.028620892534264,
					4.05729830048551
				],
				[
					-2.028620892534264,
					2.0286774079512453
				],
				[
					0,
					0
				],
				[
					0,
					-2.0286774079512453
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-4.057298300485509,
					0
				],
				[
					-4.057298300485509,
					0
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "ellipse",
			"version": 522,
			"versionNonce": 871974482,
			"isDeleted": false,
			"id": "SkrqMruQn39vtmimU-zOS",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -157.350966365232,
			"y": -179.44182360113086,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 129.83365864637028,
			"height": 109.54716714394273,
			"seed": 606692046,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "d7b5xHSuLNxNf0XXJME7r",
					"type": "arrow"
				}
			],
			"updated": 1708105279102,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 930,
			"versionNonce": 255099406,
			"isDeleted": false,
			"id": "d7b5xHSuLNxNf0XXJME7r",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -370.3593814600978,
			"y": -126.6968891794022,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 200.57169419054227,
			"height": 3.858152648627436,
			"seed": 516937998,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708104975838,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "SkrqMruQn39vtmimU-zOS",
				"focus": 0.13460579547127846,
				"gap": 12.731238844425704
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					200.57169419054227,
					-3.858152648627436
				]
			]
		},
		{
			"type": "text",
			"version": 400,
			"versionNonce": 801277705,
			"isDeleted": false,
			"id": "KFmrIRYu",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -446.0265168859985,
			"y": -90.42653790014742,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 84.28469848632812,
			"height": 46.29742959086417,
			"seed": 1640859470,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708171394259,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "head",
			"rawText": "head",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "head",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 294,
			"versionNonce": 559501710,
			"isDeleted": false,
			"id": "xgJDf6kI",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 332.66945737851586,
			"y": -159.91144517700664,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 245.00677490234375,
			"height": 46.29742959086417,
			"seed": 1375509778,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105261351,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "We have this.",
			"rawText": "We have this.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "We have this.",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 253,
			"versionNonce": 1428607634,
			"isDeleted": false,
			"id": "Ull0gy9p",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -612.1729698897764,
			"y": 27.19114381952113,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 516.886962890625,
			"height": 46.29742959086417,
			"seed": 429312462,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "Step 1 :- Create a new node",
			"rawText": "Step 1 :- Create a new node",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Step 1 :- Create a new node",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 617,
			"versionNonce": 324196238,
			"isDeleted": false,
			"id": "InQMyCut_K8xI8Gft5ocH",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -249.65867071327978,
			"y": 604.6546257677206,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 127.805094269253,
			"height": 119.69049766828196,
			"seed": 1286896398,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "RbmLbcpQ22sFEbCQixhYJ",
					"type": "arrow"
				}
			],
			"updated": 1708104975835,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 612,
			"versionNonce": 943511058,
			"isDeleted": false,
			"id": "MSv9YS4Y",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -629.9929590489007,
			"y": 274.6302203400751,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1131.8653564453125,
			"height": 46.29742959086417,
			"seed": 375485842,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "Step 2 :- make the new node point to the existing first node.",
			"rawText": "Step 2 :- make the new node point to the existing first node.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Step 2 :- make the new node point to the existing first node.",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "freedraw",
			"version": 528,
			"versionNonce": 389073934,
			"isDeleted": false,
			"id": "2R3qees8nKD6380uATnZ1",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -351.6277421096525,
			"y": 417.92161265505433,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 8.11459660097102,
			"height": 12.17195141687351,
			"seed": 1977457490,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-2.028620892534264,
					0
				],
				[
					-4.057298300485509,
					0
				],
				[
					-6.085919193019774,
					2.0286774079512453
				],
				[
					-4.057298300485509,
					4.05729830048551
				],
				[
					-4.057298300485509,
					6.085975708436755
				],
				[
					-2.028620892534264,
					4.05729830048551
				],
				[
					0,
					4.05729830048551
				],
				[
					0,
					2.0286774079512453
				],
				[
					2.028677407951245,
					0
				],
				[
					2.028677407951245,
					-4.05729830048551
				],
				[
					2.028677407951245,
					-6.085975708436755
				],
				[
					0,
					-4.05729830048551
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-6.085919193019774,
					0
				],
				[
					-6.085919193019774,
					2.0286774079512453
				],
				[
					-4.057298300485509,
					4.05729830048551
				],
				[
					-2.028620892534264,
					4.05729830048551
				],
				[
					-2.028620892534264,
					2.0286774079512453
				],
				[
					0,
					0
				],
				[
					0,
					-2.0286774079512453
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-4.057298300485509,
					0
				],
				[
					-4.057298300485509,
					0
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "ellipse",
			"version": 633,
			"versionNonce": 121441938,
			"isDeleted": false,
			"id": "bEMSMoxdLf8sZKrDm2K_W",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -128.47599649044753,
			"y": 359.0907025248889,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 129.83365864637028,
			"height": 109.54716714394273,
			"seed": 972185874,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "JsHLlNjw6OcrpbJS__iG1",
					"type": "arrow"
				},
				{
					"id": "RbmLbcpQ22sFEbCQixhYJ",
					"type": "arrow"
				},
				{
					"id": "8FsZ5uS-AeEK68CFvNW6Q",
					"type": "arrow"
				}
			],
			"updated": 1708105304248,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 1162,
			"versionNonce": 297078862,
			"isDeleted": false,
			"id": "JsHLlNjw6OcrpbJS__iG1",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -341.4844115853132,
			"y": 411.83563694661757,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 200.57169419054227,
			"height": 3.858152648627436,
			"seed": 854093522,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708104975838,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "bEMSMoxdLf8sZKrDm2K_W",
				"focus": 0.13460579547127843,
				"gap": 12.731238844425604
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					200.57169419054227,
					-3.858152648627436
				]
			]
		},
		{
			"type": "text",
			"version": 511,
			"versionNonce": 148113927,
			"isDeleted": false,
			"id": "WJYVSyFN",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -417.15154701121395,
			"y": 448.1059882258726,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 84.28469848632812,
			"height": 46.29742959086417,
			"seed": 1163314322,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708171394259,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "head",
			"rawText": "head",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "head",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 1102,
			"versionNonce": 795595982,
			"isDeleted": false,
			"id": "RbmLbcpQ22sFEbCQixhYJ",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -182.71310746672646,
			"y": 596.5399443936241,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 64.91688583860213,
			"height": 125.77641686130175,
			"seed": 839680978,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708104975838,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "InQMyCut_K8xI8Gft5ocH",
				"focus": -0.45132266129452153,
				"gap": 8.175302075136585
			},
			"endBinding": {
				"elementId": "bEMSMoxdLf8sZKrDm2K_W",
				"focus": 0.3512401597883787,
				"gap": 19.436850706263044
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					64.91688583860213,
					-125.77641686130175
				]
			]
		},
		{
			"type": "text",
			"version": 445,
			"versionNonce": 1079691986,
			"isDeleted": false,
			"id": "ZS8pKUU8",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -635.9262866160717,
			"y": 765.2389162053505,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1715.3802490234375,
			"height": 46.29742959086417,
			"seed": 381894546,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "Step 3 :- Cut the connection of the head with first node and make it point to the new node.",
			"rawText": "Step 3 :- Cut the connection of the head with first node and make it point to the new node.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Step 3 :- Cut the connection of the head with first node and make it point to the new node.",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 713,
			"versionNonce": 531202894,
			"isDeleted": false,
			"id": "wlWutkJZzy0PWUQJCmdeG",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -147.51914881929224,
			"y": 1060.1930045890622,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 127.805094269253,
			"height": 119.69049766828196,
			"seed": 1727562766,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "QFcDGTOKw5wBu2XeK6-YG",
					"type": "arrow"
				},
				{
					"id": "qmen2eXncsqLPaQeByCPG",
					"type": "arrow"
				}
			],
			"updated": 1708104975835,
			"link": null,
			"locked": false
		},
		{
			"type": "freedraw",
			"version": 579,
			"versionNonce": 1582834706,
			"isDeleted": false,
			"id": "MserDxdQKDVIWd1ElmkoG",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -371.2072822610643,
			"y": 889.6891846783383,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 8.11459660097102,
			"height": 12.17195141687351,
			"seed": 363385422,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-2.028620892534264,
					0
				],
				[
					-4.057298300485509,
					0
				],
				[
					-6.085919193019774,
					2.0286774079512453
				],
				[
					-4.057298300485509,
					4.05729830048551
				],
				[
					-4.057298300485509,
					6.085975708436755
				],
				[
					-2.028620892534264,
					4.05729830048551
				],
				[
					0,
					4.05729830048551
				],
				[
					0,
					2.0286774079512453
				],
				[
					2.028677407951245,
					0
				],
				[
					2.028677407951245,
					-4.05729830048551
				],
				[
					2.028677407951245,
					-6.085975708436755
				],
				[
					0,
					-4.05729830048551
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-6.085919193019774,
					0
				],
				[
					-6.085919193019774,
					2.0286774079512453
				],
				[
					-4.057298300485509,
					4.05729830048551
				],
				[
					-2.028620892534264,
					4.05729830048551
				],
				[
					-2.028620892534264,
					2.0286774079512453
				],
				[
					0,
					0
				],
				[
					0,
					-2.0286774079512453
				],
				[
					-2.028620892534264,
					-2.0286774079512453
				],
				[
					-4.057298300485509,
					0
				],
				[
					-4.057298300485509,
					0
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "ellipse",
			"version": 723,
			"versionNonce": 1562813326,
			"isDeleted": false,
			"id": "H5Vt0A0FqEqCHP8v60A1Z",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 81.18218468578232,
			"y": 824.772242324319,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 129.83365864637028,
			"height": 109.54716714394273,
			"seed": 498423950,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "ig6g_Qz7SaqI3wGVs2BUS",
					"type": "arrow"
				}
			],
			"updated": 1708105309765,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 562,
			"versionNonce": 634306025,
			"isDeleted": false,
			"id": "NW0qKhSQ",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -436.7310871626257,
			"y": 919.8735602491561,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 84.28469848632812,
			"height": 46.29742959086417,
			"seed": 967249166,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708171394259,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "head",
			"rawText": "head",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "head",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 1413,
			"versionNonce": 1022626574,
			"isDeleted": false,
			"id": "QFcDGTOKw5wBu2XeK6-YG",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -58.12685385315547,
			"y": 1056.4131301807988,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 130.71486891394503,
			"height": 125.29437226552491,
			"seed": 60701518,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708104975838,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "wlWutkJZzy0PWUQJCmdeG",
				"focus": -0.4576683132916944,
				"gap": 8.173670683676818
			},
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					130.71486891394503,
					-125.29437226552491
				]
			]
		},
		{
			"type": "arrow",
			"version": 824,
			"versionNonce": 1352366414,
			"isDeleted": false,
			"id": "qmen2eXncsqLPaQeByCPG",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -367.3203779427766,
			"y": 888.6657611210828,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 226.52345520897532,
			"height": 186.65039992831598,
			"seed": 87658894,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708104975838,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "wlWutkJZzy0PWUQJCmdeG",
				"focus": -0.03002386285615392,
				"gap": 10.306573010823527
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					226.52345520897532,
					186.65039992831598
				]
			]
		},
		{
			"type": "text",
			"version": 385,
			"versionNonce": 965194382,
			"isDeleted": false,
			"id": "5oZDTX1I",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 340.48548617774804,
			"y": 1007.7369628500866,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 733.7800903320312,
			"height": 62.52662279280621,
			"seed": 2106551954,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 50.021298234244966,
			"fontFamily": 1,
			"text": "New Node Successfully added.",
			"rawText": "New Node Successfully added.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "New Node Successfully added.",
			"lineHeight": 1.25,
			"baseline": 43
		},
		{
			"type": "ellipse",
			"version": 390,
			"versionNonce": 1240270162,
			"isDeleted": false,
			"id": "Em67QU58a2LPGrxycvWtv",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -401.8074417546119,
			"y": 125.89277638313524,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 137.9482552473413,
			"height": 127.80503775383602,
			"seed": 79032722,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 225,
			"versionNonce": 1531850958,
			"isDeleted": false,
			"id": "O1ecBPwa",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -699.328728825833,
			"y": -426.29472221675746,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 194.924560546875,
			"height": 46.29742959086417,
			"seed": 881171022,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "Case 2 :- ",
			"rawText": "Case 2 :- ",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Case 2 :- ",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 243,
			"versionNonce": 520339730,
			"isDeleted": false,
			"id": "ogDBPrvb",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -808.0113830566406,
			"y": -603.0590359039741,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 81.392333984375,
			"height": 186.69294433934215,
			"seed": 2064083342,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104950444,
			"link": null,
			"locked": false,
			"fontSize": 149.35435547147372,
			"fontFamily": 1,
			"text": "1.",
			"rawText": "1.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "1.",
			"lineHeight": 1.25,
			"baseline": 131
		},
		{
			"type": "text",
			"version": 237,
			"versionNonce": 1820625682,
			"isDeleted": false,
			"id": "hrOHKTrA",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -740.9379220010353,
			"y": 1414.7613067822967,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 138.91812133789062,
			"height": 176.13108823723468,
			"seed": 1226669902,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708104975835,
			"link": null,
			"locked": false,
			"fontSize": 140.90487058978775,
			"fontFamily": 1,
			"text": "2.",
			"rawText": "2.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "2.",
			"lineHeight": 1.25,
			"baseline": 124
		},
		{
			"type": "arrow",
			"version": 92,
			"versionNonce": 56492288,
			"isDeleted": false,
			"id": "-5twNMHTZkYybUvbkVhJ0",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 436.3574250785505,
			"y": 30.680692262250886,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.11797626201928,
			"height": 0.5518604092021633,
			"seed": 1449483086,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708222759631,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					101.11797626201928,
					0.5518604092021633
				]
			]
		},
		{
			"type": "text",
			"version": 55,
			"versionNonce": 1240850688,
			"isDeleted": false,
			"id": "R2MI1Wtc",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 85.53381139822454,
			"y": -138.28386978702792,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 88.74515582847616,
			"height": 43.426513671875,
			"seed": 1685396110,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222759632,
			"link": null,
			"locked": false,
			"fontSize": 34.7412109375,
			"fontFamily": 1,
			"text": "NULL",
			"rawText": "NULL",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "NULL",
			"lineHeight": 1.25,
			"baseline": 30
		},
		{
			"type": "arrow",
			"version": 66,
			"versionNonce": 2125793170,
			"isDeleted": false,
			"id": "8FsZ5uS-AeEK68CFvNW6Q",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 12.42479125816945,
			"y": 416.23786075664157,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 128.1306171953432,
			"height": 1.192651155687713,
			"seed": 1185444302,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708105340074,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "bEMSMoxdLf8sZKrDm2K_W",
				"focus": 0.04425598788017388,
				"gap": 11.116478381280274
			},
			"endBinding": {
				"elementId": "SMzekZiL",
				"focus": 0.1244145354958875,
				"gap": 11.381615959872818
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					128.1306171953432,
					1.192651155687713
				]
			]
		},
		{
			"type": "arrow",
			"version": 132,
			"versionNonce": 86367826,
			"isDeleted": false,
			"id": "ig6g_Qz7SaqI3wGVs2BUS",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 231.1696028490883,
			"y": 871.379214278244,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 139.74236165232477,
			"height": 1.755078919130824,
			"seed": 1993849294,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708105344201,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "H5Vt0A0FqEqCHP8v60A1Z",
				"focus": -0.12779101688779307,
				"gap": 20.656772972964163
			},
			"endBinding": {
				"elementId": "slLLRmzH",
				"focus": 0.15794625646905155,
				"gap": 11.787342063414485
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					139.74236165232477,
					-1.755078919130824
				]
			]
		},
		{
			"type": "text",
			"version": 117,
			"versionNonce": 1055987913,
			"isDeleted": false,
			"id": "SMzekZiL",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 151.93702441338547,
			"y": 398.99586372408976,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 88.74515582847616,
			"height": 43.426513671875,
			"seed": 1143060370,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "8FsZ5uS-AeEK68CFvNW6Q",
					"type": "arrow"
				}
			],
			"updated": 1708171394259,
			"link": null,
			"locked": false,
			"fontSize": 34.7412109375,
			"fontFamily": 1,
			"text": "NULL",
			"rawText": "NULL",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "NULL",
			"lineHeight": 1.25,
			"baseline": 30
		},
		{
			"type": "text",
			"version": 156,
			"versionNonce": 920679495,
			"isDeleted": false,
			"id": "slLLRmzH",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 382.69930656482757,
			"y": 850.7162100281765,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 88.74515582847616,
			"height": 43.426513671875,
			"seed": 844102290,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "ig6g_Qz7SaqI3wGVs2BUS",
					"type": "arrow"
				}
			],
			"updated": 1708171394259,
			"link": null,
			"locked": false,
			"fontSize": 34.7412109375,
			"fontFamily": 1,
			"text": "NULL",
			"rawText": "NULL",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "NULL",
			"lineHeight": 1.25,
			"baseline": 30
		},
		{
			"type": "text",
			"version": 648,
			"versionNonce": 335052434,
			"isDeleted": false,
			"id": "LdzVFiSN",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2039.6775503649465,
			"y": -471.39297306320736,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 337.0865173339844,
			"height": 80.88017118016616,
			"seed": 1854088530,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "Node *new;",
			"rawText": "Node *new;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Node *new;",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 722,
			"versionNonce": 1900993618,
			"isDeleted": false,
			"id": "Tu5I8znz",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2058.6632833838294,
			"y": -364.24003963002167,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 653.2142944335938,
			"height": 80.88017118016616,
			"seed": 178917582,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "if (head == NULL) {",
			"rawText": "if (head == NULL) {",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "if (head == NULL) {",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 736,
			"versionNonce": 395543058,
			"isDeleted": false,
			"id": "jYeOqTxG",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2292.8198345277374,
			"y": -272.9083446903269,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 848.7645263671875,
			"height": 80.88017118016616,
			"seed": 1498852114,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "new = malloc(sizeof(Node));",
			"rawText": "new = malloc(sizeof(Node));",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "new = malloc(sizeof(Node));",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 754,
			"versionNonce": 1639804882,
			"isDeleted": false,
			"id": "pjZgWi6H",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2292.820010832519,
			"y": -156.26245659530883,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 541.4990234375,
			"height": 80.88017118016616,
			"seed": 218810126,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "if (new == NULL)",
			"rawText": "if (new == NULL)",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "if (new == NULL)",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 754,
			"versionNonce": 870557074,
			"isDeleted": false,
			"id": "QadxXBWG",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2292.820010832519,
			"y": -52.27366507795239,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 408.8896484375,
			"height": 80.88017118016616,
			"seed": 859011282,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "return NULL;",
			"rawText": "return NULL;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "return NULL;",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 754,
			"versionNonce": 1463624530,
			"isDeleted": false,
			"id": "QLGs5aad",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2292.820010832519,
			"y": 51.715126439404116,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 603.5343017578125,
			"height": 80.88017118016616,
			"seed": 1719317838,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "new->data = data;",
			"rawText": "new->data = data;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "new->data = data;",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 754,
			"versionNonce": 1444997394,
			"isDeleted": false,
			"id": "MIsXizfn",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2292.820010832519,
			"y": 155.7039179567605,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 373.5703125,
			"height": 80.88017118016616,
			"seed": 1538297490,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "head = new;",
			"rawText": "head = new;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "head = new;",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 754,
			"versionNonce": 1476785874,
			"isDeleted": false,
			"id": "4wMIEZDY",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2292.820010832519,
			"y": 259.6927094741171,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 588.073974609375,
			"height": 80.88017118016616,
			"seed": 1616042894,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "new->next = NULL;",
			"rawText": "new->next = NULL;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "new->next = NULL;",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 744,
			"versionNonce": 2105756818,
			"isDeleted": false,
			"id": "zuqbqrJ6",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2087.141794759763,
			"y": 357.35304085503367,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 256.74468994140625,
			"height": 80.88017118016616,
			"seed": 663022674,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "} else {",
			"rawText": "} else {",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "} else {",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 730,
			"versionNonce": 1011870290,
			"isDeleted": false,
			"id": "mVi5kwiK",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2302.312612884788,
			"y": 455.01319593116864,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 848.7645263671875,
			"height": 80.88017118016616,
			"seed": 818690510,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "new = malloc(sizeof(Node));",
			"rawText": "new = malloc(sizeof(Node));",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "new = malloc(sizeof(Node));",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 741,
			"versionNonce": 994234386,
			"isDeleted": false,
			"id": "lrTFGzjc",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2295.9843290531294,
			"y": 568.4947658055758,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 541.4990234375,
			"height": 80.88017118016616,
			"seed": 1015517714,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "if (new == NULL)",
			"rawText": "if (new == NULL)",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "if (new == NULL)",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 741,
			"versionNonce": 777190866,
			"isDeleted": false,
			"id": "WHon9LbC",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2295.9843290531294,
			"y": 672.4835573229323,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 408.8896484375,
			"height": 80.88017118016616,
			"seed": 1593823246,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "return NULL;",
			"rawText": "return NULL;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "return NULL;",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 741,
			"versionNonce": 848786322,
			"isDeleted": false,
			"id": "pVB4W68I",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2295.9843290531294,
			"y": 776.4723488402888,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 603.5343017578125,
			"height": 80.88017118016616,
			"seed": 1840218066,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "new->data = data;",
			"rawText": "new->data = data;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "new->data = data;",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 741,
			"versionNonce": 709308754,
			"isDeleted": false,
			"id": "2mz6SiuP",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2295.9843290531294,
			"y": 880.4611403576453,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 570.0261840820312,
			"height": 80.88017118016616,
			"seed": 652648014,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "new->next = head;",
			"rawText": "new->next = head;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "new->next = head;",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 741,
			"versionNonce": 414791442,
			"isDeleted": false,
			"id": "RNdHuN4E",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2295.9843290531294,
			"y": 984.4499318750018,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 373.5703125,
			"height": 80.88017118016616,
			"seed": 387167634,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "head = new;",
			"rawText": "head = new;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "head = new;",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 759,
			"versionNonce": 2120516818,
			"isDeleted": false,
			"id": "x2yKw3nX",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2052.334823247389,
			"y": 1069.453166678257,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 32.084991455078125,
			"height": 80.88017118016616,
			"seed": 1566155918,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 64.70413694413293,
			"fontFamily": 1,
			"text": "}",
			"rawText": "}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "}",
			"lineHeight": 1.25,
			"baseline": 57
		},
		{
			"type": "text",
			"version": 113,
			"versionNonce": 887102098,
			"isDeleted": false,
			"id": "7dHjVnZc",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3314.563521434282,
			"y": -49.98515903732823,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 666.962646484375,
			"height": 262.8525390624997,
			"seed": 754699854,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 210.28203124999976,
			"fontFamily": 1,
			"text": "Case 1",
			"rawText": "Case 1",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Case 1",
			"lineHeight": 1.25,
			"baseline": 185
		},
		{
			"type": "text",
			"version": 99,
			"versionNonce": 1256388690,
			"isDeleted": false,
			"id": "Xe9lasvD",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3333.036177684282,
			"y": 696.8690890095468,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 645.7110595703125,
			"height": 223.41650390624977,
			"seed": 1334277326,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708105585582,
			"link": null,
			"locked": false,
			"fontSize": 178.73320312499982,
			"fontFamily": 1,
			"text": "Case 2",
			"rawText": "Case 2",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Case 2",
			"lineHeight": 1.25,
			"baseline": 157
		},
		{
			"type": "text",
			"version": 135,
			"versionNonce": 2143426126,
			"isDeleted": false,
			"id": "DnUjeZMY",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -543.9598899544213,
			"y": 1444.1171404540232,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 497.75811767578125,
			"height": 35,
			"seed": 1795688018,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708107980278,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "Removing a node from the linked list",
			"rawText": "Removing a node from the linked list",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Removing a node from the linked list",
			"lineHeight": 1.25,
			"baseline": 24
		},
		{
			"type": "text",
			"version": 165,
			"versionNonce": 1153275086,
			"isDeleted": false,
			"id": "PbIyfYvR",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -546.9818025546884,
			"y": 1486.262428278848,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 968.608154296875,
			"height": 35,
			"seed": 249757970,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108011054,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "We return an int this time to say if the removal is successful or not",
			"rawText": "We return an int this time to say if the removal is successful or not",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "We return an int this time to say if the removal is successful or not",
			"lineHeight": 1.25,
			"baseline": 24
		},
		{
			"type": "text",
			"version": 198,
			"versionNonce": 190290386,
			"isDeleted": false,
			"id": "R0AeG89W",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -545.3101573341003,
			"y": 1534.2195456961276,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1034.240478515625,
			"height": 105,
			"seed": 1565108366,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108077625,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "if the target we wanna remove is found we have two cases at that time.\n    1. it is at the starting\n    2. it is in the middle somewhere.",
			"rawText": "if the target we wanna remove is found we have two cases at that time.\n    1. it is at the starting\n    2. it is in the middle somewhere.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "if the target we wanna remove is found we have two cases at that time.\n    1. it is at the starting\n    2. it is in the middle somewhere.",
			"lineHeight": 1.25,
			"baseline": 94
		},
		{
			"type": "text",
			"version": 11,
			"versionNonce": 486585810,
			"isDeleted": false,
			"id": "TlDs43jg",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -548.4160569204975,
			"y": 1785.6705667783885,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 107.10043334960938,
			"height": 35,
			"seed": 1333999250,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108098138,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "Case 1:-",
			"rawText": "Case 1:-",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Case 1:-",
			"lineHeight": 1.25,
			"baseline": 24
		},
		{
			"type": "ellipse",
			"version": 359,
			"versionNonce": 657891154,
			"isDeleted": false,
			"id": "5gNLXoEBHyUL_gkfWhtmy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -267.7174080880343,
			"y": 1863.6009627385386,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1258584462,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "fwftfJygGhUnx1u0pzrjz",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "SN5s3mpx"
				},
				{
					"id": "KaM-vNSlhhSKDJvLwPjHO",
					"type": "arrow"
				}
			],
			"updated": 1708108451138,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 706,
			"versionNonce": 314474752,
			"isDeleted": false,
			"id": "SN5s3mpx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -221.87856877211632,
			"y": 1887.9154417515922,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 10.03125,
			"height": 46.29742959086417,
			"seed": 1335498702,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755750,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "5gNLXoEBHyUL_gkfWhtmy",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 401,
			"versionNonce": 900425298,
			"isDeleted": false,
			"id": "x_sSfb6iEheeljd_dvFL-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -53.61276344998714,
			"y": 1858.8705940795178,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1684139534,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "fwftfJygGhUnx1u0pzrjz",
					"type": "arrow"
				},
				{
					"id": "vR1ZR_iZ0y6fFXm1Vorsz",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "w8Gn5s8c"
				}
			],
			"updated": 1708108451138,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 706,
			"versionNonce": 1009369344,
			"isDeleted": false,
			"id": "w8Gn5s8c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -15.935880921178537,
			"y": 1883.1850730925714,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 26.35516357421875,
			"height": 46.29742959086417,
			"seed": 911539278,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755753,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "x_sSfb6iEheeljd_dvFL-",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 404,
			"versionNonce": 201633106,
			"isDeleted": false,
			"id": "dNpu6NxzNm32lqSFwaKV7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 181.2928890466826,
			"y": 1857.8100257644512,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1800159886,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "vR1ZR_iZ0y6fFXm1Vorsz",
					"type": "arrow"
				},
				{
					"id": "ZT2MJilwJMYDPksKnD7e4",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "BWes0u5w"
				}
			],
			"updated": 1708108451138,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 707,
			"versionNonce": 740622592,
			"isDeleted": false,
			"id": "BWes0u5w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 219.54351730303026,
			"y": 1882.1245047775049,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 25.207672119140625,
			"height": 46.29742959086417,
			"seed": 100712654,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755756,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "dNpu6NxzNm32lqSFwaKV7",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 390,
			"versionNonce": 1409446994,
			"isDeleted": false,
			"id": "YU3Hm4WbK0TtTrWrrYW6m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 422.9231979790917,
			"y": 1853.306820823985,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1242265358,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "ZT2MJilwJMYDPksKnD7e4",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "Czm0OAPZ"
				}
			],
			"updated": 1708108451138,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 706,
			"versionNonce": 85754112,
			"isDeleted": false,
			"id": "Czm0OAPZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 461.9326458155175,
			"y": 1877.6212998370386,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 23.690032958984375,
			"height": 46.29742959086417,
			"seed": 535127374,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755758,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "YU3Hm4WbK0TtTrWrrYW6m",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 1046,
			"versionNonce": 280021751,
			"isDeleted": false,
			"id": "fwftfJygGhUnx1u0pzrjz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -164.44242712664234,
			"y": 1912.217739170206,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 103.64756269160694,
			"height": 3.986440447491532,
			"seed": 2028440462,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235957,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "5gNLXoEBHyUL_gkfWhtmy",
				"gap": 1.8518932410631166,
				"focus": 0.06214076702089546
			},
			"endBinding": {
				"elementId": "x_sSfb6iEheeljd_dvFL-",
				"gap": 7.2094850095727026,
				"focus": 0.011306736264538441
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					103.64756269160694,
					-3.986440447491532
				]
			]
		},
		{
			"type": "arrow",
			"version": 1038,
			"versionNonce": 163846007,
			"isDeleted": false,
			"id": "vR1ZR_iZ0y6fFXm1Vorsz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 54.83767071660509,
			"y": 1912.2886268573648,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 121.71962856835174,
			"height": 6.086004034689722,
			"seed": 860547534,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235960,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "x_sSfb6iEheeljd_dvFL-",
				"gap": 7.335237143141221,
				"focus": 0.18079793883698267
			},
			"endBinding": {
				"elementId": "dNpu6NxzNm32lqSFwaKV7",
				"gap": 4.740811757103344,
				"focus": 0.04301011925176631
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					121.71962856835174,
					-6.086004034689722
				]
			]
		},
		{
			"type": "arrow",
			"version": 1025,
			"versionNonce": 848110583,
			"isDeleted": false,
			"id": "ZT2MJilwJMYDPksKnD7e4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 284.5588147691391,
			"y": 1904.1663358812525,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 127.32214688955219,
			"height": 2.021011481612277,
			"seed": 2116583438,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235968,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "dNpu6NxzNm32lqSFwaKV7",
				"gap": 1.8518895037473087,
				"focus": -0.01012758313969391
			},
			"endBinding": {
				"elementId": "YU3Hm4WbK0TtTrWrrYW6m",
				"gap": 11.054395198877266,
				"focus": -0.0038773248132543928
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					127.32214688955219,
					-2.021011481612277
				]
			]
		},
		{
			"type": "text",
			"version": 297,
			"versionNonce": 1965526738,
			"isDeleted": false,
			"id": "6iQk1dCU",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 600.280016723804,
			"y": 1855.6516171575236,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 623.1453857421875,
			"height": 81.67193702821899,
			"seed": 924765582,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108451138,
			"link": null,
			"locked": false,
			"fontSize": 32.6687748112876,
			"fontFamily": 1,
			"text": "somehow the target we wanna remove \nis 1 i.e. the first element",
			"rawText": "somehow the target we wanna remove \nis 1 i.e. the first element",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "somehow the target we wanna remove \nis 1 i.e. the first element",
			"lineHeight": 1.25,
			"baseline": 69
		},
		{
			"type": "ellipse",
			"version": 465,
			"versionNonce": 1263766807,
			"isDeleted": false,
			"id": "d54TCRhV4OlRv5tfvYmx6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -289.0163900831758,
			"y": 2034.6401196122258,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1035133458,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "eFaqjiT4R_G9pqHfDamYm",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "tAqVT9Wo"
				},
				{
					"id": "-P5rFFCLY9ns3pagPThfB",
					"type": "arrow"
				}
			],
			"updated": 1708320235969,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 808,
			"versionNonce": 1717881239,
			"isDeleted": false,
			"id": "tAqVT9Wo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -243.1775507672578,
			"y": 2058.9545986252792,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 10.03125,
			"height": 46.29742959086417,
			"seed": 1290850258,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708320235972,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "d54TCRhV4OlRv5tfvYmx6",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 508,
			"versionNonce": 476413623,
			"isDeleted": false,
			"id": "Pi3vlenqbd7eqoEoqo_NB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -74.91174544512864,
			"y": 2029.9097509532055,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 564856210,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "eFaqjiT4R_G9pqHfDamYm",
					"type": "arrow"
				},
				{
					"id": "ttZGe9t2Zdk7xNIPadp8Y",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "jNZZuT5l"
				},
				{
					"id": "Ihb6bsUR-NWNAHdJsH06E",
					"type": "arrow"
				}
			],
			"updated": 1708320235973,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 808,
			"versionNonce": 1651165559,
			"isDeleted": false,
			"id": "jNZZuT5l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -37.23486291632004,
			"y": 2054.224229966259,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 26.35516357421875,
			"height": 46.29742959086417,
			"seed": 1427669842,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708320235977,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Pi3vlenqbd7eqoEoqo_NB",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 510,
			"versionNonce": 1264616087,
			"isDeleted": false,
			"id": "0XV7ZPAgwmL_kuOGVuO9I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 159.9939070515411,
			"y": 2028.8491826381385,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1099974930,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "ttZGe9t2Zdk7xNIPadp8Y",
					"type": "arrow"
				},
				{
					"id": "YjRI6sXs0s4tUS94Tqs58",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "vP9lulP9"
				}
			],
			"updated": 1708320235977,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 803,
			"versionNonce": 432660736,
			"isDeleted": false,
			"id": "vP9lulP9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 198.24453530788875,
			"y": 2053.1636616511923,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 25.207672119140625,
			"height": 46.29742959086417,
			"seed": 1586058962,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755768,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "0XV7ZPAgwmL_kuOGVuO9I",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 496,
			"versionNonce": 438895671,
			"isDeleted": false,
			"id": "3Z3wE2SvzjftU_T5bX58v",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 401.6242159839502,
			"y": 2024.3459776976722,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 479898770,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "YjRI6sXs0s4tUS94Tqs58",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "vK3IytQ6"
				}
			],
			"updated": 1708320235979,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 804,
			"versionNonce": 2055028992,
			"isDeleted": false,
			"id": "vK3IytQ6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 440.633663820376,
			"y": 2048.660456710726,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 23.690032958984375,
			"height": 46.29742959086417,
			"seed": 1098598994,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755770,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "3Z3wE2SvzjftU_T5bX58v",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 1338,
			"versionNonce": 1606450423,
			"isDeleted": false,
			"id": "eFaqjiT4R_G9pqHfDamYm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -185.74141175274355,
			"y": 2083.2568961450834,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 103.64758919803295,
			"height": 3.9864414669682446,
			"seed": 1140994066,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235974,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "d54TCRhV4OlRv5tfvYmx6",
				"gap": 1.8518906126855583,
				"focus": 0.062140767020876876
			},
			"endBinding": {
				"elementId": "Pi3vlenqbd7eqoEoqo_NB",
				"gap": 7.2094611168473435,
				"focus": 0.011306736264557127
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					103.64758919803295,
					-3.9864414669682446
				]
			]
		},
		{
			"type": "arrow",
			"version": 1330,
			"versionNonce": 418646231,
			"isDeleted": false,
			"id": "ttZGe9t2Zdk7xNIPadp8Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 33.53840875403526,
			"y": 2083.3277977294747,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 121.71991182245839,
			"height": 6.086018197447629,
			"seed": 673603026,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235978,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Pi3vlenqbd7eqoEoqo_NB",
				"gap": 7.33496041633429,
				"focus": 0.18079793883695755
			},
			"endBinding": {
				"elementId": "0XV7ZPAgwmL_kuOGVuO9I",
				"gap": 4.740808468384351,
				"focus": 0.043010119251778646
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					121.71991182245839,
					-6.086018197447629
				]
			]
		},
		{
			"type": "arrow",
			"version": 1317,
			"versionNonce": 1132503671,
			"isDeleted": false,
			"id": "YjRI6sXs0s4tUS94Tqs58",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 263.25982765435003,
			"y": 2075.205492836204,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 127.32216622239946,
			"height": 2.021011788486703,
			"seed": 1526649746,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235980,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "0XV7ZPAgwmL_kuOGVuO9I",
				"gap": 1.8518843838389643,
				"focus": -0.010127583139711698
			},
			"endBinding": {
				"elementId": "3Z3wE2SvzjftU_T5bX58v",
				"gap": 11.054380984057047,
				"focus": -0.0038773248132345428
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					127.32216622239946,
					-2.021011788486703
				]
			]
		},
		{
			"type": "ellipse",
			"version": 503,
			"versionNonce": 111329505,
			"isDeleted": false,
			"id": "wFgn47aCC5Hd94lIIsjfF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -350.67700708876737,
			"y": 2491.1927779069892,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 855193810,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "i2fFSqWKZ7OgEFBe6Eb7T",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "lr0RiiKD"
				},
				{
					"id": "xgun-Ec89tPQtFo2W1ERX",
					"type": "arrow"
				}
			],
			"updated": 1708165347294,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 848,
			"versionNonce": 521445632,
			"isDeleted": false,
			"id": "lr0RiiKD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -304.8381677728494,
			"y": 2515.507256920043,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 10.03125,
			"height": 46.29742959086417,
			"seed": 1555975826,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755772,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "wFgn47aCC5Hd94lIIsjfF",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 545,
			"versionNonce": 1614734369,
			"isDeleted": false,
			"id": "mXv7wFhRhZYVe998B-q2B",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -136.57236245072022,
			"y": 2486.462409247969,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1088072786,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "i2fFSqWKZ7OgEFBe6Eb7T",
					"type": "arrow"
				},
				{
					"id": "fNOddOJ0iwPXwJ-C3fbiQ",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "aSUdTCeQ"
				}
			],
			"updated": 1708165347294,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 848,
			"versionNonce": 1499980032,
			"isDeleted": false,
			"id": "aSUdTCeQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -98.89547992191162,
			"y": 2510.7768882610226,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 26.35516357421875,
			"height": 46.29742959086417,
			"seed": 623202834,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755774,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "mXv7wFhRhZYVe998B-q2B",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 548,
			"versionNonce": 443548481,
			"isDeleted": false,
			"id": "ikIC-e7LiYW6fdxctBT6m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 98.33329004594952,
			"y": 2485.401840932902,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 2090155986,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "fNOddOJ0iwPXwJ-C3fbiQ",
					"type": "arrow"
				},
				{
					"id": "_oj5rZDdhjwXcRBitU_ap",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "sMmcwTtC"
				}
			],
			"updated": 1708165347295,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 848,
			"versionNonce": 206250240,
			"isDeleted": false,
			"id": "sMmcwTtC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 136.5839183022972,
			"y": 2509.7163199459555,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 25.207672119140625,
			"height": 46.29742959086417,
			"seed": 1128363410,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755777,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ikIC-e7LiYW6fdxctBT6m",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 534,
			"versionNonce": 1611753057,
			"isDeleted": false,
			"id": "MlEZT13We5RRd45bFSEav",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 339.9635989783586,
			"y": 2480.8986359924356,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1516303186,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "_oj5rZDdhjwXcRBitU_ap",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "HQXOMUl7"
				}
			],
			"updated": 1708165347296,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 849,
			"versionNonce": 288530688,
			"isDeleted": false,
			"id": "HQXOMUl7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 378.9730468147844,
			"y": 2505.2131150054893,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 23.690032958984375,
			"height": 46.29742959086417,
			"seed": 1682618642,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755779,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "MlEZT13We5RRd45bFSEav",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 1488,
			"versionNonce": 114898967,
			"isDeleted": false,
			"id": "i2fFSqWKZ7OgEFBe6Eb7T",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -247.4020274428556,
			"y": 2539.8095543892505,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 103.64757594482953,
			"height": 3.9864409572301156,
			"seed": 544589522,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235984,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "wFgn47aCC5Hd94lIIsjfF",
				"gap": 1.8518919268739964,
				"focus": 0.0621407670208677
			},
			"endBinding": {
				"elementId": "mXv7wFhRhZYVe998B-q2B",
				"gap": 7.20947306320074,
				"focus": 0.011306736264555084
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					103.64757594482953,
					-3.9864409572301156
				]
			]
		},
		{
			"type": "arrow",
			"version": 1480,
			"versionNonce": 943518871,
			"isDeleted": false,
			"id": "fNOddOJ0iwPXwJ-C3fbiQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -28.122068268455898,
			"y": 2539.880449025057,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 121.71977019601925,
			"height": 6.086011116099144,
			"seed": 1199119506,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235986,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "mXv7wFhRhZYVe998B-q2B",
				"gap": 7.335098779126277,
				"focus": 0.18079793883695358
			},
			"endBinding": {
				"elementId": "ikIC-e7LiYW6fdxctBT6m",
				"gap": 4.740810112743411,
				"focus": 0.043010119251774497
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					121.71977019601925,
					-6.086011116099144
				]
			]
		},
		{
			"type": "arrow",
			"version": 1467,
			"versionNonce": 1973317911,
			"isDeleted": false,
			"id": "_oj5rZDdhjwXcRBitU_ap",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 201.59921320858072,
			"y": 2531.7581510903346,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 127.32215655597898,
			"height": 2.02101163504949,
			"seed": 1728821842,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235989,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ikIC-e7LiYW6fdxctBT6m",
				"gap": 1.8518869437916408,
				"focus": -0.010127583139709906
			},
			"endBinding": {
				"elementId": "MlEZT13We5RRd45bFSEav",
				"gap": 11.054388091465519,
				"focus": -0.003877324813234817
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					127.32215655597898,
					-2.02101163504949
				]
			]
		},
		{
			"type": "freedraw",
			"version": 86,
			"versionNonce": 778930126,
			"isDeleted": false,
			"id": "xGclPbFt1vyfdI2V4n0Mt",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -424.76228730718367,
			"y": 2085.739049249501,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.155029296875,
			"height": 5.155029296875,
			"seed": 1828416658,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108761828,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.288775275735361,
					1.2887752757355884
				],
				[
					0,
					1.2887752757355884
				],
				[
					0,
					0
				],
				[
					0,
					-1.2887393727019116
				],
				[
					-1.2887034696690307,
					-1.2887393727019116
				],
				[
					-2.577478745404278,
					0
				],
				[
					-3.866254021139639,
					1.2887752757355884
				],
				[
					-3.866254021139639,
					2.5775146484375
				],
				[
					-2.577478745404278,
					2.5775146484375
				],
				[
					-2.577478745404278,
					3.8662899241730884
				],
				[
					-1.2887034696690307,
					2.5775146484375
				],
				[
					-1.2887034696690307,
					1.2887752757355884
				],
				[
					-1.2887034696690307,
					0
				],
				[
					-3.866254021139639,
					1.2887752757355884
				],
				[
					-3.866254021139639,
					1.2887752757355884
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "arrow",
			"version": 196,
			"versionNonce": 573304951,
			"isDeleted": false,
			"id": "-P5rFFCLY9ns3pagPThfB",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -426.0509907768527,
			"y": 2087.0278245252366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 134.03091015569873,
			"height": 3.8662900633516983,
			"seed": 2050762322,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235971,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "d54TCRhV4OlRv5tfvYmx6",
				"gap": 3.01121246822958,
				"focus": 0.014708471888131394
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					134.03091015569873,
					-3.8662900633516983
				]
			]
		},
		{
			"type": "line",
			"version": 146,
			"versionNonce": 722234446,
			"isDeleted": false,
			"id": "pkRTuCFRbcj0PWwLVOdqy",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -331.97161635130124,
			"y": 2052.2313229167803,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.951530905330856,
			"height": 65.72667738970586,
			"seed": 1718484946,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708108761828,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					-39.951530905330856,
					65.72667738970586
				]
			]
		},
		{
			"type": "arrow",
			"version": 493,
			"versionNonce": 267152471,
			"isDeleted": false,
			"id": "Ihb6bsUR-NWNAHdJsH06E",
			"fillStyle": "solid",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -426.0509907768527,
			"y": 2090.8941144494092,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 344.09886235993673,
			"height": 110.83327349494493,
			"seed": 1180275086,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235976,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "Pi3vlenqbd7eqoEoqo_NB",
				"gap": 7.2175794880696245,
				"focus": -0.7067848489153933
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					181.71501608455867,
					-110.83327349494493
				],
				[
					344.09886235993673,
					-9.02116629417651
				]
			]
		},
		{
			"type": "line",
			"version": 121,
			"versionNonce": 1738289358,
			"isDeleted": false,
			"id": "tHkVWhoAL9XfIAluOwjeF",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -164.4329128816322,
			"y": 2044.498743068435,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 34.796501608455856,
			"height": 78.61428653492658,
			"seed": 1146132370,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708108761828,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					34.796501608455856,
					78.61428653492658
				]
			]
		},
		{
			"type": "text",
			"version": 232,
			"versionNonce": 1186522894,
			"isDeleted": false,
			"id": "2mv7DEco",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 598.7034175172264,
			"y": 2048.9864681206136,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1253.25732421875,
			"height": 35,
			"seed": 2146437006,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108761828,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "We just pont the head to the next node after current node where the element is present",
			"rawText": "We just pont the head to the next node after current node where the element is present",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "We just pont the head to the next node after current node where the element is present",
			"lineHeight": 1.25,
			"baseline": 24
		},
		{
			"type": "ellipse",
			"version": 602,
			"versionNonce": 1813945230,
			"isDeleted": false,
			"id": "Qj9IJ02z_HGkCr3xMP3OM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -279.03052729624864,
			"y": 2217.784488647355,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 718562126,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "Vrtl-Nlx5b5bnsMR_Gnjw",
					"type": "arrow"
				},
				{
					"id": "iNkIqBf9KpmpCGz7gmj3A",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "k3S9tcEz"
				}
			],
			"updated": 1708108765098,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 907,
			"versionNonce": 2020475136,
			"isDeleted": false,
			"id": "k3S9tcEz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -241.35364476744002,
			"y": 2242.0989676604086,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 26.35516357421875,
			"height": 46.29742959086417,
			"seed": 155634062,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755782,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Qj9IJ02z_HGkCr3xMP3OM",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 605,
			"versionNonce": 1162175630,
			"isDeleted": false,
			"id": "h__KRL0EUSS_j1vIxICyV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -44.12487479957912,
			"y": 2216.723920332287,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 823289806,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "iNkIqBf9KpmpCGz7gmj3A",
					"type": "arrow"
				},
				{
					"id": "17ieqh0HX7jBF7e-ZOv0y",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "hXRb9jdj"
				}
			],
			"updated": 1708108765098,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 907,
			"versionNonce": 2017018112,
			"isDeleted": false,
			"id": "hXRb9jdj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -5.874246543231454,
			"y": 2241.0383993453406,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 25.207672119140625,
			"height": 46.29742959086417,
			"seed": 307248654,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755784,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "h__KRL0EUSS_j1vIxICyV",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 591,
			"versionNonce": 608152974,
			"isDeleted": false,
			"id": "u44OvieAhInzxUAMfrlW_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 197.5054341328301,
			"y": 2212.2207153918216,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 838421582,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "17ieqh0HX7jBF7e-ZOv0y",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "eT7VABPj"
				}
			],
			"updated": 1708108765098,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 907,
			"versionNonce": 84984064,
			"isDeleted": false,
			"id": "eT7VABPj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 236.51488196925587,
			"y": 2236.5351944048753,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 23.690032958984375,
			"height": 46.29742959086417,
			"seed": 233214606,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755786,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "u44OvieAhInzxUAMfrlW_",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 1506,
			"versionNonce": 1962817079,
			"isDeleted": false,
			"id": "Vrtl-Nlx5b5bnsMR_Gnjw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -393.54555602112816,
			"y": 2268.5505005468376,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 107.3107280805479,
			"height": 2.3587407136883485,
			"seed": 13701326,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235990,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "Qj9IJ02z_HGkCr3xMP3OM",
				"gap": 7.209480485434128,
				"focus": 0.011306736264534092
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					107.3107280805479,
					-2.3587407136883485
				]
			]
		},
		{
			"type": "arrow",
			"version": 1657,
			"versionNonce": 123855543,
			"isDeleted": false,
			"id": "iNkIqBf9KpmpCGz7gmj3A",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -170.58023311398432,
			"y": 2271.202528424444,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 121.71977019601898,
			"height": 6.086011116100508,
			"seed": 642893582,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235993,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Qj9IJ02z_HGkCr3xMP3OM",
				"gap": 7.335098779126433,
				"focus": 0.18079793883699574
			},
			"endBinding": {
				"elementId": "h__KRL0EUSS_j1vIxICyV",
				"gap": 4.7408101127434605,
				"focus": 0.043010119251768585
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					121.71977019601898,
					-6.086011116100508
				]
			]
		},
		{
			"type": "arrow",
			"version": 1644,
			"versionNonce": 1850429239,
			"isDeleted": false,
			"id": "17ieqh0HX7jBF7e-ZOv0y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 59.141048363051965,
			"y": 2263.0802304897206,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 127.32215655597926,
			"height": 2.0210116350490352,
			"seed": 1054979406,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235996,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "h__KRL0EUSS_j1vIxICyV",
				"gap": 1.8518869437915129,
				"focus": -0.01012758313969483
			},
			"endBinding": {
				"elementId": "u44OvieAhInzxUAMfrlW_",
				"gap": 11.054388091465476,
				"focus": -0.0038773248132490425
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					127.32215655597926,
					-2.0210116350490352
				]
			]
		},
		{
			"type": "freedraw",
			"version": 58,
			"versionNonce": 1547457746,
			"isDeleted": false,
			"id": "b_2QuO3_tQSaYCw5ihJGz",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -393.29176361186603,
			"y": 1909.8656177846299,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.477294921875,
			"height": 5.4772440592448675,
			"seed": 1058288910,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108451138,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.825739542643305
				],
				[
					0,
					0
				],
				[
					-3.6515299479166288,
					0
				],
				[
					-5.477294921875,
					0
				],
				[
					-5.477294921875,
					1.825739542643305
				],
				[
					-5.477294921875,
					3.6515045166015625
				],
				[
					-1.8257649739583712,
					3.6515045166015625
				],
				[
					-1.8257649739583712,
					1.825739542643305
				],
				[
					0,
					1.825739542643305
				],
				[
					-1.8257649739583712,
					1.825739542643305
				],
				[
					-1.8257649739583712,
					3.6515045166015625
				],
				[
					-3.6515299479166288,
					3.6515045166015625
				],
				[
					-1.8257649739583712,
					3.6515045166015625
				],
				[
					0,
					3.6515045166015625
				],
				[
					0,
					3.6515045166015625
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "arrow",
			"version": 120,
			"versionNonce": 1064389815,
			"isDeleted": false,
			"id": "KaM-vNSlhhSKDJvLwPjHO",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -391.46610036316815,
			"y": 1913.5171223012314,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 109.54458740619623,
			"height": 3.651504896506367,
			"seed": 1968113486,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235954,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "5gNLXoEBHyUL_gkfWhtmy",
				"gap": 14.220925357378427,
				"focus": 0.07489412054633088
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					109.54458740619623,
					-3.651504896506367
				]
			]
		},
		{
			"type": "freedraw",
			"version": 111,
			"versionNonce": 1380952846,
			"isDeleted": false,
			"id": "809FW2uVBNDUBOVrrIi9R",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -402.1595905277886,
			"y": 2266.928624231105,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.477193196614621,
			"height": 7.30295817057322,
			"seed": 403253838,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108765098,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.825714111328125
				],
				[
					1.8257649739583712,
					-1.825714111328125
				],
				[
					1.8257649739583712,
					-3.65147908528661
				],
				[
					0,
					-3.65147908528661
				],
				[
					-1.8256632486978788,
					-3.65147908528661
				],
				[
					-3.65142822265625,
					-1.825714111328125
				],
				[
					-3.65142822265625,
					0
				],
				[
					-1.8256632486978788,
					1.825764973958485
				],
				[
					-3.65142822265625,
					3.65147908528661
				],
				[
					-1.8256632486978788,
					3.65147908528661
				],
				[
					0,
					1.825764973958485
				],
				[
					1.8257649739583712,
					0
				],
				[
					1.8257649739583712,
					-1.825714111328125
				],
				[
					-1.8256632486978788,
					-3.65147908528661
				],
				[
					-1.8256632486978788,
					-1.825714111328125
				],
				[
					-3.65142822265625,
					-1.825714111328125
				],
				[
					-3.65142822265625,
					1.825764973958485
				],
				[
					0,
					1.825764973958485
				],
				[
					0,
					-3.65147908528661
				],
				[
					-1.8256632486978788,
					-1.825714111328125
				],
				[
					-3.65142822265625,
					-1.825714111328125
				],
				[
					-1.8256632486978788,
					1.825764973958485
				],
				[
					-1.8256632486978788,
					3.65147908528661
				],
				[
					-1.8256632486978788,
					1.825764973958485
				],
				[
					0,
					0
				],
				[
					0.0001,
					0.0001
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "text",
			"version": 61,
			"versionNonce": 1978213586,
			"isDeleted": false,
			"id": "7JaYKtrQ",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -555.7337874795193,
			"y": 2401.9574996728834,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 133.44854736328125,
			"height": 35,
			"seed": 474325070,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108769931,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "Case 2 :-",
			"rawText": "Case 2 :-",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Case 2 :-",
			"lineHeight": 1.25,
			"baseline": 24
		},
		{
			"type": "text",
			"version": 76,
			"versionNonce": 315669138,
			"isDeleted": false,
			"id": "Ii0FEWU3",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 612.5995458538141,
			"y": 2516.9574996728834,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 276.05316162109375,
			"height": 35,
			"seed": 73146962,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108769931,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "We wanna remove 3.",
			"rawText": "We wanna remove 3.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "We wanna remove 3.",
			"lineHeight": 1.25,
			"baseline": 24
		},
		{
			"type": "ellipse",
			"version": 608,
			"versionNonce": 1639946322,
			"isDeleted": false,
			"id": "ftZ2JVUNQRg4KE7yJReje",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -362.9495596644865,
			"y": 2698.0705969362116,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 761592014,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "_zY1dKAVH5kbdSGBFW5Yj",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "9P2Vmp38"
				},
				{
					"id": "woM6rSa31u_wbqlvFD2gq",
					"type": "arrow"
				}
			],
			"updated": 1708108769931,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 954,
			"versionNonce": 494412032,
			"isDeleted": false,
			"id": "9P2Vmp38",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -317.1107203485685,
			"y": 2722.3850759492652,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 10.03125,
			"height": 46.29742959086417,
			"seed": 1747496718,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755788,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ftZ2JVUNQRg4KE7yJReje",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 651,
			"versionNonce": 1534058322,
			"isDeleted": false,
			"id": "tZ33mZHqMUnbchhz68avn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -148.84491502643937,
			"y": 2693.3402282771913,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1973132622,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "_zY1dKAVH5kbdSGBFW5Yj",
					"type": "arrow"
				},
				{
					"id": "e7-2T9LCMhU4HVcARKfYw",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "sHBqxqhd"
				},
				{
					"id": "Aje8TOtT6yATk2iF4vmzj",
					"type": "arrow"
				}
			],
			"updated": 1708108769931,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 954,
			"versionNonce": 1024934144,
			"isDeleted": false,
			"id": "sHBqxqhd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -111.16803249763078,
			"y": 2717.654707290245,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 26.35516357421875,
			"height": 46.29742959086417,
			"seed": 722912142,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755792,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "tZ33mZHqMUnbchhz68avn",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 653,
			"versionNonce": 473959442,
			"isDeleted": false,
			"id": "WgVSCXFATBJcqC9ho-Bdh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 86.06073747023038,
			"y": 2692.279659962125,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1255350734,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "e7-2T9LCMhU4HVcARKfYw",
					"type": "arrow"
				},
				{
					"id": "PgYldR15utNrP2wN5pH5J",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "6xhZMg2O"
				}
			],
			"updated": 1708108769931,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 954,
			"versionNonce": 2096267520,
			"isDeleted": false,
			"id": "6xhZMg2O",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 124.31136572657805,
			"y": 2716.594138975179,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 25.207672119140625,
			"height": 46.29742959086417,
			"seed": 1743370254,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755796,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "WgVSCXFATBJcqC9ho-Bdh",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 640,
			"versionNonce": 590902034,
			"isDeleted": false,
			"id": "q_mcpIpPVtm2f7trGyy76",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 327.6910464026395,
			"y": 2687.776455021658,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1246987854,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "PgYldR15utNrP2wN5pH5J",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "DiseIm7s"
				},
				{
					"id": "Aje8TOtT6yATk2iF4vmzj",
					"type": "arrow"
				}
			],
			"updated": 1708108769931,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 955,
			"versionNonce": 809623808,
			"isDeleted": false,
			"id": "DiseIm7s",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 366.7004942390653,
			"y": 2712.0909340347116,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 23.690032958984375,
			"height": 46.29742959086417,
			"seed": 1391037582,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755798,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "q_mcpIpPVtm2f7trGyy76",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 1817,
			"versionNonce": 899673303,
			"isDeleted": false,
			"id": "_zY1dKAVH5kbdSGBFW5Yj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -259.6745800185747,
			"y": 2746.6873734184737,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 103.64757594482953,
			"height": 3.9864409572301156,
			"seed": 1600441038,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235999,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ftZ2JVUNQRg4KE7yJReje",
				"gap": 1.8518919268740035,
				"focus": 0.06214076702088674
			},
			"endBinding": {
				"elementId": "tZ33mZHqMUnbchhz68avn",
				"gap": 7.2094730632007185,
				"focus": 0.011306736264535953
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					103.64757594482953,
					-3.9864409572301156
				]
			]
		},
		{
			"type": "arrow",
			"version": 1809,
			"versionNonce": 71173751,
			"isDeleted": false,
			"id": "e7-2T9LCMhU4HVcARKfYw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -40.39462084417497,
			"y": 2746.75826805428,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 121.71977019601923,
			"height": 6.086011116099144,
			"seed": 777928974,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236004,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "tZ33mZHqMUnbchhz68avn",
				"gap": 7.335098779126447,
				"focus": 0.18079793883697273
			},
			"endBinding": {
				"elementId": "WgVSCXFATBJcqC9ho-Bdh",
				"gap": 4.740810112743361,
				"focus": 0.04301011925177445
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					121.71977019601923,
					-6.086011116099144
				]
			]
		},
		{
			"type": "arrow",
			"version": 1796,
			"versionNonce": 1427608311,
			"isDeleted": false,
			"id": "PgYldR15utNrP2wN5pH5J",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 189.3266606328616,
			"y": 2738.635970119558,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 127.32215655597895,
			"height": 2.0210116350499447,
			"seed": 1129246542,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236006,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "WgVSCXFATBJcqC9ho-Bdh",
				"gap": 1.8518869437916763,
				"focus": -0.010127583139705956
			},
			"endBinding": {
				"elementId": "q_mcpIpPVtm2f7trGyy76",
				"gap": 11.054388091465526,
				"focus": -0.0038773248132397235
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					127.32215655597895,
					-2.0210116350499447
				]
			]
		},
		{
			"type": "ellipse",
			"version": 673,
			"versionNonce": 740753665,
			"isDeleted": false,
			"id": "vKZ7_uL9nnMYupnGSB0is",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -356.67158521787223,
			"y": 2919.0839113195825,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 512652942,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "NLy_GTQCqdxfUpJOg2y4E",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "tsJbYzP3"
				},
				{
					"id": "usLZ50Py8IdjLuYxZbIBe",
					"type": "arrow"
				}
			],
			"updated": 1708165347298,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1018,
			"versionNonce": 99959040,
			"isDeleted": false,
			"id": "tsJbYzP3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -310.83274590195424,
			"y": 2943.398390332636,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 10.03125,
			"height": 46.29742959086417,
			"seed": 2061268174,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755800,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "vKZ7_uL9nnMYupnGSB0is",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 713,
			"versionNonce": 855949906,
			"isDeleted": false,
			"id": "K9DL7vCzYN-6gtjgFhpyH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -137.0897473832108,
			"y": 2916.1792059092595,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 290499342,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "NLy_GTQCqdxfUpJOg2y4E",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "H5WXxV4w"
				},
				{
					"id": "HfRp6u4tXyAS7Mh1X6Bfs",
					"type": "arrow"
				}
			],
			"updated": 1708108769931,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1015,
			"versionNonce": 122716416,
			"isDeleted": false,
			"id": "H5WXxV4w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -99.4128648544022,
			"y": 2940.493684922313,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 26.35516357421875,
			"height": 46.29742959086417,
			"seed": 811866446,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755803,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "K9DL7vCzYN-6gtjgFhpyH",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 647,
			"versionNonce": 524330881,
			"isDeleted": false,
			"id": "pA-w0aBkttIBkDQLokfuA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 103.92558416305565,
			"y": 2912.441197627685,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1865659406,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "HfRp6u4tXyAS7Mh1X6Bfs",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "nTd9i5FJ"
				}
			],
			"updated": 1708165347299,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 962,
			"versionNonce": 780665088,
			"isDeleted": false,
			"id": "nTd9i5FJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 142.93503199948145,
			"y": 2936.755676640739,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 23.690032958984375,
			"height": 46.29742959086417,
			"seed": 1325269582,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755804,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "pA-w0aBkttIBkDQLokfuA",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 2054,
			"versionNonce": 638627255,
			"isDeleted": false,
			"id": "NLy_GTQCqdxfUpJOg2y4E",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -253.40408615410746,
			"y": 2968.0173036744454,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 109.11633278267428,
			"height": 3.073016769541937,
			"seed": 1424263310,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236011,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "vKZ7_uL9nnMYupnGSB0is",
				"gap": 1.85188958336105,
				"focus": 0.057449820613582135
			},
			"endBinding": {
				"elementId": "K9DL7vCzYN-6gtjgFhpyH",
				"gap": 7.209468059116887,
				"focus": 0.011306736264527825
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					109.11633278267428,
					-3.073016769541937
				]
			]
		},
		{
			"type": "arrow",
			"version": 1979,
			"versionNonce": 901552695,
			"isDeleted": false,
			"id": "HfRp6u4tXyAS7Mh1X6Bfs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -23.395613452222108,
			"y": 2967.6123078082437,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 116.31388774090806,
			"height": 5.2062074445693725,
			"seed": 1925856526,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236014,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "K9DL7vCzYN-6gtjgFhpyH",
				"gap": 12.385275334854597,
				"focus": 0.13783843885783614
			},
			"endBinding": {
				"elementId": "pA-w0aBkttIBkDQLokfuA",
				"gap": 11.054353518754276,
				"focus": 0.009872143565075592
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					116.31388774090806,
					-5.2062074445693725
				]
			]
		},
		{
			"type": "line",
			"version": 95,
			"versionNonce": 21362194,
			"isDeleted": false,
			"id": "V1cDSQA0rnZpthOhBkRYl",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 42.01731405972919,
			"y": 2708.2366221617235,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 7.3030598958332575,
			"height": 83.98406982421875,
			"seed": 1934278414,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708108769931,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					-7.3030598958332575,
					83.98406982421875
				]
			]
		},
		{
			"type": "line",
			"version": 106,
			"versionNonce": 1426154450,
			"isDeleted": false,
			"id": "mUJto72BZtElJ508PI1L6",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 246.5003462862917,
			"y": 2699.1078990171923,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.605916341145985,
			"height": 105.89304606119777,
			"seed": 865373262,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708108769931,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					14.605916341145985,
					105.89304606119777
				]
			]
		},
		{
			"type": "arrow",
			"version": 402,
			"versionNonce": 817372183,
			"isDeleted": false,
			"id": "Aje8TOtT6yATk2iF4vmzj",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -40.1417385766122,
			"y": 2752.0548355413057,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 359.6720882036951,
			"height": 125.97661995510316,
			"seed": 318300882,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236007,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "tZ33mZHqMUnbchhz68avn",
				"gap": 8.42732533627882,
				"focus": 0.8784701850052115
			},
			"endBinding": {
				"elementId": "q_mcpIpPVtm2f7trGyy76",
				"gap": 8.638389985141643,
				"focus": -0.46098169698389113
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					175.27184560509139,
					-125.97661995510316
				],
				[
					359.6720882036951,
					-23.734982868310908
				]
			]
		},
		{
			"type": "freedraw",
			"version": 77,
			"versionNonce": 420747090,
			"isDeleted": false,
			"id": "JYBZau8tqTdifXY2adRPz",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -488.75207768134237,
			"y": 2541.0507207015294,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 7.302958170572879,
			"height": 12.7801513671875,
			"seed": 606134546,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108769931,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.8257649739580302
				],
				[
					0,
					0
				],
				[
					0,
					-1.8257649739580302
				],
				[
					-1.8257649739582575,
					0
				],
				[
					-3.6515299479166288,
					0
				],
				[
					-5.4771931966145075,
					0
				],
				[
					-5.4771931966145075,
					1.8256632486982198
				],
				[
					-5.4771931966145075,
					7.30295817057322
				],
				[
					-3.6515299479166288,
					9.128621419270985
				],
				[
					-1.8257649739582575,
					10.95438639322947
				],
				[
					0,
					10.95438639322947
				],
				[
					1.8257649739583712,
					9.128621419270985
				],
				[
					1.8257649739583712,
					7.30295817057322
				],
				[
					1.8257649739583712,
					3.65142822265625
				],
				[
					1.8257649739583712,
					1.8256632486982198
				],
				[
					0,
					1.8256632486982198
				],
				[
					-1.8257649739582575,
					1.8256632486982198
				],
				[
					-3.6515299479166288,
					1.8256632486982198
				],
				[
					-5.4771931966145075,
					1.8256632486982198
				],
				[
					-5.4771931966145075,
					5.477193196614735
				],
				[
					-3.6515299479166288,
					7.30295817057322
				],
				[
					-1.8257649739582575,
					9.128621419270985
				],
				[
					0,
					7.30295817057322
				],
				[
					0,
					7.30295817057322
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "freedraw",
			"version": 104,
			"versionNonce": 687430930,
			"isDeleted": false,
			"id": "CFn4rmxt3_z49CFHs5Meh",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -483.7963862983437,
			"y": 2739.2742198179735,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.605916341145871,
			"height": 12.7801513671875,
			"seed": 319401618,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108769931,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.8257649739583712,
					0
				],
				[
					-1.8257649739583712,
					1.8257649739580302
				],
				[
					-1.8257649739583712,
					0
				],
				[
					0,
					0
				],
				[
					-1.8257649739583712,
					0
				],
				[
					-3.65142822265625,
					-1.825764973958485
				],
				[
					-7.302958170572879,
					-1.825764973958485
				],
				[
					-10.954488118489621,
					0
				],
				[
					-12.7801513671875,
					1.8257649739580302
				],
				[
					-14.605916341145871,
					5.47719319661428
				],
				[
					-14.605916341145871,
					7.302958170572765
				],
				[
					-12.7801513671875,
					7.302958170572765
				],
				[
					-9.12872314453125,
					9.12872314453125
				],
				[
					-7.302958170572879,
					7.302958170572765
				],
				[
					-5.477193196614621,
					5.47719319661428
				],
				[
					-3.65142822265625,
					1.8257649739580302
				],
				[
					-5.477193196614621,
					-1.825764973958485
				],
				[
					-5.477193196614621,
					-3.65142822265625
				],
				[
					-7.302958170572879,
					-1.825764973958485
				],
				[
					-9.12872314453125,
					-1.825764973958485
				],
				[
					-12.7801513671875,
					1.8257649739580302
				],
				[
					-10.954488118489621,
					1.8257649739580302
				],
				[
					-9.12872314453125,
					3.651529947916515
				],
				[
					-9.12872314453125,
					3.651529947916515
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "freedraw",
			"version": 144,
			"versionNonce": 531622610,
			"isDeleted": false,
			"id": "G7Ev-LcvTeM9upRwdF9fz",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -506.4878332384483,
			"y": 2958.884844585458,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.605916341145871,
			"height": 14.605916341145985,
			"seed": 1619827730,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108769931,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.8257649739583712,
					-1.8257649739580302
				],
				[
					-3.6515299479167425,
					0
				],
				[
					-5.477294921875,
					1.8256632486982198
				],
				[
					-7.3029581705729925,
					5.477193196614735
				],
				[
					-7.3029581705729925,
					7.30295817057322
				],
				[
					-5.477294921875,
					9.128621419270985
				],
				[
					-3.6515299479167425,
					9.128621419270985
				],
				[
					0,
					7.30295817057322
				],
				[
					3.65142822265625,
					0
				],
				[
					3.65142822265625,
					-1.8257649739580302
				],
				[
					3.65142822265625,
					-3.651529947916515
				],
				[
					3.65142822265625,
					-5.477294921875
				],
				[
					0,
					-3.651529947916515
				],
				[
					0,
					-1.8257649739580302
				],
				[
					-1.8257649739583712,
					0
				],
				[
					-1.8257649739583712,
					3.65142822265625
				],
				[
					0,
					7.30295817057322
				],
				[
					0,
					9.128621419270985
				],
				[
					1.8256632486978788,
					9.128621419270985
				],
				[
					3.65142822265625,
					7.30295817057322
				],
				[
					5.4771931966145075,
					3.65142822265625
				],
				[
					7.302958170572879,
					0
				],
				[
					5.4771931966145075,
					0
				],
				[
					3.65142822265625,
					1.8256632486982198
				],
				[
					3.65142822265625,
					3.65142822265625
				],
				[
					3.65142822265625,
					3.65142822265625
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "arrow",
			"version": 137,
			"versionNonce": 1464631767,
			"isDeleted": false,
			"id": "xgun-Ec89tPQtFo2W1ERX",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -474.1461613401965,
			"y": 2542.8763839502276,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 104.06764097487371,
			"height": 3.651542575712938,
			"seed": 1573776658,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235982,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "wFgn47aCC5Hd94lIIsjfF",
				"gap": 19.85721431934231,
				"focus": -0.21217492436145344
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					104.06764097487371,
					3.651542575712938
				]
			]
		},
		{
			"type": "arrow",
			"version": 216,
			"versionNonce": 620062359,
			"isDeleted": false,
			"id": "woM6rSa31u_wbqlvFD2gq",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -480.14485635042706,
			"y": 2744.751413014588,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 98.58999039928642,
			"height": 1.8257650523655684,
			"seed": 894641806,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320235998,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "ftZ2JVUNQRg4KE7yJReje",
				"gap": 18.610784357648626,
				"focus": -0.0443979025211781
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					98.58999039928642,
					1.8257650523655684
				]
			]
		},
		{
			"type": "arrow",
			"version": 274,
			"versionNonce": 545709943,
			"isDeleted": false,
			"id": "usLZ50Py8IdjLuYxZbIBe",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -497.359110093917,
			"y": 2966.187802756031,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 118.673307784793,
			"height": 3.651533343542269,
			"seed": 601611858,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236009,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "vKZ7_uL9nnMYupnGSB0is",
				"gap": 22.147487401109423,
				"focus": 0.1354090828796545
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					118.673307784793,
					-3.651533343542269
				]
			]
		},
		{
			"type": "text",
			"version": 746,
			"versionNonce": 1734537682,
			"isDeleted": false,
			"id": "i04MLck3",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 577.1611535779584,
			"y": 2723.565093027609,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1152.5970458984375,
			"height": 105,
			"seed": 535605198,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108769931,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "Mkae the pointer that connects current to next point to NULL\nMkke the pointer that connects current node and previous node point to next node\nfree the current node to prevent momory leak.",
			"rawText": "Mkae the pointer that connects current to next point to NULL\nMkke the pointer that connects current node and previous node point to next node\nfree the current node to prevent momory leak.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Mkae the pointer that connects current to next point to NULL\nMkke the pointer that connects current node and previous node point to next node\nfree the current node to prevent momory leak.",
			"lineHeight": 1.25,
			"baseline": 94
		},
		{
			"type": "text",
			"version": 164,
			"versionNonce": 157636335,
			"isDeleted": false,
			"id": "8Gtf6UHK",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -778.6278725915923,
			"y": 3198.0033813983764,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 219.2277069091797,
			"height": 188.36233956473237,
			"seed": 460607890,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708165973275,
			"link": null,
			"locked": false,
			"fontSize": 150.6898716517859,
			"fontFamily": 1,
			"text": "3. ",
			"rawText": "3. ",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "3. ",
			"lineHeight": 1.25,
			"baseline": 133
		},
		{
			"type": "text",
			"version": 34,
			"versionNonce": 2044396882,
			"isDeleted": false,
			"id": "DrGR9hUm",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -544.3264620981956,
			"y": 3249.7678343780553,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 434.1138000488281,
			"height": 35,
			"seed": 896214094,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708108798677,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "Insert a node at given position",
			"rawText": "Insert a node at given position",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Insert a node at given position",
			"lineHeight": 1.25,
			"baseline": 24
		},
		{
			"type": "ellipse",
			"version": 815,
			"versionNonce": 1042006095,
			"isDeleted": false,
			"id": "cVwFLOxRsEj_eSBx4IJQA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -387.70303545907154,
			"y": 3360.79652430601,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 761371375,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "6RulRAKy35C3b6xXzoNoD",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "VMnmFw38"
				},
				{
					"id": "eIIdKZZ-AjBMa4hjS_pn0",
					"type": "arrow"
				}
			],
			"updated": 1708165982129,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1159,
			"versionNonce": 879190272,
			"isDeleted": false,
			"id": "VMnmFw38",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -341.86419614315355,
			"y": 3385.1110033190635,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 10.03125,
			"height": 46.29742959086417,
			"seed": 728655119,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755806,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "cVwFLOxRsEj_eSBx4IJQA",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 855,
			"versionNonce": 512667375,
			"isDeleted": false,
			"id": "gNqNyN7T0BQoIfQ-Q5ZfI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -168.12119762441012,
			"y": 3357.891818895687,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 2107435823,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "6RulRAKy35C3b6xXzoNoD",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "vZHqes5i"
				},
				{
					"id": "Mow0BAFSv67EoluH1t8Ax",
					"type": "arrow"
				}
			],
			"updated": 1708165982129,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1156,
			"versionNonce": 27959552,
			"isDeleted": false,
			"id": "vZHqes5i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -130.44431509560152,
			"y": 3382.2062979087405,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 26.35516357421875,
			"height": 46.29742959086417,
			"seed": 810921295,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755809,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "gNqNyN7T0BQoIfQ-Q5ZfI",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 789,
			"versionNonce": 1563455407,
			"isDeleted": false,
			"id": "aKhxgvA9-2XbXGX88Lp8s",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 72.89413392185634,
			"y": 3354.1538106141124,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 787557231,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "Mow0BAFSv67EoluH1t8Ax",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "pg1NZ8JV"
				}
			],
			"updated": 1708165982129,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1103,
			"versionNonce": 449978624,
			"isDeleted": false,
			"id": "pg1NZ8JV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 111.90358175828213,
			"y": 3378.468289627166,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 23.690032958984375,
			"height": 46.29742959086417,
			"seed": 1706550671,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755824,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "aKhxgvA9-2XbXGX88Lp8s",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 2517,
			"versionNonce": 367155159,
			"isDeleted": false,
			"id": "6RulRAKy35C3b6xXzoNoD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -284.4355387414545,
			"y": 3409.729916726946,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 109.1163401310443,
			"height": 3.073016976492454,
			"seed": 602037167,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236018,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "cVwFLOxRsEj_eSBx4IJQA",
				"gap": 1.8518872398505053,
				"focus": 0.057449820613578485
			},
			"endBinding": {
				"elementId": "gNqNyN7T0BQoIfQ-Q5ZfI",
				"gap": 7.209463055036409,
				"focus": 0.011306736264531348
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					109.1163401310443,
					-3.073016976492454
				]
			]
		},
		{
			"type": "arrow",
			"version": 2442,
			"versionNonce": 1691890775,
			"isDeleted": false,
			"id": "Mow0BAFSv67EoluH1t8Ax",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -54.42714122636224,
			"y": 3409.3249242650436,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 116.31399270391918,
			"height": 5.206212142711593,
			"seed": 1033440719,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236020,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "gNqNyN7T0BQoIfQ-Q5ZfI",
				"gap": 12.385198197564414,
				"focus": 0.13783843885783287
			},
			"endBinding": {
				"elementId": "aKhxgvA9-2XbXGX88Lp8s",
				"gap": 11.054326061350103,
				"focus": 0.009872143565083627
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					116.31399270391918,
					-5.206212142711593
				]
			]
		},
		{
			"type": "freedraw",
			"version": 285,
			"versionNonce": 2130628207,
			"isDeleted": false,
			"id": "K6lo0VKbYERlFTRJSkH_g",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -537.5192834796476,
			"y": 3400.597457571885,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.605916341145871,
			"height": 14.605916341145985,
			"seed": 1844739055,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708165980235,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.8257649739583712,
					-1.8257649739580302
				],
				[
					-3.6515299479167425,
					0
				],
				[
					-5.477294921875,
					1.8256632486982198
				],
				[
					-7.3029581705729925,
					5.477193196614735
				],
				[
					-7.3029581705729925,
					7.30295817057322
				],
				[
					-5.477294921875,
					9.128621419270985
				],
				[
					-3.6515299479167425,
					9.128621419270985
				],
				[
					0,
					7.30295817057322
				],
				[
					3.65142822265625,
					0
				],
				[
					3.65142822265625,
					-1.8257649739580302
				],
				[
					3.65142822265625,
					-3.651529947916515
				],
				[
					3.65142822265625,
					-5.477294921875
				],
				[
					0,
					-3.651529947916515
				],
				[
					0,
					-1.8257649739580302
				],
				[
					-1.8257649739583712,
					0
				],
				[
					-1.8257649739583712,
					3.65142822265625
				],
				[
					0,
					7.30295817057322
				],
				[
					0,
					9.128621419270985
				],
				[
					1.8256632486978788,
					9.128621419270985
				],
				[
					3.65142822265625,
					7.30295817057322
				],
				[
					5.4771931966145075,
					3.65142822265625
				],
				[
					7.302958170572879,
					0
				],
				[
					5.4771931966145075,
					0
				],
				[
					3.65142822265625,
					1.8256632486982198
				],
				[
					3.65142822265625,
					3.65142822265625
				],
				[
					3.65142822265625,
					3.65142822265625
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "arrow",
			"version": 576,
			"versionNonce": 222728599,
			"isDeleted": false,
			"id": "eIIdKZZ-AjBMa4hjS_pn0",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -528.3905603351163,
			"y": 3407.9004157424583,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 118.67341814135852,
			"height": 3.651536739173025,
			"seed": 2029856271,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236016,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "cVwFLOxRsEj_eSBx4IJQA",
				"gap": 22.14737747812648,
				"focus": 0.13540908287966535
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					118.67341814135852,
					-3.651536739173025
				]
			]
		},
		{
			"type": "text",
			"version": 120,
			"versionNonce": 220901199,
			"isDeleted": false,
			"id": "FQ7tF8So",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 278.7522596650124,
			"y": 3382.4818264683704,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 859.8556518554688,
			"height": 35,
			"seed": 1432901519,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708165938331,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "We have to insert a node at position 2. i.e between 2 and 4.",
			"rawText": "We have to insert a node at position 2. i.e between 2 and 4.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "We have to insert a node at position 2. i.e between 2 and 4.",
			"lineHeight": 1.25,
			"baseline": 24
		},
		{
			"type": "ellipse",
			"version": 259,
			"versionNonce": 33284385,
			"isDeleted": false,
			"id": "S4llL_PFgNDYRBSJud6Mb",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -45.24774033498761,
			"y": 3469.148493135037,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 107.99999999999999,
			"height": 95.99999999999999,
			"seed": 1960649985,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"type": "text",
					"id": "FTIHKis0"
				}
			],
			"updated": 1708166129601,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 154,
			"versionNonce": 1400758528,
			"isDeleted": false,
			"id": "FTIHKis0",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -0.9597733361029981,
			"y": 3499.707367638083,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 19.05653363408363,
			"height": 35,
			"seed": 262093377,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755825,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "S4llL_PFgNDYRBSJud6Mb",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 24
		},
		{
			"type": "ellipse",
			"version": 879,
			"versionNonce": 1784988143,
			"isDeleted": false,
			"id": "0S53mBrX3PsClDYj2Uwfj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -401.036368792405,
			"y": 3683.627198899806,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 744267297,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "QALdb7z1KKbRP4lFj59D9",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "ARmUMymY"
				},
				{
					"id": "cPbiRd9Azzo6brw3YyDQ1",
					"type": "arrow"
				}
			],
			"updated": 1708166127508,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1223,
			"versionNonce": 598819072,
			"isDeleted": false,
			"id": "ARmUMymY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -355.19752947648703,
			"y": 3707.9416779128596,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 10.03125,
			"height": 46.29742959086417,
			"seed": 1514549761,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755828,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "0S53mBrX3PsClDYj2Uwfj",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 920,
			"versionNonce": 1235800687,
			"isDeleted": false,
			"id": "kIG7qs-olQ5GkZdxXQ54b",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -181.4545309577435,
			"y": 3680.722493489483,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 1636977121,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "QALdb7z1KKbRP4lFj59D9",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "v2TrBr1f"
				},
				{
					"id": "4lVF78L4uXFbW4AJXvyPt",
					"type": "arrow"
				},
				{
					"id": "BHoib8sTY2nBHUzfo9Qr-",
					"type": "arrow"
				}
			],
			"updated": 1708166127508,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1220,
			"versionNonce": 1570783488,
			"isDeleted": false,
			"id": "v2TrBr1f",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -143.7776484289349,
			"y": 3705.0369725025366,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 26.35516357421875,
			"height": 46.29742959086417,
			"seed": 2068866497,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755832,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "kIG7qs-olQ5GkZdxXQ54b",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 854,
			"versionNonce": 151809295,
			"isDeleted": false,
			"id": "l0KC0lMdxPX_kMxrp8hhi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 59.560800588522966,
			"y": 3676.9844852079086,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 312477089,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "4lVF78L4uXFbW4AJXvyPt",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "HjqTpi7p"
				},
				{
					"id": "gwVUbcS3I-OAfQhHdtyyK",
					"type": "arrow"
				}
			],
			"updated": 1708166127508,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1168,
			"versionNonce": 1656455424,
			"isDeleted": false,
			"id": "HjqTpi7p",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 98.57024842494876,
			"y": 3701.2989642209623,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 23.690032958984375,
			"height": 46.29742959086417,
			"seed": 45132161,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755834,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "l0KC0lMdxPX_kMxrp8hhi",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 2719,
			"versionNonce": 1910087159,
			"isDeleted": false,
			"id": "QALdb7z1KKbRP4lFj59D9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -297.7688767670761,
			"y": 3732.5605914528896,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 109.116354827767,
			"height": 3.0730173903930336,
			"seed": 348246369,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236024,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "0S53mBrX3PsClDYj2Uwfj",
				"gap": 1.8518825528365284,
				"focus": 0.05744982061357071
			},
			"endBinding": {
				"elementId": "kIG7qs-olQ5GkZdxXQ54b",
				"gap": 7.209453046885656,
				"focus": 0.011306736264559367
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					109.116354827767,
					-3.0730173903930336
				]
			]
		},
		{
			"type": "arrow",
			"version": 2644,
			"versionNonce": 445544631,
			"isDeleted": false,
			"id": "4lVF78L4uXFbW4AJXvyPt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -67.76062962546841,
			"y": 3732.1556057995804,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 116.3142026296574,
			"height": 5.206221538983755,
			"seed": 1042480449,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236027,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "kIG7qs-olQ5GkZdxXQ54b",
				"gap": 12.385043923096191,
				"focus": 0.13783843885781838
			},
			"endBinding": {
				"elementId": "l0KC0lMdxPX_kMxrp8hhi",
				"gap": 11.054271146717127,
				"focus": 0.009872143565087203
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					116.3142026296574,
					-5.206221538983755
				]
			]
		},
		{
			"type": "freedraw",
			"version": 349,
			"versionNonce": 521213391,
			"isDeleted": false,
			"id": "CXPhcR6VqhkUZj0cl1LMs",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -550.8526168129811,
			"y": 3723.4281321656813,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.605916341145871,
			"height": 14.605916341145985,
			"seed": 506703137,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708166127508,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.8257649739583712,
					-1.8257649739580302
				],
				[
					-3.6515299479167425,
					0
				],
				[
					-5.477294921875,
					1.8256632486982198
				],
				[
					-7.3029581705729925,
					5.477193196614735
				],
				[
					-7.3029581705729925,
					7.30295817057322
				],
				[
					-5.477294921875,
					9.128621419270985
				],
				[
					-3.6515299479167425,
					9.128621419270985
				],
				[
					0,
					7.30295817057322
				],
				[
					3.65142822265625,
					0
				],
				[
					3.65142822265625,
					-1.8257649739580302
				],
				[
					3.65142822265625,
					-3.651529947916515
				],
				[
					3.65142822265625,
					-5.477294921875
				],
				[
					0,
					-3.651529947916515
				],
				[
					0,
					-1.8257649739580302
				],
				[
					-1.8257649739583712,
					0
				],
				[
					-1.8257649739583712,
					3.65142822265625
				],
				[
					0,
					7.30295817057322
				],
				[
					0,
					9.128621419270985
				],
				[
					1.8256632486978788,
					9.128621419270985
				],
				[
					3.65142822265625,
					7.30295817057322
				],
				[
					5.4771931966145075,
					3.65142822265625
				],
				[
					7.302958170572879,
					0
				],
				[
					5.4771931966145075,
					0
				],
				[
					3.65142822265625,
					1.8256632486982198
				],
				[
					3.65142822265625,
					3.65142822265625
				],
				[
					3.65142822265625,
					3.65142822265625
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "arrow",
			"version": 709,
			"versionNonce": 664985527,
			"isDeleted": false,
			"id": "cPbiRd9Azzo6brw3YyDQ1",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -541.7238936684498,
			"y": 3730.7310903362545,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 118.67363885496343,
			"height": 3.65154353044818,
			"seed": 1013145857,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236022,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "0S53mBrX3PsClDYj2Uwfj",
				"gap": 22.147157631693418,
				"focus": 0.1354090828796708
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					118.67363885496343,
					-3.65154353044818
				]
			]
		},
		{
			"type": "ellipse",
			"version": 303,
			"versionNonce": 1376988687,
			"isDeleted": false,
			"id": "S1J26N_KCJC0oA4ufJ3VY",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -47.914407001654354,
			"y": 3850.6458343955005,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 107.99999999999999,
			"height": 95.99999999999999,
			"seed": 103913697,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"type": "text",
					"id": "6zukV7L1"
				},
				{
					"id": "BHoib8sTY2nBHUzfo9Qr-",
					"type": "arrow"
				},
				{
					"id": "gwVUbcS3I-OAfQhHdtyyK",
					"type": "arrow"
				}
			],
			"updated": 1708166127508,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 198,
			"versionNonce": 711377152,
			"isDeleted": false,
			"id": "6zukV7L1",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -3.6264400027697405,
			"y": 3881.2047088985464,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 19.05653363408363,
			"height": 35,
			"seed": 221107393,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755837,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "S1J26N_KCJC0oA4ufJ3VY",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 24
		},
		{
			"type": "arrow",
			"version": 134,
			"versionNonce": 1937564983,
			"isDeleted": false,
			"id": "BHoib8sTY2nBHUzfo9Qr-",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -102.58321849788977,
			"y": 3774.4790216912415,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 68.99777814352431,
			"height": 90.227863726147,
			"seed": 1147416673,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236031,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "kIG7qs-olQ5GkZdxXQ54b",
				"gap": 5.552093443090264,
				"focus": 0.11343505189815072
			},
			"endBinding": {
				"elementId": "S1J26N_KCJC0oA4ufJ3VY",
				"gap": 1,
				"focus": -0.21009119845101998
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					68.99777814352431,
					90.227863726147
				]
			]
		},
		{
			"type": "arrow",
			"version": 116,
			"versionNonce": 1880114039,
			"isDeleted": false,
			"id": "gwVUbcS3I-OAfQhHdtyyK",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 46.74404773887865,
			"y": 3859.8297872951284,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 42.67679338731291,
			"height": 76.01803822115107,
			"seed": 1373708943,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236032,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "S1J26N_KCJC0oA4ufJ3VY",
				"gap": 5.31284532820807,
				"focus": 0.3126245377208746
			},
			"endBinding": {
				"elementId": "l0KC0lMdxPX_kMxrp8hhi",
				"gap": 14.73392734852149,
				"focus": -0.21541450624733025
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					42.67679338731291,
					-76.01803822115107
				]
			]
		},
		{
			"type": "line",
			"version": 49,
			"versionNonce": 1314068175,
			"isDeleted": false,
			"id": "3kGQeG0LDiAvmPMPPXaeI",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -33.24774033498784,
			"y": 3678.4818264683695,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 33.33333333333337,
			"height": 88,
			"seed": 270281153,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708166127508,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					33.33333333333337,
					88
				]
			]
		},
		{
			"type": "text",
			"version": 123,
			"versionNonce": 2119446959,
			"isDeleted": false,
			"id": "L3P6Xp1s",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 282.75225966501216,
			"y": 3793.148493135036,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 821.7755737304688,
			"height": 70,
			"seed": 689126433,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708166068262,
			"link": null,
			"locked": false,
			"fontSize": 28,
			"fontFamily": 1,
			"text": "We say the pointer of 2 points to 2 and 3 points to two \nthus inserting 3 in the list.",
			"rawText": "We say the pointer of 2 points to 2 and 3 points to two \nthus inserting 3 in the list.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "We say the pointer of 2 points to 2 and 3 points to two \nthus inserting 3 in the list.",
			"lineHeight": 1.25,
			"baseline": 59
		},
		{
			"type": "ellipse",
			"version": 597,
			"versionNonce": 1746777736,
			"isDeleted": false,
			"id": "aDdewIOy8G8q-dwWTxLvr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -236.320553703511,
			"y": 4030.9237207544948,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 891282049,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "Jiar8T5GAbsFY7Bo40vY7",
					"type": "arrow"
				},
				{
					"id": "YQi9HhRfNbie0MRCeRNJX",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "M5WJ9TSy"
				}
			],
			"updated": 1708167525185,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 902,
			"versionNonce": 144834816,
			"isDeleted": false,
			"id": "M5WJ9TSy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -198.6436711747024,
			"y": 4055.2381997675484,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 26.35516357421875,
			"height": 46.29742959086417,
			"seed": 115468897,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755840,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "aDdewIOy8G8q-dwWTxLvr",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 599,
			"versionNonce": 1752031112,
			"isDeleted": false,
			"id": "KLOeSicZ8e0rjn1QjalAb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -1.4149012068411366,
			"y": 4029.8631524394277,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 114816577,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "YQi9HhRfNbie0MRCeRNJX",
					"type": "arrow"
				},
				{
					"id": "Per6K92cgRs23OqvZTDjW",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "4dJmoGq3"
				}
			],
			"updated": 1708167525185,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 902,
			"versionNonce": 1366114560,
			"isDeleted": false,
			"id": "4dJmoGq3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 36.83572704950653,
			"y": 4054.1776314524814,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 25.207672119140625,
			"height": 46.29742959086417,
			"seed": 1474397729,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755842,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "KLOeSicZ8e0rjn1QjalAb",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "ellipse",
			"version": 585,
			"versionNonce": 892741768,
			"isDeleted": false,
			"id": "ozU3eRTqQEfZpIywmsyGg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 240.21540772556796,
			"y": 4025.3599474989614,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 351148545,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "Per6K92cgRs23OqvZTDjW",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "pYuC8dWV"
				}
			],
			"updated": 1708167525186,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 901,
			"versionNonce": 608485632,
			"isDeleted": false,
			"id": "pYuC8dWV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 279.22485556199376,
			"y": 4049.674426512015,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 23.690032958984375,
			"height": 46.29742959086417,
			"seed": 1325216225,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755844,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ozU3eRTqQEfZpIywmsyGg",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "arrow",
			"version": 1700,
			"versionNonce": 595096087,
			"isDeleted": false,
			"id": "Jiar8T5GAbsFY7Bo40vY7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -339.2264204954911,
			"y": 4082.3812768967564,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 95.7078376900752,
			"height": 2.6935758947920476,
			"seed": 1260277185,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236042,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "iWStiO8eBKsvr3SlgmeBn",
				"gap": 4.914435676734499,
				"focus": 0.14237791692296775
			},
			"endBinding": {
				"elementId": "aDdewIOy8G8q-dwWTxLvr",
				"gap": 7.209468069198138,
				"focus": 0.011306736264534848
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					95.7078376900752,
					-2.6935758947920476
				]
			]
		},
		{
			"type": "arrow",
			"version": 1644,
			"versionNonce": 267058743,
			"isDeleted": false,
			"id": "YQi9HhRfNbie0MRCeRNJX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -127.87039950434713,
			"y": 4084.3417675307637,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 121.71991182245853,
			"height": 6.086018197447174,
			"seed": 7400865,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236036,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "aDdewIOy8G8q-dwWTxLvr",
				"gap": 7.334960416334283,
				"focus": 0.1807979388369669
			},
			"endBinding": {
				"elementId": "KLOeSicZ8e0rjn1QjalAb",
				"gap": 4.740808468384408,
				"focus": 0.04301011925176912
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					121.71991182245853,
					-6.086018197447174
				]
			]
		},
		{
			"type": "arrow",
			"version": 1631,
			"versionNonce": 27962039,
			"isDeleted": false,
			"id": "Per6K92cgRs23OqvZTDjW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 101.85101939596787,
			"y": 4076.2194626374926,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 127.32216622239936,
			"height": 2.021011788486703,
			"seed": 1445237121,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236038,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "KLOeSicZ8e0rjn1QjalAb",
				"gap": 1.8518843838390708,
				"focus": -0.01012758313972511
			},
			"endBinding": {
				"elementId": "ozU3eRTqQEfZpIywmsyGg",
				"gap": 11.054380984057104,
				"focus": -0.0038773248132391216
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					127.32216622239936,
					-2.021011788486703
				]
			]
		},
		{
			"type": "freedraw",
			"version": 473,
			"versionNonce": 306430127,
			"isDeleted": false,
			"id": "pZ04MF1VEO3qBMYMFdDlI",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -570.6662205320565,
			"y": 4080.585411126273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.477294921875,
			"height": 5.4772440592448675,
			"seed": 561559905,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708166133762,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.825739542643305
				],
				[
					0,
					0
				],
				[
					-3.6515299479166288,
					0
				],
				[
					-5.477294921875,
					0
				],
				[
					-5.477294921875,
					1.825739542643305
				],
				[
					-5.477294921875,
					3.6515045166015625
				],
				[
					-1.8257649739583712,
					3.6515045166015625
				],
				[
					-1.8257649739583712,
					1.825739542643305
				],
				[
					0,
					1.825739542643305
				],
				[
					-1.8257649739583712,
					1.825739542643305
				],
				[
					-1.8257649739583712,
					3.6515045166015625
				],
				[
					-3.6515299479166288,
					3.6515045166015625
				],
				[
					-1.8257649739583712,
					3.6515045166015625
				],
				[
					0,
					3.6515045166015625
				],
				[
					0,
					3.6515045166015625
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "arrow",
			"version": 727,
			"versionNonce": 1385315287,
			"isDeleted": false,
			"id": "0BzHVQrqBtj0Ap3kH2YCH",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -559.5072239500254,
			"y": 4082.9035823095405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 106.88360585780316,
			"height": 4.801613508705941,
			"seed": 1673323841,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1708320236039,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "iWStiO8eBKsvr3SlgmeBn",
				"gap": 7.334952118920846,
				"focus": 0.0863658336118372
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					56.92615028170445,
					-0.42175584117012477
				],
				[
					106.88360585780316,
					-4.801613508705941
				]
			]
		},
		{
			"type": "ellipse",
			"version": 1118,
			"versionNonce": 1755566984,
			"isDeleted": false,
			"id": "iWStiO8eBKsvr3SlgmeBn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -445.29738719751515,
			"y": 4029.475167460062,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 101.43262705838869,
			"height": 95.34665134995194,
			"seed": 577004385,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"type": "text",
					"id": "24yHGmjw"
				},
				{
					"id": "0BzHVQrqBtj0Ap3kH2YCH",
					"type": "arrow"
				},
				{
					"id": "Jiar8T5GAbsFY7Bo40vY7",
					"type": "arrow"
				}
			],
			"updated": 1708167525186,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1459,
			"versionNonce": 1009524992,
			"isDeleted": false,
			"id": "24yHGmjw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -399.45854788159716,
			"y": 4053.7896464731157,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 10.03125,
			"height": 46.29742959086417,
			"seed": 1570983745,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708222755847,
			"link": null,
			"locked": false,
			"fontSize": 37.037943672691334,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "iWStiO8eBKsvr3SlgmeBn",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 351,
			"versionNonce": 1437518713,
			"isDeleted": false,
			"id": "lF16W7ml",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2227.334412985325,
			"y": 1212.92429066108,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1432.1875,
			"height": 1418.999999999998,
			"seed": 1475675073,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708320248381,
			"link": null,
			"locked": false,
			"fontSize": 66.7764705882352,
			"fontFamily": 1,
			"text": "Node *current = head;\n    Node *prev = head;\n    while (current != NULL) {\n        if (current->data == target) {\n            if (current == head) {\n                head = current->next;\n            } else {\n                prev->next = current->next;\n                free(current);\n                current = NULL;\n            }\n            return 1;\n        }\n        prev = current;\n        current = current->next;\n    }\n    return 0;",
			"rawText": "Node *current = head;\n    Node *prev = head;\n    while (current != NULL) {\n        if (current->data == target) {\n            if (current == head) {\n                head = current->next;\n            } else {\n                prev->next = current->next;\n                free(current);\n                current = NULL;\n            }\n            return 1;\n        }\n        prev = current;\n        current = current->next;\n    }\n    return 0;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Node *current = head;\n    Node *prev = head;\n    while (current != NULL) {\n        if (current->data == target) {\n            if (current == head) {\n                head = current->next;\n            } else {\n                prev->next = current->next;\n                free(current);\n                current = NULL;\n            }\n            return 1;\n        }\n        prev = current;\n        current = current->next;\n    }\n    return 0;",
			"lineHeight": 1.25,
			"baseline": 1394
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 510402287,
			"isDeleted": false,
			"id": "ojtMYLId",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1502.7522596650124,
			"y": 3100.440159801705,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1258.818115234375,
			"height": 1500.9999999999993,
			"seed": 1909321167,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1708167426301,
			"link": null,
			"locked": false,
			"fontSize": 44.47407407407405,
			"fontFamily": 1,
			"text": "Node *current = head;\n    Node *prev = NULL;\n    while (current != NULL && position > 0) {\n        prev = current;\n        current = current->next;\n        position--;\n    }\n\n    if (position > 0) {\n        printf(\"Requested position too far into the list\");\n        return NULL;\n    }\n\n    Node *new = malloc(sizeof(Node));\n    if (new == NULL)\n        return NULL;\n\n    new->data = data;\n    if (prev == NULL) {\n        new->next = head;\n        head = new;\n    } else {\n        new->next = current;\n        prev->next = new;\n    }\n\n    return new;",
			"rawText": "Node *current = head;\n    Node *prev = NULL;\n    while (current != NULL && position > 0) {\n        prev = current;\n        current = current->next;\n        position--;\n    }\n\n    if (position > 0) {\n        printf(\"Requested position too far into the list\");\n        return NULL;\n    }\n\n    Node *new = malloc(sizeof(Node));\n    if (new == NULL)\n        return NULL;\n\n    new->data = data;\n    if (prev == NULL) {\n        new->next = head;\n        head = new;\n    } else {\n        new->next = current;\n        prev->next = new;\n    }\n\n    return new;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Node *current = head;\n    Node *prev = NULL;\n    while (current != NULL && position > 0) {\n        prev = current;\n        current = current->next;\n        position--;\n    }\n\n    if (position > 0) {\n        printf(\"Requested position too far into the list\");\n        return NULL;\n    }\n\n    Node *new = malloc(sizeof(Node));\n    if (new == NULL)\n        return NULL;\n\n    new->data = data;\n    if (prev == NULL) {\n        new->next = head;\n        head = new;\n    } else {\n        new->next = current;\n        prev->next = new;\n    }\n\n    return new;",
			"lineHeight": 1.25,
			"baseline": 1484
		}
	],
	"appState": {
		"theme": "dark",
		"viewBackgroundColor": "#ffffff",
		"currentItemStrokeColor": "#1e1e1e",
		"currentItemBackgroundColor": "transparent",
		"currentItemFillStyle": "solid",
		"currentItemStrokeWidth": 4,
		"currentItemStrokeStyle": "solid",
		"currentItemRoughness": 1,
		"currentItemOpacity": 100,
		"currentItemFontFamily": 1,
		"currentItemFontSize": 28,
		"currentItemTextAlign": "left",
		"currentItemStartArrowhead": null,
		"currentItemEndArrowhead": "arrow",
		"scrollX": 464.1950611822731,
		"scrollY": 2567.055547792575,
		"zoom": {
			"value": 0.1
		},
		"currentItemRoundness": "round",
		"gridSize": null,
		"gridColor": {
			"Bold": "#C9C9C9FF",
			"Regular": "#EDEDEDFF"
		},
		"currentStrokeOptions": null,
		"previousGridSize": null,
		"frameRendering": {
			"enabled": true,
			"clip": true,
			"name": true,
			"outline": true
		}
	},
	"files": {}
}
```
%%