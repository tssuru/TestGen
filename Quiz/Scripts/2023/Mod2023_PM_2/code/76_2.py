try:
    a,b,c=9,2,8
    def h(b):
        a=2
        b+=4
        c=3
        return a+b+c
    
    a,b,c=9,7,4
    print(h(a),a,b,c)
    
except: print('error')
