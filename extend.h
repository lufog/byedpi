int connect_hook(struct poolhd *pool, struct eval *val, 
        struct sockaddr_ina *dst, int next);
        
int on_tunnel_check(struct poolhd *pool, struct eval *val,
        char *buffer, size_t bfsize, int out);

int on_desync(struct poolhd *pool, struct eval *val,
        char *buffer, size_t bfsize);