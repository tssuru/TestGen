try:
    a,b,c=2,8,1
    def g(b):
        global c
        a-=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=5,0,4
    print(g(a),a,b,c)
    
except: print('error')
