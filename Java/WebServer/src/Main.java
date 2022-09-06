import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

class Main {
  public static void main(String[] args) throws Exception {
    
    // start receiving messages - ready to receive messages!
    // start a web server
    try (ServerSocket serverSocket = new ServerSocket(8080)){
      System.out.println("Server started!");

      while (true) {
        // handle a new message
        // client is accepting
        
          try(Socket client = serverSocket.accept()){
    	      // client <-- messages queued up in it
            System.out.println("Debug: got new message " + client.toString());
            // you can read multiple messages (requests)
            // wrong way: client.getRequest();
            
            InputStreamReader isr = new InputStreamReader (client.getInputStream());
  
            BufferedReader br = new BufferedReader(isr);
  
            // read the first request from the client
            StringBuilder request = new StringBuilder();
            
            String line;
            line=br.readLine();
            while(!line.isBlank()){
              request.append(line + "\r\n");
              line=br.readLine();
            }
            System.out.println("---Request---");
            System.out.println(request);
          
          // you can receive multiple responses
          // response a request
          // clientOutput.write(("Hello World!").getBytes());
  
          // send back a image
          // load the image from the systemfile
          FileInputStream image = new FileInputStream("java.jpg");
          
          OutputStream clientOutput = client.getOutputStream();
          clientOutput.write(("HTTP/1.1 200 OK\r\n").getBytes());
          clientOutput.write(("\r\n").getBytes());
          clientOutput.write(image.readAllBytes());
          clientOutput.flush();
            
          client.close();
          image.close();
  
        }
      }        
    }
  }  
}
