try:
    a,b,c=8,3,9
    def g(a):
        global c
        a=3
        b+=2
        c=1
        return a+b+c
    
    a,b,c=5,0,1
    print(g(a),a,b,c)
    
except: print('error')
