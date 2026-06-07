try:
    a,b,c=8,1,0
    def g(b):
        global c
        a=3
        b-=5
        c=4
        return a+b+c
    
    a,b,c=2,3,7
    print(g(a),a,b,c)
    
except: print('error')
