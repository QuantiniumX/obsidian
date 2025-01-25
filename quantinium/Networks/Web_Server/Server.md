---
id: Server
aliases: []
tags: []
---

A web server is just a computer that serves data over a network. Server listen to request on a port (80 for http) and send a response back to the client.

Any server can handle many requests at a time. In Go, we can do this by spawning [goroutines](https://go.dev/tour/concurrency).


