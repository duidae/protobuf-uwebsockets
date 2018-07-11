# protobuf-uwebsockets

## architecture
* 架構: 瀏覽器和後端先經protocol buffer壓縮資料和指令，再透過uwebsockets溝通,指令透過gRPC呼叫對應function 
* test for integrating protocol-buffer, uWebSockets, gRPC senario
* client-server model
  * client: browser
  * server: backend
  
## TODO
* client javascript version
* server: how to get websocket payload using uWebSockets?
