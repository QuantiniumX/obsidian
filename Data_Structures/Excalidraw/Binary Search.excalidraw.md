---

excalidraw-plugin: parsed
tags: [excalidraw]

---
==⚠  Switch to EXCALIDRAW VIEW in the MORE OPTIONS menu of this document. ⚠==


# Text Elements
Take mid of the array by (low + high) / 2 ^oRV3p78N

arr[6] = {1, 2, 3, 4, 5, 6} ^9ixc3jzv

target = 1 ^shc4S6VE

{1, 2, 3, 4, 5, 6} is the arr[mid] == target. yes(return mid) no move on. ^VIarAME8

since the arr[mid] is not equal to target so we see if the target is greater
or smaller than arr[mid].
1 i.e. target is smaller the arr[2] = 3. So the array after 3 is useless as
we know target cant be found in it. the array is sorted. ^k8fj46r4

new high = mid - 1, low is unchanged
{1, 2}
so the new mid now is (1 + 0) / 2 = 0.5 i.e. 0 in int form.

now arr[0] target we return mid; ^dwV3GkTY

since we have to search it continuously we have to loop it. so the condition
can be while(low <= high) as if it the element is not found low == high and it
exit the loop ^g1SRqgUq

since we are dividing the array in half so the time complexity is of O(log N).
best case can be O(1) i.e. if arr[mid] == target in the first iteration. ^xTZ0vTup

{1, 2, 3, 4, 5, 6, 7} ^AYMrOKIv

mid ^GvwVuSOO

target is smaller ^6wRiJOo6

{1, 2} ^xORdNrlb

new array ^LKIA2f3W

mid is the target.  ^K9vfVQ1G

A better way to calculate mid can be low + (high - low) / 2 as it can prevent overflow if 
low and high become too big if the array is too big. ^PPaq5tTE

