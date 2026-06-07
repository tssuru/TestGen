try:
    a,b,c=6,2,0
    def g(b):
        a=2
        b=4
        c=2
        return a+b+c
    
    a,b,c=5,1,8
    print(g(a),a,b,c)
    
except: print('error')
