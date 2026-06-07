try:
    a,b,c=6,3,7
    def h(a):
        a+=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=5,0,8
    print(h(a),a,b,c)
    
except: print('error')