Binary Search ^N8Z0SjTo

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
			"version": 243,
			"versionNonce": 60447076,
			"isDeleted": false,
			"id": "oRV3p78N",
			"fillStyle": "solid",
			"strokeWidth": 0.5,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -559.448275862069,
			"y": -381.09482758620743,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#a5d8ff",
			"width": 425,
			"height": 25,
			"seed": 272306417,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Take mid of the array by (low + high) / 2",
			"rawText": "Take mid of the array by (low + high) / 2",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Take mid of the array by (low + high) / 2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 200,
			"versionNonce": 1558011612,
			"isDeleted": false,
			"id": "9ixc3jzv",
			"fillStyle": "solid",
			"strokeWidth": 0.5,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -553.9310344827585,
			"y": -413.5086206896558,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#a5d8ff",
			"width": 271,
			"height": 25,
			"seed": 45265425,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "arr[6] = {1, 2, 3, 4, 5, 6}",
			"rawText": "arr[6] = {1, 2, 3, 4, 5, 6}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "arr[6] = {1, 2, 3, 4, 5, 6}",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 255,
			"versionNonce": 1901169892,
			"isDeleted": false,
			"id": "shc4S6VE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -246.34482758620697,
			"y": -414.1982758620696,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#a5d8ff",
			"width": 104,
			"height": 25,
			"seed": 1405615999,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "target = 1",
			"rawText": "target = 1",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "target = 1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 239,
			"versionNonce": 805643100,
			"isDeleted": false,
			"id": "VIarAME8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -560.8275862068965,
			"y": -334.19827586206964,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 735,
			"height": 25,
			"seed": 1933492671,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "dPj-CcveLSGDUPVzvMPfo",
					"type": "arrow"
				}
			],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "{1, 2, 3, 4, 5, 6} is the arr[mid] == target. yes(return mid) no move on.",
			"rawText": "{1, 2, 3, 4, 5, 6} is the arr[mid] == target. yes(return mid) no move on.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "{1, 2, 3, 4, 5, 6} is the arr[mid] == target. yes(return mid) no move on.",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 468,
			"versionNonce": 416698468,
			"isDeleted": false,
			"id": "k8fj46r4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -564.2758620689655,
			"y": -304.5431034482765,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 781,
			"height": 100,
			"seed": 390927583,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "since the arr[mid] is not equal to target so we see if the target is greater\nor smaller than arr[mid].\n1 i.e. target is smaller the arr[2] = 3. So the array after 3 is useless as\nwe know target cant be found in it. the array is sorted.",
			"rawText": "since the arr[mid] is not equal to target so we see if the target is greater\nor smaller than arr[mid].\n1 i.e. target is smaller the arr[2] = 3. So the array after 3 is useless as\nwe know target cant be found in it. the array is sorted.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "since the arr[mid] is not equal to target so we see if the target is greater\nor smaller than arr[mid].\n1 i.e. target is smaller the arr[2] = 3. So the array after 3 is useless as\nwe know target cant be found in it. the array is sorted.",
			"lineHeight": 1.25,
			"baseline": 93
		},
		{
			"type": "text",
			"version": 367,
			"versionNonce": 1119901660,
			"isDeleted": false,
			"id": "dwV3GkTY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -560.8275862068965,
			"y": -179.0258620689662,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 583,
			"height": 125,
			"seed": 1148130591,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "dPj-CcveLSGDUPVzvMPfo",
					"type": "arrow"
				}
			],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "new high = mid - 1, low is unchanged\n{1, 2}\nso the new mid now is (1 + 0) / 2 = 0.5 i.e. 0 in int form.\n\nnow arr[0] target we return mid;",
			"rawText": "new high = mid - 1, low is unchanged\n{1, 2}\nso the new mid now is (1 + 0) / 2 = 0.5 i.e. 0 in int form.\n\nnow arr[0] target we return mid;",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "new high = mid - 1, low is unchanged\n{1, 2}\nso the new mid now is (1 + 0) / 2 = 0.5 i.e. 0 in int form.\n\nnow arr[0] target we return mid;",
			"lineHeight": 1.25,
			"baseline": 118
		},
		{
			"type": "arrow",
			"version": 599,
			"versionNonce": 167158756,
			"isDeleted": false,
			"id": "dPj-CcveLSGDUPVzvMPfo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -572.5517241379309,
			"y": -59.62816795852743,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 26.206896551724185,
			"height": 260.92013339628136,
			"seed": 349739455,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "dwV3GkTY",
				"focus": -1.035305313374136,
				"gap": 11.72413793103442
			},
			"endBinding": {
				"elementId": "VIarAME8",
				"focus": 1.0255641120648353,
				"gap": 12.413793103448256
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
					-26.206896551724185,
					-142.84596997250773
				],
				[
					-0.6896551724138362,
					-260.92013339628136
				]
			]
		},
		{
			"type": "text",
			"version": 435,
			"versionNonce": 824245340,
			"isDeleted": false,
			"id": "g1SRqgUq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -564.9655172413793,
			"y": -33.50862068965586,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 780,
			"height": 75,
			"seed": 414979121,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "since we have to search it continuously we have to loop it. so the condition\ncan be while(low <= high) as if it the element is not found low == high and it\nexit the loop",
			"rawText": "since we have to search it continuously we have to loop it. so the condition\ncan be while(low <= high) as if it the element is not found low == high and it\nexit the loop",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "since we have to search it continuously we have to loop it. so the condition\ncan be while(low <= high) as if it the element is not found low == high and it\nexit the loop",
			"lineHeight": 1.25,
			"baseline": 68
		},
		{
			"type": "text",
			"version": 252,
			"versionNonce": 717260644,
			"isDeleted": false,
			"id": "xTZ0vTup",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -570.4827586206897,
			"y": 68.56034482758542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 766,
			"height": 50,
			"seed": 1483682527,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "since we are dividing the array in half so the time complexity is of O(log N).\nbest case can be O(1) i.e. if arr[mid] == target in the first iteration.",
			"rawText": "since we are dividing the array in half so the time complexity is of O(log N).\nbest case can be O(1) i.e. if arr[mid] == target in the first iteration.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "since we are dividing the array in half so the time complexity is of O(log N).\nbest case can be O(1) i.e. if arr[mid] == target in the first iteration.",
			"lineHeight": 1.25,
			"baseline": 43
		},
		{
			"type": "text",
			"version": 86,
			"versionNonce": 1157173468,
			"isDeleted": false,
			"id": "AYMrOKIv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -569.7931034482752,
			"y": 227.18103448275707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 201,
			"height": 25,
			"seed": 1325742111,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "efyLOL8U1wfyudsZiayEv",
					"type": "arrow"
				}
			],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "{1, 2, 3, 4, 5, 6, 7}",
			"rawText": "{1, 2, 3, 4, 5, 6, 7}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "{1, 2, 3, 4, 5, 6, 7}",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 289,
			"versionNonce": 1870789348,
			"isDeleted": false,
			"id": "efyLOL8U1wfyudsZiayEv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -497.37931034482705,
			"y": 195.67076826865733,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.8868184662468366,
			"height": 25.993024834789395,
			"seed": 1040976767,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "GvwVuSOO",
				"focus": 1.6336054232270485,
				"gap": 10.344827586206918
			},
			"endBinding": {
				"elementId": "AYMrOKIv",
				"focus": -0.3084675905453997,
				"gap": 5.517241379310349
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
					-1.8868184662468366,
					25.993024834789395
				]
			]
		},
		{
			"type": "text",
			"version": 128,
			"versionNonce": 1037735260,
			"isDeleted": false,
			"id": "GvwVuSOO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -487.03448275862013,
			"y": 192.00862068965364,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30,
			"height": 25,
			"seed": 1781639025,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "efyLOL8U1wfyudsZiayEv",
					"type": "arrow"
				}
			],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "mid",
			"rawText": "mid",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "mid",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 286,
			"versionNonce": 315162212,
			"isDeleted": false,
			"id": "6wRiJOo6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -296.6896551724132,
			"y": 226.4913793103433,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 170,
			"height": 25,
			"seed": 1304527839,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "target is smaller",
			"rawText": "target is smaller",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "target is smaller",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 100,
			"versionNonce": 420973020,
			"isDeleted": false,
			"id": "xORdNrlb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -571.8620689655166,
			"y": 300.2844827586192,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 57,
			"height": 25,
			"seed": 177189073,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "xOYsXr9GTlsEK7ZItVhYi",
					"type": "arrow"
				}
			],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "{1, 2}",
			"rawText": "{1, 2}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "{1, 2}",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 90,
			"versionNonce": 1298371044,
			"isDeleted": false,
			"id": "LKIA2f3W",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -570.482758620689,
			"y": 264.4224137931019,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 97,
			"height": 25,
			"seed": 1451892561,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "new array",
			"rawText": "new array",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "new array",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 135,
			"versionNonce": 1505881692,
			"isDeleted": false,
			"id": "xOYsXr9GTlsEK7ZItVhYi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -558.0689655172408,
			"y": 349.2499999999984,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 23.448275862068954,
			"seed": 1276714193,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "xORdNrlb",
				"focus": 0.5160314579552345,
				"gap": 1
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
					0,
					-23.448275862068954
				]
			]
		},
		{
			"type": "text",
			"version": 115,
			"versionNonce": 241153380,
			"isDeleted": false,
			"id": "K9vfVQ1G",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -540.827586206896,
			"y": 327.87068965517085,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 188,
			"height": 25,
			"seed": 1647346015,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "mid is the target. ",
			"rawText": "mid is the target. ",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "mid is the target. ",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 246,
			"versionNonce": 1353433820,
			"isDeleted": false,
			"id": "PPaq5tTE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -585.6933567358537,
			"y": 413.46664167915924,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 921,
			"height": 50,
			"seed": 1688428273,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "A better way to calculate mid can be low + (high - low) / 2 as it can prevent overflow if \nlow and high become too big if the array is too big.",
			"rawText": "A better way to calculate mid can be low + (high - low) / 2 as it can prevent overflow if \nlow and high become too big if the array is too big.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "A better way to calculate mid can be low + (high - low) / 2 as it can prevent overflow if \nlow and high become too big if the array is too big.",
			"lineHeight": 1.25,
			"baseline": 43
		},
		{
			"type": "text",
			"version": 57,
			"versionNonce": 856385764,
			"isDeleted": false,
			"id": "N8Z0SjTo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -557.4890605910377,
			"y": -453.61581709145514,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 135,
			"height": 25,
			"seed": 1796304081,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Binary Search",
			"rawText": "Binary Search",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Binary Search",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "line",
			"version": 72,
			"versionNonce": 1684473692,
			"isDeleted": false,
			"id": "AmuU-lGIFNbf4dK6g02ly",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -561.4890605910377,
			"y": -421.61581709145514,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 144,
			"height": 1,
			"seed": 897336881,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707838202503,
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
					144,
					-1
				]
			]
		},
		{
			"id": "MdAwcj64",
			"type": "text",
			"x": 573.8267288826465,
			"y": -293.23248244299,
			"width": 10,
			"height": 25,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 447191388,
			"version": 38,
			"versionNonce": 851712092,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838202267,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": "",
			"lineHeight": 1.25
		},
		{
			"id": "Z9y4KvZzFy3H4tNS4GAkP",
			"type": "freedraw",
			"x": 435.93199204054133,
			"y": -250.07458770614792,
			"width": 64.21052631578948,
			"height": 61.05263157894734,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 200583524,
			"version": 49,
			"versionNonce": 1567435620,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838202267,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2.105263157894683,
					10.52631578947367
				],
				[
					5.263157894736764,
					18.94736842105263
				],
				[
					10.526315789473642,
					25.26315789473685
				],
				[
					14.736842105263122,
					30.52631578947367
				],
				[
					17.894736842105203,
					35.78947368421055
				],
				[
					20,
					38.94736842105263
				],
				[
					22.105263157894683,
					37.89473684210529
				],
				[
					22.105263157894683,
					32.63157894736841
				],
				[
					21.0526315789474,
					20.00000000000003
				],
				[
					20,
					6.315789473684248
				],
				[
					21.0526315789474,
					3.1578947368421098
				],
				[
					21.0526315789474,
					1.05263157894737
				],
				[
					22.105263157894683,
					1.05263157894737
				],
				[
					27.36842105263156,
					5.26315789473685
				],
				[
					34.73684210526312,
					13.684210526315809
				],
				[
					47.36842105263156,
					27.36842105263159
				],
				[
					52.63157894736844,
					33.68421052631581
				],
				[
					53.684210526315724,
					35.78947368421055
				],
				[
					54.73684210526312,
					35.78947368421055
				],
				[
					55.78947368421052,
					29.47368421052633
				],
				[
					58.9473684210526,
					13.684210526315809
				],
				[
					61.052631578947285,
					-5.263157894736821
				],
				[
					63.15789473684208,
					-16.84210526315789
				],
				[
					63.15789473684208,
					-21.05263157894737
				],
				[
					64.21052631578948,
					-22.10526315789471
				],
				[
					64.21052631578948,
					-22.10526315789471
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				64.21052631578948,
				-22.10526315789471
			]
		},
		{
			"id": "Xb9DvTaj395Xt38vIY8bh",
			"type": "freedraw",
			"x": 535.9319920405413,
			"y": -236.39037717983211,
			"width": 35.78947368421052,
			"height": 33.68421052631578,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 81062756,
			"version": 38,
			"versionNonce": 1540926684,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838202267,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2.105263157894683,
					-1.0526315789473983
				],
				[
					5.263157894736764,
					-3.157894736842138
				],
				[
					9.473684210526244,
					-7.368421052631561
				],
				[
					12.631578947368439,
					-11.578947368421069
				],
				[
					12.631578947368439,
					-17.89473684210526
				],
				[
					10.526315789473642,
					-20
				],
				[
					5.263157894736764,
					-20
				],
				[
					-1.0526315789473983,
					-16.84210526315789
				],
				[
					-8.42105263157896,
					-11.578947368421069
				],
				[
					-13.684210526315837,
					-2.10526315789474
				],
				[
					-14.736842105263236,
					2.10526315789474
				],
				[
					-10.526315789473756,
					8.42105263157896
				],
				[
					2.105263157894683,
					13.68421052631578
				],
				[
					15.78947368421052,
					12.631578947368439
				],
				[
					21.052631578947285,
					10.5263157894737
				],
				[
					21.052631578947285,
					10.5263157894737
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				21.052631578947285,
				10.5263157894737
			]
		},
		{
			"id": "Kn3U88TpK13QThyoZPDlJ",
			"type": "freedraw",
			"x": 600.1425183563308,
			"y": -295.3377456008848,
			"width": 49.47368421052636,
			"height": 50.5263157894737,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 835787364,
			"version": 40,
			"versionNonce": 1828331236,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838202267,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.1052631578947967,
					0
				],
				[
					-4.21052631578948,
					0
				],
				[
					-5.263157894736878,
					9.473684210526358
				],
				[
					-5.263157894736878,
					20
				],
				[
					-3.157894736842195,
					29.473684210526358
				],
				[
					0,
					40.00000000000003
				],
				[
					0,
					47.36842105263159
				],
				[
					0,
					49.47368421052633
				],
				[
					1.0526315789472847,
					50.5263157894737
				],
				[
					1.0526315789472847,
					48.42105263157896
				],
				[
					1.0526315789472847,
					41.0526315789474
				],
				[
					0,
					36.84210526315792
				],
				[
					1.0526315789472847,
					36.84210526315792
				],
				[
					4.21052631578948,
					38.94736842105266
				],
				[
					9.473684210526244,
					41.0526315789474
				],
				[
					16.842105263157805,
					43.15789473684211
				],
				[
					32.631578947368325,
					45.26315789473685
				],
				[
					44.21052631578948,
					43.15789473684211
				],
				[
					44.21052631578948,
					43.15789473684211
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				44.21052631578948,
				43.15789473684211
			]
		},
		{
			"id": "pE64iw1TCXNDKJf_uashZ",
			"type": "freedraw",
			"x": 661.1951499352781,
			"y": -271.1272192850953,
			"width": 21.052631578947285,
			"height": 18.94736842105263,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 247059428,
			"version": 35,
			"versionNonce": 241611100,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838202267,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-6.315789473684163,
					-1.0526315789473415
				],
				[
					-11.57894736842104,
					-1.0526315789473415
				],
				[
					-13.684210526315724,
					-1.0526315789473415
				],
				[
					-18.9473684210526,
					3.1578947368420813
				],
				[
					-21.052631578947285,
					6.3157894736842195
				],
				[
					-20,
					11.57894736842104
				],
				[
					-17.894736842105203,
					14.736842105263179
				],
				[
					-12.631578947368325,
					17.89473684210529
				],
				[
					-6.315789473684163,
					16.84210526315792
				],
				[
					-6.315789473684163,
					15.789473684210549
				],
				[
					-4.21052631578948,
					12.631578947368439
				],
				[
					-4.21052631578948,
					8.42105263157896
				],
				[
					-4.21052631578948,
					9.473684210526358
				],
				[
					-9.473684210526244,
					14.736842105263179
				],
				[
					-9.473684210526244,
					14.736842105263179
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				-9.473684210526244,
				14.736842105263179
			]
		},
		{
			"id": "6jFqd1C5oS6TqHekNcJXZ",
			"type": "freedraw",
			"x": 492.77409730369925,
			"y": -163.75879823246373,
			"width": 197.89473684210532,
			"height": 47.36842105263156,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 596668260,
			"version": 29,
			"versionNonce": 1973199460,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838202267,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-3.157894736842195,
					2.10526315789474
				],
				[
					3.1578947368420813,
					2.10526315789474
				],
				[
					20,
					-3.1578947368420813
				],
				[
					32.631578947368325,
					-7.368421052631561
				],
				[
					63.15789473684208,
					-18.9473684210526
				],
				[
					116.8421052631578,
					-31.57894736842104
				],
				[
					154.73684210526312,
					-37.89473684210526
				],
				[
					184.21052631578937,
					-43.15789473684208
				],
				[
					194.73684210526312,
					-45.26315789473682
				],
				[
					194.73684210526312,
					-45.26315789473682
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				194.73684210526312,
				-45.26315789473682
			]
		},
		{
			"id": "MrhL9eJgijAElIff683Nr",
			"type": "freedraw",
			"x": 465.4056762510676,
			"y": -105.86406139035847,
			"width": 148.42105263157896,
			"height": 135.78947368421046,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 934945380,
			"version": 114,
			"versionNonce": 1056222308,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838202503,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0526315789473983,
					-3.1578947368420813
				],
				[
					3.157894736842195,
					0
				],
				[
					6.315789473684276,
					13.684210526315837
				],
				[
					4.21052631578948,
					33.68421052631584
				],
				[
					2.1052631578947967,
					70.5263157894737
				],
				[
					3.157894736842195,
					92.63157894736844
				],
				[
					5.263157894736878,
					102.10526315789474
				],
				[
					7.368421052631675,
					103.15789473684214
				],
				[
					17.894736842105317,
					90.5263157894737
				],
				[
					31.57894736842104,
					69.47368421052636
				],
				[
					44.21052631578948,
					45.26315789473688
				],
				[
					54.736842105263236,
					23.157894736842138
				],
				[
					61.0526315789474,
					10.5263157894737
				],
				[
					65.26315789473688,
					3.157894736842138
				],
				[
					64.21052631578948,
					3.157894736842138
				],
				[
					64.21052631578948,
					9.473684210526358
				],
				[
					62.1052631578948,
					21.0526315789474
				],
				[
					60,
					32.63157894736844
				],
				[
					57.89473684210532,
					49.47368421052636
				],
				[
					56.84210526315792,
					63.15789473684214
				],
				[
					55.78947368421052,
					77.89473684210526
				],
				[
					58.947368421052715,
					97.89473684210526
				],
				[
					62.1052631578948,
					103.15789473684214
				],
				[
					64.21052631578948,
					104.21052631578948
				],
				[
					66.31578947368428,
					98.94736842105266
				],
				[
					69.47368421052636,
					88.42105263157896
				],
				[
					73.68421052631584,
					75.78947368421052
				],
				[
					74.73684210526324,
					68.42105263157896
				],
				[
					73.68421052631584,
					67.36842105263162
				],
				[
					70.52631578947376,
					68.42105263157896
				],
				[
					55.78947368421052,
					78.94736842105266
				],
				[
					48.42105263157896,
					94.73684210526318
				],
				[
					43.157894736842195,
					111.57894736842104
				],
				[
					42.1052631578948,
					124.21052631578954
				],
				[
					46.315789473684276,
					130.5263157894737
				],
				[
					52.63157894736844,
					128.42105263157902
				],
				[
					64.21052631578948,
					117.89473684210526
				],
				[
					69.47368421052636,
					105.26315789473688
				],
				[
					72.63157894736844,
					94.73684210526318
				],
				[
					72.63157894736844,
					95.78947368421052
				],
				[
					72.63157894736844,
					98.94736842105266
				],
				[
					69.47368421052636,
					111.57894736842104
				],
				[
					70.52631578947376,
					128.42105263157902
				],
				[
					73.68421052631584,
					132.63157894736838
				],
				[
					76.84210526315792,
					131.5789473684211
				],
				[
					82.1052631578948,
					125.26315789473682
				],
				[
					91.57894736842104,
					113.68421052631578
				],
				[
					103.1578947368422,
					98.94736842105266
				],
				[
					113.68421052631584,
					87.36842105263162
				],
				[
					114.73684210526324,
					87.36842105263162
				],
				[
					114.73684210526324,
					89.47368421052636
				],
				[
					113.68421052631584,
					96.84210526315792
				],
				[
					111.57894736842104,
					103.15789473684214
				],
				[
					110.52631578947376,
					108.42105263157896
				],
				[
					109.47368421052636,
					112.63157894736844
				],
				[
					109.47368421052636,
					115.78947368421052
				],
				[
					110.52631578947376,
					116.84210526315792
				],
				[
					111.57894736842104,
					117.89473684210526
				],
				[
					110.52631578947376,
					115.78947368421052
				],
				[
					109.47368421052636,
					106.31578947368422
				],
				[
					110.52631578947376,
					93.68421052631578
				],
				[
					115.78947368421052,
					68.42105263157896
				],
				[
					121.0526315789474,
					53.68421052631584
				],
				[
					125.26315789473688,
					43.15789473684214
				],
				[
					120,
					36.84210526315792
				],
				[
					118.94736842105272,
					35.78947368421052
				],
				[
					121.0526315789474,
					38.94736842105266
				],
				[
					121.0526315789474,
					42.10526315789474
				],
				[
					118.94736842105272,
					51.5789473684211
				],
				[
					120,
					55.78947368421052
				],
				[
					126.31578947368428,
					55.78947368421052
				],
				[
					132.63157894736844,
					50.5263157894737
				],
				[
					140,
					44.21052631578948
				],
				[
					144.21052631578948,
					41.0526315789474
				],
				[
					143.1578947368422,
					40
				],
				[
					141.0526315789474,
					40
				],
				[
					137.89473684210532,
					47.36842105263162
				],
				[
					130.52631578947376,
					60
				],
				[
					124.21052631578948,
					76.84210526315792
				],
				[
					122.1052631578948,
					102.10526315789474
				],
				[
					125.26315789473688,
					114.73684210526318
				],
				[
					131.57894736842104,
					123.15789473684214
				],
				[
					140,
					125.26315789473682
				],
				[
					146.31578947368428,
					124.21052631578954
				],
				[
					148.42105263157896,
					112.63157894736844
				],
				[
					146.31578947368428,
					102.10526315789474
				],
				[
					140,
					94.73684210526318
				],
				[
					133.68421052631584,
					90.5263157894737
				],
				[
					125.26315789473688,
					89.47368421052636
				],
				[
					123.1578947368422,
					90.5263157894737
				],
				[
					124.21052631578948,
					92.63157894736844
				],
				[
					130.52631578947376,
					88.42105263157896
				],
				[
					141.0526315789474,
					81.0526315789474
				],
				[
					148.42105263157896,
					73.68421052631578
				],
				[
					148.42105263157896,
					73.68421052631578
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				148.42105263157896,
				73.68421052631578
			]
		},
		{
			"id": "TIUODWKcLR_UW3n19Gfpj",
			"type": "freedraw",
			"x": 634.8793604615939,
			"y": -85.86406139035773,
			"width": 154.736842105263,
			"height": 101.0526315789474,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 929203684,
			"version": 90,
			"versionNonce": 1579333092,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838202267,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.1052631578947967,
					-1.0526315789473983
				],
				[
					-2.1052631578947967,
					0
				],
				[
					-1.0526315789473983,
					0
				],
				[
					1.0526315789472847,
					4.21052631578948
				],
				[
					-1.0526315789473983,
					24.21052631578948
				],
				[
					-5.263157894736878,
					43.15789473684208
				],
				[
					-10.526315789473756,
					63.15789473684208
				],
				[
					-14.736842105263236,
					81.0526315789474
				],
				[
					-18.9473684210526,
					89.47368421052636
				],
				[
					-18.9473684210526,
					90.52631578947364
				],
				[
					-17.894736842105317,
					90.52631578947364
				],
				[
					-15.78947368421052,
					87.36842105263156
				],
				[
					-9.473684210526358,
					74.73684210526312
				],
				[
					-2.1052631578947967,
					57.8947368421052
				],
				[
					3.1578947368420813,
					53.684210526315724
				],
				[
					6.315789473684163,
					52.63157894736844
				],
				[
					10.526315789473642,
					52.63157894736844
				],
				[
					18.9473684210526,
					60
				],
				[
					22.105263157894683,
					68.42105263157896
				],
				[
					23.15789473684208,
					77.8947368421052
				],
				[
					25.263157894736764,
					86.31578947368416
				],
				[
					28.42105263157896,
					94.73684210526312
				],
				[
					33.684210526315724,
					100
				],
				[
					41.052631578947285,
					98.9473684210526
				],
				[
					45.263157894736764,
					92.63157894736844
				],
				[
					46.31578947368416,
					82.10526315789468
				],
				[
					46.31578947368416,
					71.57894736842104
				],
				[
					46.31578947368416,
					70.52631578947364
				],
				[
					45.263157894736764,
					71.57894736842104
				],
				[
					44.21052631578948,
					73.68421052631572
				],
				[
					41.052631578947285,
					77.8947368421052
				],
				[
					40,
					83.15789473684208
				],
				[
					41.052631578947285,
					85.26315789473688
				],
				[
					43.15789473684208,
					86.31578947368416
				],
				[
					46.31578947368416,
					85.26315789473688
				],
				[
					48.42105263157896,
					75.78947368421052
				],
				[
					48.42105263157896,
					68.42105263157896
				],
				[
					46.31578947368416,
					66.31578947368416
				],
				[
					43.15789473684208,
					66.31578947368416
				],
				[
					37.8947368421052,
					70.52631578947364
				],
				[
					35.78947368421052,
					80
				],
				[
					38.9473684210526,
					84.21052631578948
				],
				[
					43.15789473684208,
					85.26315789473688
				],
				[
					49.473684210526244,
					84.21052631578948
				],
				[
					57.8947368421052,
					74.73684210526312
				],
				[
					61.052631578947285,
					69.47368421052636
				],
				[
					62.10526315789468,
					67.36842105263156
				],
				[
					62.10526315789468,
					68.42105263157896
				],
				[
					63.15789473684208,
					77.8947368421052
				],
				[
					67.36842105263156,
					86.31578947368416
				],
				[
					72.63157894736844,
					93.68421052631572
				],
				[
					77.8947368421052,
					97.8947368421052
				],
				[
					81.05263157894728,
					97.8947368421052
				],
				[
					88.42105263157896,
					87.36842105263156
				],
				[
					93.68421052631572,
					73.68421052631572
				],
				[
					97.8947368421052,
					54.73684210526312
				],
				[
					100,
					44.21052631578948
				],
				[
					101.05263157894728,
					44.21052631578948
				],
				[
					104.21052631578948,
					48.42105263157896
				],
				[
					108.42105263157896,
					57.8947368421052
				],
				[
					112.63157894736833,
					67.36842105263156
				],
				[
					117.8947368421052,
					75.78947368421052
				],
				[
					121.05263157894728,
					78.9473684210526
				],
				[
					122.1052631578948,
					77.8947368421052
				],
				[
					127.36842105263145,
					66.31578947368416
				],
				[
					130.52631578947376,
					54.73684210526312
				],
				[
					133.68421052631584,
					43.15789473684208
				],
				[
					134.73684210526312,
					36.84210526315792
				],
				[
					135.7894736842104,
					35.78947368421052
				],
				[
					134.73684210526312,
					37.8947368421052
				],
				[
					132.63157894736833,
					44.21052631578948
				],
				[
					132.63157894736833,
					44.21052631578948
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				132.63157894736833,
				44.21052631578948
			]
		},
		{
			"id": "PEBAMV32REY5sa_uKj-6f",
			"type": "freedraw",
			"x": 802.2477815142254,
			"y": 13.083307030694868,
			"width": 336.84210526315803,
			"height": 62.1052631578948,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 656808164,
			"version": 34,
			"versionNonce": 643077852,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838202039,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.052631578947512,
					0
				],
				[
					2.1052631578947967,
					2.1052631578947967
				],
				[
					3.1578947368423087,
					5.263157894736878
				],
				[
					-5.263157894736651,
					10.526315789473642
				],
				[
					-33.68421052631561,
					21.0526315789474
				],
				[
					-75.7894736842104,
					31.57894736842104
				],
				[
					-158.9473684210525,
					38.9473684210526
				],
				[
					-218.9473684210525,
					44.21052631578948
				],
				[
					-268.42105263157885,
					49.47368421052636
				],
				[
					-302.10526315789457,
					52.63157894736844
				],
				[
					-322.10526315789457,
					58.9473684210526
				],
				[
					-333.6842105263157,
					62.1052631578948
				],
				[
					-332.6315789473683,
					62.1052631578948
				],
				[
					-326.31578947368405,
					62.1052631578948
				],
				[
					-312.6315789473683,
					60
				],
				[
					-292.6315789473683,
					55.78947368421052
				],
				[
					-292.6315789473683,
					55.78947368421052
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				-292.6315789473683,
				55.78947368421052
			]
		},
		{
			"id": "nrz8Ix9bItkdbWG4VU3vr",
			"type": "freedraw",
			"x": 184.35304467212023,
			"y": -194.2851140219367,
			"width": 185.26315789473688,
			"height": 189.4736842105263,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 646663012,
			"version": 33,
			"versionNonce": 1595249500,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838201760,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.10526315789474,
					-4.21052631578948
				],
				[
					-1.0526315789473415,
					-5.263157894736821
				],
				[
					1.0526315789473983,
					-9.4736842105263
				],
				[
					2.10526315789474,
					-9.4736842105263
				],
				[
					4.21052631578948,
					-7.368421052631561
				],
				[
					23.157894736842138,
					11.57894736842104
				],
				[
					41.0526315789474,
					36.84210526315792
				],
				[
					63.15789473684214,
					66.31578947368422
				],
				[
					92.63157894736838,
					95.78947368421052
				],
				[
					141.05263157894734,
					137.89473684210532
				],
				[
					164.21052631578954,
					157.89473684210532
				],
				[
					180.00000000000006,
					174.73684210526312
				],
				[
					182.10526315789474,
					176.84210526315792
				],
				[
					183.15789473684214,
					180
				],
				[
					180.00000000000006,
					178.9473684210526
				],
				[
					175.78947368421058,
					176.84210526315792
				],
				[
					175.78947368421058,
					176.84210526315792
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				175.78947368421058,
				176.84210526315792
			]
		},
		{
			"id": "8aO2-_In5wGzhVycWXAMC",
			"type": "freedraw",
			"x": 187.51093940896237,
			"y": -169.02195612719981,
			"width": 72.63157894736838,
			"height": 71.57894736842104,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1494912484,
			"version": 46,
			"versionNonce": 1423190116,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838201408,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0526315789473415,
					-4.21052631578948
				],
				[
					3.1578947368420813,
					-7.368421052631618
				],
				[
					3.1578947368420813,
					-9.473684210526358
				],
				[
					2.10526315789474,
					-11.578947368421098
				],
				[
					2.10526315789474,
					-15.789473684210577
				],
				[
					3.1578947368420813,
					-18.94736842105266
				],
				[
					4.21052631578948,
					-20
				],
				[
					5.263157894736821,
					-22.10526315789474
				],
				[
					4.21052631578948,
					-22.10526315789474
				],
				[
					4.21052631578948,
					-21.0526315789474
				],
				[
					4.21052631578948,
					-11.578947368421098
				],
				[
					3.1578947368420813,
					3.1578947368420813
				],
				[
					2.10526315789474,
					21.05263157894734
				],
				[
					-2.10526315789474,
					33.68421052631578
				],
				[
					-2.10526315789474,
					34.73684210526312
				],
				[
					0,
					30.526315789473642
				],
				[
					3.1578947368420813,
					23.15789473684208
				],
				[
					5.263157894736821,
					12.631578947368382
				],
				[
					6.3157894736842195,
					-9.473684210526358
				],
				[
					6.3157894736842195,
					-24.21052631578948
				],
				[
					8.42105263157896,
					-33.68421052631584
				],
				[
					8.42105263157896,
					-35.78947368421058
				],
				[
					11.57894736842104,
					-36.84210526315792
				],
				[
					15.78947368421052,
					-36.84210526315792
				],
				[
					26.31578947368422,
					-34.73684210526318
				],
				[
					43.15789473684208,
					-32.63157894736844
				],
				[
					68.42105263157896,
					-29.473684210526358
				],
				[
					70.52631578947364,
					-29.473684210526358
				],
				[
					70.52631578947364,
					-24.21052631578948
				],
				[
					69.47368421052624,
					-23.157894736842138
				],
				[
					69.47368421052624,
					-23.157894736842138
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				69.47368421052624,
				-23.157894736842138
			]
		},
		{
			"id": "jbscHYUlzoT4mnu65MRBF",
			"type": "freedraw",
			"x": 32.77409730369919,
			"y": 36.24120176753695,
			"width": 304.2105263157895,
			"height": 104.21052631578948,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 988062052,
			"version": 37,
			"versionNonce": 2146660452,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838201190,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-4.21052631578948,
					-16.842105263157805
				],
				[
					-5.263157894736821,
					-30.526315789473642
				],
				[
					-4.21052631578948,
					-34.73684210526312
				],
				[
					1.0526315789473983,
					-41.052631578947285
				],
				[
					18.94736842105266,
					-46.31578947368416
				],
				[
					43.15789473684214,
					-48.42105263157896
				],
				[
					89.4736842105263,
					-42.10526315789468
				],
				[
					126.31578947368422,
					-32.631578947368325
				],
				[
					154.73684210526318,
					-17.894736842105203
				],
				[
					165.26315789473682,
					1.0526315789473983
				],
				[
					160,
					18.947368421052715
				],
				[
					147.36842105263156,
					35.78947368421052
				],
				[
					153.68421052631578,
					41.0526315789474
				],
				[
					174.73684210526318,
					44.21052631578948
				],
				[
					227.36842105263162,
					46.315789473684276
				],
				[
					258.94736842105266,
					46.315789473684276
				],
				[
					286.3157894736842,
					46.315789473684276
				],
				[
					298.94736842105266,
					48.42105263157896
				],
				[
					297.89473684210526,
					48.42105263157896
				],
				[
					286.3157894736842,
					51.57894736842104
				],
				[
					279.99999999999994,
					54.736842105263236
				],
				[
					277.89473684210526,
					55.78947368421052
				],
				[
					277.89473684210526,
					55.78947368421052
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				277.89473684210526,
				55.78947368421052
			]
		},
		{
			"id": "eQ6ibiwM9-TITrDvdmip_",
			"type": "freedraw",
			"x": 434.87936046159393,
			"y": 142.55699124122123,
			"width": 123.15789473684208,
			"height": 117.89473684210532,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 2014603492,
			"version": 33,
			"versionNonce": 1870019420,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838200993,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0526315789473983,
					-10.526315789473756
				],
				[
					4.21052631578948,
					-16.84210526315792
				],
				[
					8.42105263157896,
					-17.894736842105317
				],
				[
					10.526315789473642,
					-15.78947368421052
				],
				[
					16.84210526315792,
					-3.157894736842195
				],
				[
					23.15789473684208,
					37.8947368421052
				],
				[
					20,
					69.47368421052624
				],
				[
					17.894736842105203,
					92.63157894736833
				],
				[
					15.78947368421052,
					100
				],
				[
					21.0526315789474,
					92.63157894736833
				],
				[
					38.9473684210526,
					69.47368421052624
				],
				[
					64.21052631578948,
					48.42105263157896
				],
				[
					92.63157894736844,
					25.263157894736764
				],
				[
					115.78947368421052,
					2.105263157894683
				],
				[
					121.0526315789474,
					-4.21052631578948
				],
				[
					122.10526315789468,
					-4.21052631578948
				],
				[
					122.10526315789468,
					-3.157894736842195
				],
				[
					120,
					11.57894736842104
				],
				[
					117.8947368421052,
					18.9473684210526
				],
				[
					117.8947368421052,
					18.9473684210526
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				117.8947368421052,
				18.9473684210526
			]
		},
		{
			"id": "KZSqXtD74TjNcmxTz3x7H",
			"type": "freedraw",
			"x": 526.458307830015,
			"y": 245.7148859780633,
			"width": 66.31578947368416,
			"height": 60,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1304896996,
			"version": 48,
			"versionNonce": 1530441436,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838200803,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0526315789473983,
					-4.21052631578948
				],
				[
					0,
					-6.315789473684276
				],
				[
					9.473684210526358,
					-22.105263157894797
				],
				[
					14.736842105263122,
					-29.473684210526358
				],
				[
					14.736842105263122,
					-30.526315789473756
				],
				[
					10.526315789473642,
					-28.42105263157896
				],
				[
					0,
					-21.0526315789474
				],
				[
					-10.526315789473642,
					-10.526315789473756
				],
				[
					-17.894736842105317,
					1.0526315789473983
				],
				[
					-18.9473684210526,
					8.42105263157896
				],
				[
					-13.684210526315837,
					11.57894736842104
				],
				[
					-4.21052631578948,
					8.42105263157896
				],
				[
					13.684210526315724,
					-10.526315789473756
				],
				[
					22.105263157894683,
					-24.21052631578948
				],
				[
					23.15789473684208,
					-25.263157894736878
				],
				[
					21.0526315789474,
					-23.15789473684208
				],
				[
					7.368421052631561,
					-10.526315789473756
				],
				[
					3.1578947368420813,
					-2.1052631578947967
				],
				[
					3.1578947368420813,
					3.1578947368420813
				],
				[
					6.315789473684163,
					7.368421052631561
				],
				[
					22.105263157894683,
					6.315789473684163
				],
				[
					33.684210526315724,
					-1.0526315789473983
				],
				[
					43.15789473684208,
					-10.526315789473756
				],
				[
					47.36842105263156,
					-13.684210526315837
				],
				[
					46.31578947368416,
					-13.684210526315837
				],
				[
					38.9473684210526,
					-3.1578947368420813
				],
				[
					31.57894736842104,
					5.263157894736878
				],
				[
					29.473684210526358,
					15.78947368421052
				],
				[
					29.473684210526358,
					23.15789473684208
				],
				[
					32.63157894736844,
					28.42105263157896
				],
				[
					34.73684210526312,
					29.473684210526244
				],
				[
					35.78947368421052,
					28.42105263157896
				],
				[
					36.84210526315792,
					27.36842105263156
				],
				[
					37.8947368421052,
					26.315789473684163
				],
				[
					38.9473684210526,
					25.263157894736764
				],
				[
					38.9473684210526,
					25.263157894736764
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				38.9473684210526,
				25.263157894736764
			]
		},
		{
			"id": "ecFzQDZe5uX3T61AVf-oQ",
			"type": "freedraw",
			"x": 587.5109394089624,
			"y": 212.03067545174747,
			"width": 4.21052631578948,
			"height": 11.57894736842104,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1062853348,
			"version": 17,
			"versionNonce": 1570418148,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838200615,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.1052631578947967,
					-5.263157894736764
				],
				[
					-3.157894736842195,
					-8.42105263157896
				],
				[
					-4.21052631578948,
					-11.57894736842104
				],
				[
					-3.157894736842195,
					-9.473684210526244
				],
				[
					0,
					-5.263157894736764
				],
				[
					0,
					-5.263157894736764
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				0,
				-5.263157894736764
			]
		},
		{
			"id": "okOZpOSVQ8pLlYsREvMLb",
			"type": "freedraw",
			"x": 607.5109394089624,
			"y": 192.03067545174747,
			"width": 28.42105263157896,
			"height": 91.57894736842104,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1499838180,
			"version": 28,
			"versionNonce": 1637637860,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838200420,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0526315789473983,
					-1.0526315789472847
				],
				[
					-2.1052631578947967,
					3.1578947368420813
				],
				[
					-7.368421052631675,
					16.84210526315792
				],
				[
					-13.684210526315837,
					34.736842105263236
				],
				[
					-21.0526315789474,
					56.84210526315792
				],
				[
					-28.42105263157896,
					76.84210526315792
				],
				[
					-27.368421052631675,
					86.31578947368428
				],
				[
					-22.105263157894797,
					90.52631578947376
				],
				[
					-15.78947368421052,
					90.52631578947376
				],
				[
					-8.42105263157896,
					85.26315789473688
				],
				[
					0,
					70.52631578947376
				],
				[
					0,
					62.1052631578948
				],
				[
					-5.263157894736878,
					57.89473684210532
				],
				[
					-13.684210526315837,
					54.736842105263236
				],
				[
					-21.0526315789474,
					57.89473684210532
				],
				[
					-21.0526315789474,
					64.21052631578948
				],
				[
					-20,
					65.26315789473688
				],
				[
					-20,
					65.26315789473688
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				-20,
				65.26315789473688
			]
		},
		{
			"id": "XVBo5dZe8BeEfqy64r1Oa",
			"type": "freedraw",
			"x": 648.5635709879097,
			"y": 204.6622543991159,
			"width": 97.89473684210532,
			"height": 87.36842105263156,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1742265572,
			"version": 52,
			"versionNonce": 1629613020,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838200223,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.105263157894683
				],
				[
					1.0526315789473983,
					-2.105263157894683
				],
				[
					1.0526315789473983,
					-1.0526315789473983
				],
				[
					1.0526315789473983,
					7.368421052631561
				],
				[
					-4.21052631578948,
					26.315789473684276
				],
				[
					-13.684210526315724,
					48.42105263157896
				],
				[
					-27.36842105263156,
					69.47368421052636
				],
				[
					-31.57894736842104,
					75.78947368421052
				],
				[
					-28.42105263157896,
					73.68421052631584
				],
				[
					-12.631578947368439,
					57.89473684210532
				],
				[
					2.1052631578947967,
					47.36842105263156
				],
				[
					11.57894736842104,
					43.15789473684208
				],
				[
					13.684210526315837,
					44.21052631578948
				],
				[
					13.684210526315837,
					48.42105263157896
				],
				[
					12.631578947368439,
					62.1052631578948
				],
				[
					12.631578947368439,
					69.47368421052636
				],
				[
					14.736842105263236,
					75.78947368421052
				],
				[
					17.894736842105317,
					78.9473684210526
				],
				[
					27.36842105263156,
					77.89473684210532
				],
				[
					37.89473684210532,
					74.73684210526312
				],
				[
					48.42105263157896,
					69.47368421052636
				],
				[
					61.0526315789474,
					61.0526315789474
				],
				[
					66.31578947368428,
					55.78947368421052
				],
				[
					65.26315789473688,
					51.57894736842104
				],
				[
					61.0526315789474,
					50.52631578947364
				],
				[
					53.68421052631584,
					52.63157894736844
				],
				[
					42.1052631578948,
					61.0526315789474
				],
				[
					34.736842105263236,
					68.42105263157896
				],
				[
					29.473684210526358,
					74.73684210526312
				],
				[
					29.473684210526358,
					78.9473684210526
				],
				[
					31.57894736842104,
					80
				],
				[
					37.89473684210532,
					77.89473684210532
				],
				[
					50.526315789473756,
					68.42105263157896
				],
				[
					58.947368421052715,
					58.9473684210526
				],
				[
					61.0526315789474,
					54.73684210526312
				],
				[
					60,
					54.73684210526312
				],
				[
					57.89473684210532,
					60
				],
				[
					54.736842105263236,
					66.31578947368416
				],
				[
					54.736842105263236,
					72.63157894736844
				],
				[
					54.736842105263236,
					78.9473684210526
				],
				[
					55.78947368421052,
					84.21052631578948
				],
				[
					58.947368421052715,
					85.26315789473688
				],
				[
					58.947368421052715,
					85.26315789473688
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				58.947368421052715,
				85.26315789473688
			]
		},
		{
			"id": "jaN9TD4SfSn881K4nNeoD",
			"type": "freedraw",
			"x": 726.458307830015,
			"y": 269.9254122938528,
			"width": 42.10526315789468,
			"height": 29.473684210526358,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 40376932,
			"version": 22,
			"versionNonce": 467031644,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838200021,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0526315789473983,
					-4.21052631578948
				],
				[
					4.21052631578948,
					-9.473684210526358
				],
				[
					4.21052631578948,
					-8.42105263157896
				],
				[
					2.105263157894683,
					-3.1578947368420813
				],
				[
					-3.1578947368420813,
					8.42105263157896
				],
				[
					-4.21052631578948,
					15.78947368421052
				],
				[
					-3.1578947368420813,
					20
				],
				[
					0,
					20
				],
				[
					16.84210526315792,
					11.57894736842104
				],
				[
					29.473684210526244,
					3.1578947368420813
				],
				[
					35.78947368421041,
					-3.1578947368420813
				],
				[
					37.8947368421052,
					-5.263157894736878
				],
				[
					30.526315789473756,
					-1.0526315789473983
				],
				[
					30.526315789473756,
					-1.0526315789473983
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				30.526315789473756,
				-1.0526315789473983
			]
		},
		{
			"id": "WD-C60PzR-67ojJI6GN5c",
			"type": "freedraw",
			"x": 801.1951499352781,
			"y": 252.03067545174747,
			"width": 51.57894736842104,
			"height": 84.21052631578948,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 62181988,
			"version": 19,
			"versionNonce": 616556388,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838199827,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2.1052631578947967,
					-4.21052631578948
				],
				[
					5.263157894736878,
					-9.473684210526244
				],
				[
					4.210526315789593,
					-7.368421052631561
				],
				[
					0,
					0
				],
				[
					-7.368421052631675,
					11.57894736842104
				],
				[
					-17.894736842105203,
					24.21052631578948
				],
				[
					-32.631578947368325,
					45.26315789473688
				],
				[
					-38.947368421052715,
					57.89473684210532
				],
				[
					-44.210526315789366,
					66.31578947368428
				],
				[
					-46.31578947368416,
					73.68421052631584
				],
				[
					-44.210526315789366,
					74.73684210526324
				],
				[
					-44.210526315789366,
					74.73684210526324
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				-44.210526315789366,
				74.73684210526324
			]
		},
		{
			"id": "NqfMxL9X-x3oxixOPwO8n",
			"type": "freedraw",
			"x": 759.0898867773833,
			"y": 319.39909650437903,
			"width": 5.263157894736878,
			"height": 5.263157894736878,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 419173220,
			"version": 14,
			"versionNonce": 1428881764,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838199642,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0526315789472847,
					1.0526315789473983
				],
				[
					-1.0526315789472847,
					2.1052631578947967
				],
				[
					0,
					4.21052631578948
				],
				[
					1.052631578947512,
					5.263157894736878
				],
				[
					2.1052631578947967,
					5.263157894736878
				],
				[
					3.1578947368420813,
					5.263157894736878
				],
				[
					4.210526315789593,
					5.263157894736878
				],
				[
					4.210526315789593,
					5.263157894736878
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				4.210526315789593,
				5.263157894736878
			]
		},
		{
			"id": "8K7Sm2V1ocTOD98sfpUil",
			"type": "freedraw",
			"x": 827.5109394089623,
			"y": 273.08330703069487,
			"width": 50.526315789473756,
			"height": 84.21052631578948,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 609609316,
			"version": 16,
			"versionNonce": 1401104476,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838199445,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.052631578947512,
					-1.0526315789473983
				],
				[
					1.052631578947512,
					0
				],
				[
					0,
					3.1578947368420813
				],
				[
					-10.526315789473529,
					20
				],
				[
					-22.10526315789457,
					35.78947368421052
				],
				[
					-32.631578947368325,
					51.57894736842104
				],
				[
					-42.10526315789457,
					66.31578947368416
				],
				[
					-48.42105263157896,
					76.84210526315792
				],
				[
					-49.473684210526244,
					81.0526315789474
				],
				[
					-49.473684210526244,
					83.15789473684208
				],
				[
					-49.473684210526244,
					83.15789473684208
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				-49.473684210526244,
				83.15789473684208
			]
		},
		{
			"id": "WO9QHEco-e0REW_X-_X01",
			"type": "freedraw",
			"x": 748.5635709879098,
			"y": 342.5569912412212,
			"width": 6.315789473684163,
			"height": 9.473684210526244,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1683244004,
			"version": 15,
			"versionNonce": 812321244,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838199236,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.1052631578947967,
					2.105263157894683
				],
				[
					-2.1052631578947967,
					6.315789473684163
				],
				[
					0,
					9.473684210526244
				],
				[
					0,
					8.421052631578846
				],
				[
					3.1578947368420813,
					5.263157894736764
				],
				[
					4.210526315789366,
					1.0526315789472847
				],
				[
					4.210526315789366,
					0
				],
				[
					3.1578947368420813,
					1.0526315789472847
				],
				[
					1.0526315789472847,
					4.210526315789366
				],
				[
					0,
					5.263157894736764
				],
				[
					0,
					5.263157894736764
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				0,
				5.263157894736764
			]
		},
		{
			"id": "poVbTgYQCY3pUZRh00t3K",
			"type": "freedraw",
			"x": 768.5635709879098,
			"y": 363.6096228201685,
			"width": 5.263157894736878,
			"height": 11.57894736842104,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 423801188,
			"version": 13,
			"versionNonce": 672027876,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1707838198932,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-3.1578947368420813,
					-1.0526315789472847
				],
				[
					-4.210526315789593,
					-1.0526315789472847
				],
				[
					-5.263157894736878,
					1.0526315789473983
				],
				[
					-5.263157894736878,
					3.1578947368420813
				],
				[
					-2.1052631578947967,
					7.368421052631561
				],
				[
					-2.1052631578947967,
					9.473684210526358
				],
				[
					-1.052631578947512,
					10.526315789473756
				],
				[
					0,
					8.42105263157896
				],
				[
					0,
					2.1052631578947967
				],
				[
					0,
					2.1052631578947967
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				0,
				2.1052631578947967
			]
		}
	],
	"appState": {
		"theme": "dark",
		"viewBackgroundColor": "#ffffff",
		"currentItemStrokeColor": "#1e1e1e",
		"currentItemBackgroundColor": "transparent",
		"currentItemFillStyle": "solid",
		"currentItemStrokeWidth": 2,
		"currentItemStrokeStyle": "solid",
		"currentItemRoughness": 1,
		"currentItemOpacity": 100,
		"currentItemFontFamily": 1,
		"currentItemFontSize": 20,
		"currentItemTextAlign": "left",
		"currentItemStartArrowhead": null,
		"currentItemEndArrowhead": "arrow",
		"scrollX": 830.3837974331431,
		"scrollY": 485.33774560088494,
		"zoom": {
			"value": 0.9500000000000001
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