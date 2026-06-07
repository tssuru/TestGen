try:
    a,b,c=2,4,0
    def g(a):
        global c
        a=2
        b=5
        c=4
        return a+b+c
    
    a,b,c=8,7,1
    print(g(a),a,b,c)
    
except: print('error')
