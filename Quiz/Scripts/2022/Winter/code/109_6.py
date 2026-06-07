try:
    a,b,c=9,0,5
    def g(b):
        global c
        a=5
        b-=3
        c=5
        return a+b+c
    
    a,b,c=2,8,4
    print(g(a),a,b,c)
    
except: print('error')
