try:
    a,b,c=9,5,1
    def g(a):
        global c
        a=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=7,3,4
    print(g(a),a,b,c)
    
except: print('error')
