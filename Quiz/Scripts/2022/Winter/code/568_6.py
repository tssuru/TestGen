try:
    a,b,c=9,0,4
    def g(b):
        a-=2
        b=1
        c=3
        return a+b+c
    
    a,b,c=3,8,7
    print(g(a),a,b,c)
    
except: print('error')
