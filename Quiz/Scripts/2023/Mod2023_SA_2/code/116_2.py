try:
    a,b,c=6,4,2
    def g(a):
        a+=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=0,3,8
    print(g(a),a,b,c)
    
except: print('error')
