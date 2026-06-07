try:
    a,b,c=9,7,6
    def g(a):
        global c
        a=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=4,1,0
    print(g(a),a,b,c)
    
except: print('error')
