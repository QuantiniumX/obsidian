**HTTP** stands for **Hypertext Transfer Protocol.**.
It is a standard for sending and receiving data, be it HTML, JSON, or just plain text over the internet.[Learn More](https://developer.mozilla.org/en-US/docs/Web/HTTP)

an **HTTP server** is simply a computer that _serves_ data over a network via HTTP. It is the basic building block of a [web server](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/What_is_a_web_server) (and probably its most important component).

![](https://miro.medium.com/v2/resize:fit:1100/format:webp/0*JMR38Rt2J842cun0.png)


A web client, for example, a web browser, sends and HTTP request to a web server via a network. The web server which is powered by an HTTP server :
- recieves this request and processes it. 
- determined the appropriate response after doing certain checks.
- sends this response to the web client.

#### Design
We will be using TCP (Transmission Control Protocol) to implement our HTTP server. [TCP](https://en.wikipedia.org/wiki/Transmission_Control_Protocol) is the most common protocol used for HTTP servers
