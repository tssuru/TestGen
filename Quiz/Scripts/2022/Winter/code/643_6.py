try:
    a,b,c=1,5,9
    def g(b):
        global c
        a=2
        b+=4
        c=1
        return a+b+c
    
    a,b,c=0,2,8
    print(g(a),a,b,c)
    
except: print('error')
