try:
    a,b,c=8,4,8
    def g(a):
        a=5
        b=2
        c=3
        return a+b+c
    
    a,b,c=6,0,7
    print(g(a),a,b,c)
    
except: print('error')
