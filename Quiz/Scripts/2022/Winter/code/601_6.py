try:
    a,b,c=4,8,2
    def g(a):
        global c
        a-=2
        b=5
        c=1
        return a+b+c
    
    a,b,c=6,0,7
    print(g(a),a,b,c)
    
except: print('error')
