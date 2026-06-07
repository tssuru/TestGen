try:
    a,b,c=1,4,7
    def g(a):
        a+=4
        b=3
        c=4
        return a+b+c
    
    a,b,c=0,6,4
    print(g(a),a,b,c)
    
except: print('error')
