try:
    a,b,c=6,9,0
    def g(b):
        global c
        a=1
        b-=3
        c=5
        return a+b+c
    
    a,b,c=2,3,4
    print(g(a),a,b,c)
    
except: print('error')
