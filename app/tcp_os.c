////
//// Created by rts on 15.03.2023.
////
//#include "tcp_os.h"
//
//void tcpecho_init()
//{
//  sys_thread_new("tcpecho", tcpecho, NULL, DEFAULT_THREAD_STACKSIZE, osPriorityNormal);
//}
//
//void tcpecho(void *arg)
//{
//  struct netconn *conn = netconn_new(NETCONN_TCP);
//  struct netconn *newconn;
//  struct netbuf *buf;
//  void *data;
//  u16_t len;
//  if (conn != NULL) {
//    err_t err = netconn_bind(conn, NULL, 7);
//
//    if (err == ERR_OK) {
//      netconn_listen(conn);
//
//      while(1) {
//        err_t accept_err = netconn_accept(conn, &newconn);
//
//        if (accept_err == ERR_OK) {
//          err_t recv_err;
//          while((recv_err = netconn_recv(newconn, &buf)) == ERR_OK) {
//            do
//            {
//              netbuf_data(buf, &data, &len);
//              netconn_write(newconn, data, len, NETCONN_COPY);
//            } while (netbuf_next(buf) >= 0);
//            netbuf_delete(buf);
//          }
//          netconn_close(newconn);
//          netconn_delete(newconn);
//        }
//      }
//    } else {
//      netconn_delete(newconn);
//    }
//  }
//}
