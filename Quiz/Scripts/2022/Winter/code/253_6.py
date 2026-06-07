try:
    a,b,c=3,8,5
    def g(b):
        a-=5
        b=1
        c=2
        return a+b+c
    
    a,b,c=6,0,4
    print(g(a),a,b,c)
    
except: print('error')
