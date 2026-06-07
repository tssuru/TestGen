try:
    a,b,c=7,1,9
    def g(b):
        global c
        a-=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=0,3,8
    print(g(a),a,b,c)
    
except: print('error')
